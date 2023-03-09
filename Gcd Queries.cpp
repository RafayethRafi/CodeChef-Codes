#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n,q,i,j;
        cin>>n>>q;

        vector<int>a(n+5), fw(n+5,0), bw(n+5,0);

        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            fw[i] = __gcd(a[i],fw[i-1]);
        }

        for(i=n;i>=1;i--)
        {
            bw[i] = __gcd(a[i],bw[i+1]);
        }

        while(q--)
        {
            int l,r;
            cin>>l>>r;

            cout<<__gcd(fw[l-1],bw[r+1])<<endl;
        }
    }
    return 0;
}
