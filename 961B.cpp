#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n , k;
    cin>>n>>k;
    vector <int> a ;
    vector <int> b;
    int f0=-1;
    for(int i = 0; i < 2*n ; i++)
    {
        int x ;
        cin>>x;
        if(i<n)
        {
            a.push_back(x);
        }
        else
        {
            b.push_back(x);
            if(x==0&&f0==-1)
            {
                f0=i-n;
            }
        }
    }
    if(k>=n)
    {
        int s=0;
        for(int i = 0 ; i < n ; i++)
        {
            s+=a[i];
        }
        cout<<s;
    }
    else
    {
        int s =0;
        for(int i = 0 ; i < n ; i++)
        {
            if(b[i]==1)
            {
                s+=a[i];
            }
        }
        int se=0;
        int i=f0;
        for(;i< f0+k&&i<n ; i++)
        {
            if(b[i]==0)
            {
                se+=a[i];
            }
        }
        int st =se;
        for(;i<n ;i++)
        {
            // cout<<st<<endl;
            // cout<<((b[i-k]==0)?a[i-k]:0)<<"  "<<((b[i]==0)?a[i]:0)<<"  "<<st<<endl;
            st=st+((b[i]==0)?a[i]:0)-((b[i-k]==0)?a[i-k]:0);
            // cout<<st<<endl;
            if(st>se)
            {
                se=st;
            }
        }
        cout<<se+s;
    }
}
