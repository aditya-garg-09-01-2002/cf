#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int>v;
        map<int,pair<int,int>>m;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
            if(m[a].first==0)
            {
                m[a].first=i+1;
                m[a].second=i+1;
            }
            else
            {
                m[a].second=i+1;
            }
        }
        while(q--)
        {
            int a,b;
            cin>>a>>b;
            if(m[b].second!=0&&m[a].second!=0)
            {
                if(m[a].first<=m[b].second)
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
            }
            else
            cout<<"NO"<<endl;
        }
    }
}
