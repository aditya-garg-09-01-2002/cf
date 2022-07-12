#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<char,int>m;
        string s;
        cin>>s;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(m[s[i]]==0)
            {
                m[s[i]]=1;
                ans++;
            }
            ans++;
        }
        cout<<ans<<endl;
    }
}
