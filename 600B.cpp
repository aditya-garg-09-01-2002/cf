#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<int>v1,v2;
    map<int,int>m1,m2;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        m1[a]++;
        v1.push_back(a);
    }
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        v2.push_back(a);
    }
    sort(v1.begin(),v1.end());
    // for(int i=0;i<n;i++)
    // cout<<v1[i]<<" ";
    // cout<<endl;
    for(int i=0;i<m;i++)
    {
        vector<int>::iterator it=upper_bound(v1.begin(),v1.end(),v2[i]);
        if(*it>v2[i])
        it--;
        if(it==v1.end())
        cout<<n<<" ";
        else
        cout<<it-v1.begin()+1<<" ";
        // cout<<it-v1.begin()<<endl;
    }
}