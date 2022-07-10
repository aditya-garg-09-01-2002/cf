#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        int ans=0;
        char x='.';
        char y='.';
        char z='.';
        for(int i=0;i<n;i++)
        {
            if(s[i]==x||s[i]==y||s[i]==z)
            {
                continue;
            }
            else
            {
                if(x=='.')
                {
                    x=s[i];
                }
                else if(y=='.')
                {
                    y=s[i];
                }
                else if(z=='.')
                {
                    z=s[i];
                }
                else
                {
                    ans++;
                    x=s[i];
                    y='.';
                    z='.';
                }
            }
        }
        if(x=='.'&&y=='.'&&z=='.')
        {
            
        }
        else 
        ans++;
        cout<<ans<<endl;
    }
}
