#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,sum1=0,sq,diff;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum1=sum1+i;
        sq=i*i;
        sum=sum+sq;
        
    }
    
    diff=pow(sum1,2)-sum;
    printf("%d",diff);
}