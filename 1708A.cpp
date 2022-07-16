#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        int p;
        int check=0;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                cin>>p;
            }
            else
            {
                int a;
                cin>>a;
                if(a%p!=0)
                check=1;
            }
        }
        if(check)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}
