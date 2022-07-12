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
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        else if(n==2)
        {
            int ans=0;
            int c1=0;
            int c2=0;
            if(v[0][0]=='1')
            c1++;
            else
            c2++;
            if(v[0][1]=='1')
            c1++;
            else
            c2++;
            if(v[1][0]=='1')
            c1++;
            else
            c2++;
            if(v[1][1]=='1')
            c1++;
            else
            c2++;
            if(c1==0)
            {
                // cout<<"kcasn";
            }
            else if(c1==1||c1==3)
            {
                ans++;
                // cout<<"kncasnksa";
            }
            else if(c1==2)
            {
                ans++;
                ans++;
                // cout<<"mcskaksamdlasmdlas";
            }
            cout<<ans<<endl;
            continue;
        }
        int ans=0;
        for(int i=0;i<n/2;i++)
        {
            for(int j=i;j<n-i-1;j++)
            {
                int a=n-2*i;
                char w=v[i][j];
                char x=v[j][n-i-1];
                char y=v[n-i-1][n-j-1];
                char z=v[n-j-1][i];
                int c1=0;
                int c2=0;
                // cout<<w<<" "<<x<<" "<<y<<" "<<z<<endl;
                // cout<<a<<endl<<i<<" "<<j<<endl<<j<<" "<<n-i-1<<endl<<n-i-1<<" "<<n-j-1<<endl<<n-j-1<<" "<<i<<endl<<endl;
                if(x=='1')
                c1++;
                else
                c2++;
                if(y=='1')
                c1++;
                else
                c2++;
                if(w=='1')
                c1++;
                else
                c2++;
                if(z=='1')
                c1++;
                else
                c2++;
                // cout<<c1<<" "<<c2<<endl;
                if(c1==0)
                {
                    // cout<<"kcasn";
                }
                else if(c1==1||c1==3)
                {
                    ans++;
                    // cout<<"kncasnksa";
                }
                else if(c1==2)
                {
                    ans++;
                    ans++;
                    // cout<<"mcskaksamdlasmdlas";
                }
                // cout<<endl;
            }
        }
        cout<<ans<<endl;
    }
}
