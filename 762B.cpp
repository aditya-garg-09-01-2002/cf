#include <bits/stdc++.h>

using namespace std;

int main() {
    #define int long long int
    int a,b,c;
    cin>>a>>b>>c;
    int n;
    cin>>n;
    deque<int>u,p;
    for(int i=0;i<n;i++)
    {
        int a;
        string s;
        cin>>a>>s;
        if(s=="PS/2")
        p.push_back(a);
        else
        u.push_back(a);
    }
    sort(p.begin(),p.end());
    sort(u.begin(),u.end());
    int ans=0;
    int count=0;
    while(a&&u.size()>0)
    {
        count++;
        a--;
        ans+=u[0];
        u.pop_front();
    }
    while(b&&p.size()>0)
    {
        b--;
        count++;
        ans+=p[0];
        p.pop_front();
    }
    while(c&&(u.size()>0||p.size()>0))
    {
        if(u.size()==0||(u.size()>0&&p.size()>0&&u[0]>=p[0]))
        {
            count++;
            c--;
            ans+=p[0];
            p.pop_front();
        }
        else if(p.size()==0||(u.size()>0&&p.size()>0&&p[0]>=u[0]))
        {
            count++;
            c--;
            ans+=u[0];
            u.pop_front();
        }
    }
    cout<<count<<" "<<ans;
}