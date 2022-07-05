#include <bits/stdc++.h>

using namespace std;

int main() {
    #define int long long int
    int n,q,k;
    cin>>n>>q>>k;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    vector<int>l,r,d;
    for(int i=0;i<q;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        l.push_back(x);
        r.push_back(y);
        d.push_back(z);
    }
    map<int,int>m1,m2;
    for(int i=0;i<k;i++)
    {
        int x ,y;
        cin>>x>>y;
        m1[x]++;
        m2[y]++;
    }
    map<int,int>m;
    int c=0;
    for(int i=1;i<=q;i++)
    {
        c+=m1[i];
        m[i]+=c;
        c-=m2[i];
    }
    map<int,int>m3,m4;  
    c=0;
    for(int i=1;i<=q;i++)
    {
        m3[l[i-1]]+=m[i]*d[i-1];
        m4[r[i-1]]+=m[i]*d[i-1];
    }
    c=0;
    for(int i=1;i<=n;i++)
    {
        c+=m3[i];
        v[i-1]+=c;
        c-=m4[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}
