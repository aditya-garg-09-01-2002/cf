#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string>v;
        string ans;
        map<string,int>m;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
            m[s]++;
        }
        for(int i=0;i<n;i++)
        {
            string ss;
            int check=0;
            while(v[i].length()>0)
            {
                ss+=v[i][0];
                v[i].erase(0,1);
                // cout<<ss<<" "<<v[i]<<endl;
                if(m[ss]>=1&&m[v[i]]>=1)
                {
                    ans+='1';
                    check=1;
                    break;
                }
            }
            if(!check)
            ans+='0';
        }
        cout<<ans<<endl;
    }
}
