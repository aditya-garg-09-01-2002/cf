#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        while(v.size()>=2)
        {
            sort(v.begin(),v.end());
            for(int i=0;i<n-1;i++)
            {
                v[i]=v[i+1]-v[i];
            }
            v.pop_back();
        }
        cout<<v[0]<<endl;
    }
}
