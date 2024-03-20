#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y;
    int sum=0;
    cin>>a>>b>>x>>y;
    for(int i=a;i<=b;i++)
    {
        if(i%x==0 && i%y!=0)
        {
            sum=sum+i;
        }
       
    }
    cout<<sum;
}