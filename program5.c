#include <stdio.h>

int main()
{
int i,j,k,rows;
printf("enter number of rows");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
if(i%2==1) k=1;
else k=i;
for(j=1;j<=i;j++)
{
printf("%d",k);
if(i%2==1) k++;

else k--;
}
printf("\n");
}
return 0;
}
