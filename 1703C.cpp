#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            string s;
            cin>>s;
            for(int j=s.length()-1;j>=0;j--)
            {
                if(s[j]=='D')
                {
                    v[i]++;
                    v[i]%=10;
                }
                else if(s[j]=='U')
                {
                    v[i]--;
                    if(v[i]==-1)
                    v[i]=9;
                }
            }
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
