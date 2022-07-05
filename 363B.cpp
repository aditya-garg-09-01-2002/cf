#include <bits/stdc++.h>

using namespace std;

int main() {
    int n , k;
    cin>>n>>k;
    vector<int>v;
    int s=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        if(i<k)
        s+=a;
    }
    int ans=s;
    int ind=k;
    for(int i=k;i<n;i++)
    {
        s+=v[i];
        s-=v[i-k];
        // cout<<s<<" ";
        if(s<ans)
        {
            ans=s;
            ind=i+1;
            // cout<<ind<<endl;
        }
    }
    cout<<ind-k+1;
}
