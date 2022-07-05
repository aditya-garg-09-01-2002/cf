#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n , k , d;
        cin>>n>>k>>d;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int c=0;
        int ans=0;
        map<int,int>m;
        for(int i=0;i<d;i++)
        {
            if(m[v[i]]==0)
            c++;
            m[v[i]]++;
        }
        ans=c;
        for(int i=d;i<n;i++)
        {
            if(v[i]==v[i-d])
            {
                
            }
            else
            {
                if(m[v[i]]==0)
                {
                    c++;
                }
                if(m[v[i-d]]==1)
                c--;
            }
            m[v[i-d]]--;
            m[v[i]]++;
            ans=min(c,ans);
        }
        cout<<ans<<endl;
    }
}
