#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k , q;
    cin>>n>>k>>q;
    int arr[200001]={0};
    map<int,int>m1,m2,m3;
    vector<int>v1,v2;
    for(int i=0;i<n;i++)
    {
        int a, b;
        cin>>a>>b;
        v1.push_back(a);
        v2.push_back(b);
        m1[a]++;
        m2[b]++;
    }
    int l =*min_element(v1.begin(),v1.end());
    int h =*max_element(v2.begin(),v2.end());
    int c=0;
    vector<int>v;
    for(int i=l;i<=h;i++)
    {
        c+=m1[i];
        m3[i]+=c;
        c-=m2[i];
        if(m3[i]>=k)
        arr[i]++;
    }
    for(int i=1;i<=200000;i++)
    {
        arr[i]+=arr[i-1];
    }
    while(q--)
    {
        int a, b;
        cin>>a>>b;
        // cout<<a<<" "<<b<<" "<<arr[a-1]<<" "<<arr[b]<<endl;
        cout<<arr[b]-arr[a-1]<<endl;;
    }
}
