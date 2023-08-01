#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k[n];
    for(int i=0;i<n;i++)
    {
        cin>>k[i];
    }
    int a,b;
    cin>>a>>b;
    sort(k,k+n);
    int x=0,y=0,z=0;
    int j[n];
    for(int i=0;i<n;i++)
    {
        if(k[i]<=a)
        {
            j[x]=k[i];
        }else
        {
            if(k[i]<b)
            {
                j[x]=k[i];
            }else
            {
                if(k[i]>=b)
                {
                    j[x]=k[i];
                }
            }
        }
        x++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<j[i]<<"  ";
    }
}
