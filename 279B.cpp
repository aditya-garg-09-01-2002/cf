#include <bits/stdc++.h>

using namespace std;

int main() {
    #define int long long int
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(i!=0)
        v.push_back(a+v[i-1]);
        else
        v.push_back(a);
    }
    int i=0;
    int j=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]<=k)
        {
            ans=i+1;
        }
        else
        {
            if(v[i]-v[j]<=k)
            {
                ans=max(ans,i-j);
            }
            else
            {
                while(j<n&&v[i]-v[j]>k)
                {
                    j++;
                }
                if(j<n&&v[i]-v[j]<=k)
                ans=max(ans,i-j);
            }
        }
    }
    cout<<ans<<endl;
}