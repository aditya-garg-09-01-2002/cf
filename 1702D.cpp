#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int k;
        cin>>s>>k;
        int n=s.length();
        int sum=0;
        string temp=s;
        sort(temp.begin(),temp.end());
        map<char,int>m;
        for(int i=0;i<n;i++)
        {
            sum+=s[i]-'a'+1;
            m[s[i]]++;
        }
        int i=n-1;
        while(sum>k)
        {
            m[temp[i]]--;
            sum=sum-temp[i]+'a'-1;
            i--;
        }
        for(int i=0;i<n;i++)
        {
            if(m[s[i]]>0)
            {
                m[s[i]]--;
                cout<<s[i];
            }
        }
        cout<<endl;
    }
}
