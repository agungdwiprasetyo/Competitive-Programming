Uses math;
const inf:longint=2000000000;

{segment tree for mainting minimum of answers in a range}
    var min_tree:array[1..400004] of longint;

    {initializer}
    procedure min_init(ind,l,h:longint);
    var m:longint;
    begin
        min_tree[ind]:=inf;
        if l<>h then begin
            m:=trunc((l+h)/2);
            min_init(2*ind,l,m);
            min_init(2*ind+1,m+1,h);
        end;
    end;

    {change values at a leaf}
    procedure min_change(ind,l,r,pos,val:longint);
    var m:longint;
    begin
        if (pos<l) or (pos>r) then exit();
        if l=r then begin
            min_tree[ind]:=val;
            exit();
        end;
        m:=trunc((l+r)/2);
        min_change(2*ind,l,m,pos,val);
        min_change(2*ind+1,m+1,r,pos,val);
        min_tree[ind]:=min(min_tree[2*ind],min_tree[2*ind+1]);
    end;

    {find min of range [x,y]}
    function min_tell(ind,l,r,x,y:longint):longint;
    var m:longint;
    begin
        if (y<l) or (x>r) then exit(inf);
        if (x<=l) and (r<=y) then exit(min_tree[ind]);
        m:=trunc((l+r)/2);
        exit(min(min_tell(2*ind,l,m,x,y),min_tell(2*ind+1,m+1,r,x,y)));
    end;

{segment tree for maintaining max and min compatibility value in a range}
    var minc_tree,maxc_tree:array[1..400004] of longint;

    {initialize tree}
    procedure com_init(ind,l,r:longint);
    var m:longint;
    begin
        minc_tree[ind]:=inf;
        maxc_tree[ind]:=-inf;
        if l<>r then begin
            m:=trunc((l+r)/2);
            com_init(2*ind,l,m);
            com_init(2*ind+1,m+1,r);
        end;
    end;

    {change "pos"th value of the tree to "val"}
    procedure com_change(ind,l,r,pos,val:longint);
    var m:longint;
    begin
        if (pos<l) or (pos>r) then exit();
        if l=r then begin
            maxc_tree[ind]:=val;
            minc_tree[ind]:=val;
            exit();
        end;
        m:=trunc((l+r)/2);
        com_change(2*ind,l,m,pos,val);
        com_change(2*ind+1,m+1,r,pos,val);
        maxc_tree[ind]:=max(maxc_tree[2*ind],maxc_tree[2*ind+1]);
        minc_tree[ind]:=min(minc_tree[2*ind],minc_tree[2*ind+1]);
    end;

    {find min index "j" after a given "i" such that all values in range (i,j] are less than or equal to a given value "up"}
    {since tree as delimiters + and - inf, we are going right to left, and inserting values in the tree as we go, "i" does not matter.}
    {if no such j exists, returned values will be <=i}
    function upper_bound(ind,l,r,up:longint):longint;
    var m,val:longint;
    begin
        if maxc_tree[ind]<=up then exit(r)
        else if l=r then exit(-1)
        else begin
            m:=trunc((l+r)/2);
            if maxc_tree[2*ind]>up then exit(upper_bound(2*ind,l,m,up))
            else begin
                val:=upper_bound(2*ind+1,m+1,r,up);
                if val>=0 then exit(val)
                else exit(m);
            end;
        end;
    end;

    {find min index "j" after a given "i" such that all values in range (i,j] are more than or equal to a given value "low"}
    {since tree as delimiters + and - inf, we are going right to left, and inserting values in the tree as we go, "i" does not matter.}
    {if no such j exists, returned values will be <=i}
    function lower_bound(ind,l,r,low:longint):longint;
    var m,val:longint;
    begin
        if minc_tree[ind]>=low then exit(r)
        else if l=r then exit(-1)
        else begin
            m:=trunc((l+r)/2);
            if minc_tree[2*ind]<low then exit(lower_bound(2*ind,l,m,low))
            else begin
                val:=lower_bound(2*ind+1,m+1,r,low);
                if val>=0 then exit(val)
                else exit(m);
            end;
        end;
    end;

{main}
    var n,d,t,ii,i,last,bst:longint;
    var compat:array[1..100001] of longint;
    begin
        read(t);
        for ii:=1 to t do begin
            read(n,d);
            for i:=1 to n do begin
                read(compat[i]);
            end;
            min_init(1,1,n);
            com_init(1,1,n);

            min_change(1,1,n,n,1);
            com_change(1,1,n,n,compat[n]);
            for i:=n-1 downto 1 do begin
                last:=min(upper_bound(1,1,n,compat[i]+d),lower_bound(1,1,n,compat[i]-d));

                if last>i then begin
                    if last>=n then bst:=1 else bst:=1+min_tell(1,1,n,last+1,last+1);
                    bst:=min(bst,1+min_tell(1,1,n,i+1,last));
                end
                else bst:=1+min_tell(1,1,n,i+1,i+1);

                min_change(1,1,n,i,bst);
                com_change(1,1,n,i,compat[i]);
            end;
            writeln(min_tell(1,1,n,1,1));
        end;
    end.
