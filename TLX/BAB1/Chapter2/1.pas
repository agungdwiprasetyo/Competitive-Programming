program array;
var n:longint;
    i: integer;
    k: array[1...25000] of integer;
begin
    while not eof(input) do
    begin
    i:=i+1;
        readln(k[i]);
        end;

    for i:=1 downto 1 do begin
        writeln(k[i]);
        end;
end
