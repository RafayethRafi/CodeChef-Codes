#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define MOD 1000000007 // [We can change the value of MOD as we want]
#define ll long long

ll power(__int128 a,__int128 n,ll m)
{
    __int128 result = 1;
    while(n>0)
    {
        if(n&1) result = (result*a)%m, n--;

        a= (a*a)%m;
        n/=2;
    }
    return result;
}


int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,ans,x,y;
        cin>>a>>b>>n;

        if(a==b)
        {
            x = power(a,n,MOD);
            y = power(b,n,MOD);
        }
        else
        {
            x = power(a,n,(a-b));
            y = power(b,n,(a-b));
        }

        cout<<__gcd((x+y),(a-b))%MOD<<endl;
    }
    return 0;
}
