#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int mx = 1e3+123;
int d[mx][mx];

int dx[8] = {1, -1, 0,  0, 1,  1, -1, -1};
int dy[8] = {0,  0, 1, -1, 1, -1,  1, -1};

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {

        memset(d,-1,sizeof(d));

        int n,m,i,j,x=0,ans=0;
        cin>>n>>m;
        int a[n][m];
        queue<pair<int,int>>q;

        for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]>x) x = a[i][j];
        }

        for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            if(a[i][j]==x)
            {
                q.push({i,j});
                d[i][j] = 0;
            }
        }

        while(!q.empty())
        {
            int u = q.front().first;
            int v = q.front().second;

            q.pop();

            for(i=0;i<8;i++)
            {
                int l = u + dx[i];
                int r = v + dy[i];

                if(l>=0 && l<n && r>=0 && r<m && d[l][r]==-1)
                {
                    q.push({l,r});
                    d[l][r] = d[u][v] + 1;
                    ans = max(ans,d[l][r]);
                }
            }
        }

        cout<<ans<<endl;

        

        
    }
    return 0;
}
