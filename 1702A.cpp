#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int d=log10(n);
        cout<<(int)(n-pow(10,d))<<endl;
    }
}
