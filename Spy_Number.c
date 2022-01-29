#include<stdio.h>
int main()
{
    int n,s=0,p=1,temp,d;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        d=temp%10;
        s=s+d;
        p=p*d;
        temp=temp/10;
    }
    if(s==p)
    printf("Spy Number");
   else
    printf("Not Spy Number");
    return 0;
}