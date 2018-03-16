#include <stdio.h>

int main() 
{
 int n,k,a[100],i,j,c=0;
 scanf("%d\t%d",&n,&k);
 for(i=1;i<=n;i++)
 {
 	scanf("%d",&a[i]);
 }
 for(i=k;i<=n;i++)
 for(j=i+1;j<=n;j++)
 {
 	if(a[i]>a[j])
 	{
 		c=a[i];
 		a[i]=a[j];
 		a[j]=c;
 	}
 }
 
 
 printf("%d",a[k]);
	return 0;
}
