#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n , l ,r;
        cin>>n>>l>>r;
        vector<int> v;
        for(int i=1;i<=n;i++)
        {
            int a=r-r%i;
            if(a>=l)
            v.push_back(a);
        }
        if(v.size()==n)
        {
            cout<<"YES\n";
            for(int i=0;i<n;i++)
            cout<<v[i]<<" ";
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
