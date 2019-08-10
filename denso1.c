#include<stdio.h>
int main()
{
int X,P,SUM=0;
scanf("%d %d",&X,&P);
while(P>0)
{
SUM+=P;
P=P-(P*D)/100.0;
}
printf("%d",&SUM);
}
