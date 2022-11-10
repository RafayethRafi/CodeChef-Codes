#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);


const int lim = 1e5+5;
double s[lim],d[lim];
const double eps = 1e-9;

int n,k;

double f(double t)
{
    double mx = -1e18,mn = 1e18;
    for(int i=0;i<n;i++)
    {
        double pos = t*s[i] + d[i];
        mx = max(mx,pos);
        mn = min(mn,pos);
    }
    return mx - mn;
}

int main()
{
    optimize();
    int i;
    cin>>n>>k;

    for(i=0;i<n;i++) cin>>s[i]>>d[i];

    double lo = 0, hi = k;

    while((hi-lo) >=  eps) //lo<hi
    {
        double m1 = lo + (hi-lo)/3.0;
        double m2 = hi - (hi-lo)/3.0;

        if(f(m1) > f(m2)) lo = m1;
        else hi = m2;
    }

    cout<<fixed<<setprecision(6)<<f(lo)<<endl;

    return 0;
}
