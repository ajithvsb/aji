#include <stdio.h>

int main() 
{
 int a[100],i,j,c=0;
 for(i=1;i<=10;i++)
 {
 	scanf("%d",&a[i]);
 }
 for(i=1;i<=10;i++)
 for(j=2;j<=10;j++)
 {
 	if(a[i]>a[j])
 	{
 		c=a[i];
 		a[i]=a[j];
 		a[j]=c;
 	}
 }
 
 
 printf("%d",a[1]);
	return 0;
}
