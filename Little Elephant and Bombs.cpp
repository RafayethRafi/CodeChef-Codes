//https://www.codechef.com/problems/LEBOMBS


#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,cnt=0;
        cin>>n;
        string s;
        cin>>s;
        int sz = s.size();

        int a[sz+5];
        memset(a,0,sizeof(a));

        if(s[0]=='1')
        {
            a[0] = 1;
            a[1] = 1;
        }
        if(s[sz-1]=='1')
        {
            a[sz-1] =1;
            a[sz-2] =1;
        }

        for(i=1;i<sz-1;i++)
        {
            if(s[i]=='1')
            {
                a[i] =1;
                a[i+1] =1;
                a[i-1] =1;
            }
        }

        for(i=0;i<sz;i++)
            if(a[i]==0) cnt++;
            cout<<cnt<<endl;

    }

    return 0;
}

