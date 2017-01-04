#include<bits/stdc++.h>
using namespace std;
double segitiga(double,double,double);

double segitiga(double a, double b, double c)
{
    double s;
    s=(a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{
    int n;
    double u,v,w,U,V,W;
    double R,S=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> u >> v >> w >> W >> V >> U;
        S+=segitiga(u,V,w);
        S+=segitiga(W,u,v);
        S+=segitiga(W,V,U);
        S+=segitiga(U,v,w);
        R=sqrt(4*u*u*v*v*w*w- u*u*(v*v+w*w - U*U)*(v*v+w*w-U*U) - v*v*(w*w+u*u - V*V)*(w*w+u*u-V*V) - w*w*(u*u + v*v - W*W)*(u*u+v*v-W*W) + (v*v +w*w - U*U)*(w*w+u*u- V*V)*(u*u+v*v - W*W))/12;
        printf("%.4lf\n",R*3.0/S);
        S=0;
    }
    return 0;
}
