#include <bits/stdc++.h>

using namespace std;

int main() {
    #define int unsigned long long int
    int n1,n2;
    vector<int>v1,v2;
    cin>>n1;
    int s3=0;
    int s4=0;
    for(int i=0;i<n1;i++)
    {
        int a;
        cin>>a;
        v1.push_back(a);
        s3+=a;
    }
    cin>>n2;
    int c=0;
    for(int i=0;i<n2;i++)
    {
        int a;
        cin>>a;
        v2.push_back(a);
        s4+=a;
    }
    if(s3!=s4)
    {
        cout<<-1;
        return 0;
    }
    else
    {
        int s1=0;
        int s2=0;
        int p1=-1;
        int p2=-1;
        for(int i=0,j=0;i<n1&&j<n2;)
        {
            int a=v1[i];
            int b=v2[j];
            if(s1==0&&s2==0)
            {
                if(a==b)
                {
                    c++;
                    i++;
                    j++;
                }
                else
                {
                    s1+=a;
                    s2+=b;
                    p1=i;
                    p2=j;
                    if(s1<s2)
                    i++;
                    else
                    j++;
                }
            }
            else
            {
                if(i==p1)
                {
                    s2+=b;
                    if(s2==s1)
                    {
                        c++;
                        s1=0;
                        s2=0;
                        p1=i;
                        p2=j;
                        i++;
                        j++;
                    }
                    else
                    {
                        if(s1<s2)
                        {
                            i++;
                            p2=j;
                        }
                        else
                        {
                            j++;
                            p1=i;
                        }
                    }
                }
                else if(j==p2)
                {
                    s1+=a;
                    if(s2==s1)
                    {
                        c++;
                        s1=0;
                        s2=0;
                        p1=i;
                        p2=j;
                        i++;
                        j++;
                    }
                    else
                    {
                        if(s1<s2)
                        {
                            i++;
                            p2=j;
                        }
                        else
                        {
                            j++;
                            p1=i;
                        }
                    }
                }
            }
        }
        cout<<c;
    }
}
