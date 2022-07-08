#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>v,vr;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        m[a]=i;
    }
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        vr.push_back(a);
    }
    reverse(vr.begin(),vr.end());
    int c=0;
    for(int i=0;i<n;i++)
    {
        // cout<<vr[i]<<" "<<m[vr[i]]<<endl;
        while(v.size()>0&&v.size()>m[vr[i]])
        {
            // cout<<"  "<<vr[i]<<" "<<v[v.size()-1]<<endl;
            if(v[v.size()-1]!=vr[i])
            c++;
            v.pop_back();
        }
    }
    cout<<c;
}
