#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int N = 1e5+10;
const int INF = 1e9+10;

vector<pair<int,int>> g[N];
vector<int> lvl(N,INF);

int n,m;

int bfs()
{
    deque<int> q;
    q.push_back(1);
    lvl[1] = 0;

    while(!q.empty())
    {
        int cur_v = q.front();
        q.pop_front();

        for(auto child: g[cur_v])
        {
            int child_v = child.first;
            int wt = child.second;

            if((lvl[cur_v]+ wt) < lvl[child_v])
            {
                lvl[child_v] = lvl[cur_v]+wt;
                if(wt ==1)
                {
                    q.push_back(child_v);
                }
                else q.push_front(child_v);
            }
        }
    }

    return (lvl[n]==INF)?-1 :lvl[n];
}

int main()
{
    optimize();
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        if(x==y) continue;
        g[x].push_back({y,0});
        g[y].push_back({x,1});
    }

    cout<<bfs()<<endl;
    return 0;
}
