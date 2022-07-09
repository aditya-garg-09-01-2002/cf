#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        vector<int>v;
        map<int,int>m;
        map<int,vector<int>>mi;
        int check=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(m[a]==0)
            v.push_back(a);
            mi[a].push_back(i);
            m[a]++;
            if(m[a]>=2)
            check=1;
        }
        if(check)
        {
            int ans=INT_MAX;
            for(int i=0;i<v.size();i++)
            {
                for(int j=0;j<mi[v[i]].size()-1;j++)
                {
                    ans=min(ans,mi[v[i]][j+1]-mi[v[i]][j]);
                }
            }
            cout<<ans+1<<endl;
        }
        else
        cout<<-1<<endl;
    }
}
