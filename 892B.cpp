#include <iostream>
#include<vector>

using namespace std;

int main() {
    int n ;
    cin>>n;
    vector <int>v;
    for(int i = 0 ; i < n ; i++)
    {
        int a ;
        cin>>a;
        v.push_back(a);
    }
    int c =0;
    vector<int>a(n,0);
    for(int i = n-1;i>=0;i--)
    {
        if(c>0)
        {
            c--;
            a[i]=1;
        }
        if(c<v[i])
        {
            c=v[i];
        }
    }
    c=0;
    for(int i = 0 ; i <n ; i++)
    {
        if(a[i]==0)
        {
            c++;
        }
    }
    cout<<c;
}
