#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    int t;
    t=1;
    while(t--)
    {
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
        int c=0;
        int ans=0;
        int i=0,j=0;
        for(;i<n&&j<n;)
        {
            while(i<n-1&&v[i+1]<=2*v[j])
            i++;
            // cout<<i<<" "<<j<<endl;
            ans=max(ans,i-j+1);
            j++;
        }
        cout<<n-ans<<endl;
    }
}
