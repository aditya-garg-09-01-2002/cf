#include <bits/stdc++.h>

using namespace std;

int main() {
    #define int long long int
    int n;
    cin>>n;
    int m=INT_MAX;
    vector<int>v;
    int f=-1;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        m=min(m,a);
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]==m)
        {
            f=i;
            break;
        }
    }
    int count=0;
    int c=0;
    int check=0;
    int check2=0;
    if(*max_element(v.begin(),v.end())==m)
    {
        cout<<m*n;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(check2)
        {
            i--;
            check2=0;
        }
        if(v[i]==m)
        {
            count=max(count,c);
            if(check)
            break;
            c=0;
        }
        else
        c++;
        if(i==n-1)
        {
            i++;
            check=1;
            check2=1;
            i%=n;
        }
        // cout<<i<<" "<<c<<endl;
    };
    // cout<<endl
    count=max(c,count);
    cout<<m*n+count;
}
