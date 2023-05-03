
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
        long long n,i;
        cin>>n;
        long long sum =0, k = 0;
        for(i=0;i<n;i++)
        {
            long long x;
            cin>>x;
            sum += x;
            if(x>0) k++;
        }

        if(sum<100) cout<<"NO"<<endl;
        else if((sum - 100) < k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
