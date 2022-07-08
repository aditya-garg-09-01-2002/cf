#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int prev=v[0];
    int k=n;
    for(int i=0;i<n;i++)
    if(v[i]!=prev)
    {
        k=i;
        break;
    }
    int ans=0;
    for(int i=0;i<n&&k<n;)
    {
        if(v[i]==v[k])
        {
            k++;
        }
        else
        {
            ans++;
            i++;
            k++;
        }
    }
    cout<<ans;
}
