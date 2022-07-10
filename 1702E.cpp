#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,vector<int>>m;
        int check=0;
        map<pair<int,int>,int>p;
        for(int i=0;i<n;i++)
        {
            int a, b;
            cin>>a>>b;
            if(a==b)
            {
                check=1;
            }
            m[a].push_back(b);
            m[b].push_back(a);
            p[{a,b}]=1;
        }
        if(n%2==1)
        check=1;
        for(int i=1;i<=n&&check==0;i++)
        {
            if(m[i].size()!=2)
            check=1;
        }
        for(int i=1;i<=n&&check==0;i++)
        {
            int a=m[i][0];
            int b=m[i][1];
            if(p[{a,b}]==1||p[{b,a}]==1)
            {
                check=1;
            }
        }
        if(check)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}
