#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i,j,a[100000],t=0,c1,c2,count=0,max=0;
    string s;
    cin>>n>>k;
    for(i=0; i<k; i++)
    {
        cin>>s;
        c1=0;
        c2=0;
        for(j=0; s[j]!='\0'; j++)
        {
            if(s[j]=='0')c1++;
        }
        if(c1>0)
        {
            a[t]=0;t++;
        }
        else
        {
            a[t]=1;t++;
        }
    }
    for(t=0; t<k; t++)
    {
        if(a[t]==0)
        {
            count++;
            if(count>max)max=count;
        }
        else
        {
            if(count>max)
                max=count;count=0;
        }
    }
    cout<<max;
}
