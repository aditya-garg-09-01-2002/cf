#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n , m;
        cin>>n>>m;
        string s(m,'B');
        while(n--)
        {
            int a;
            cin>>a;
            int x=a-1;
            int y=m-a;
            if(s[x]=='B'&&s[y]=='A')
            s[x]='A';
            else if(s[x]=='A'&&s[y]=='B')
            s[y]='A';
            else
            {
                if(x<=y)
                s[x]='A';
                else
                s[y]='A';
            }
        }
        cout<<s<<endl;
    }
}
