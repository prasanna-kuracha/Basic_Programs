#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d",a[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d",a[i]);
        }
    }
}
