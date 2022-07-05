#include <bits/stdc++.h>

using namespace std;

int main() {
    #define int long long int
    int n;
    cin>>n;
    vector<int>v;
    map<int,int>m1,m2;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        m1[i+1]+=m1[i]+a;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        m2[i+1]+=m2[i]+v[i];
    }
    /*for(int i=1;i<=n;i++)
    cout<<m1[i]<<" ";
    cout<<endl;*/
    /*for(int i=1;i<=n;i++)
    cout<<m2[i]<<' ';
    cout<<endl;*/
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==1)
        {
            cout<<m1[c]-m1[b-1]<<endl;
        }
        else
        {
            cout<<m2[c]-m2[b-1]<<endl;
        }
    }
}
