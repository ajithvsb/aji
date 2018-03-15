#include<stdio.h>
int main()
{
	int a,d,n,m=0,i;
	scanf("%d\t%d\t%d",&a,&d,&n);
	for(i=a;i<=n;i=i+d)
	{
		m=m+i;
	
	}
		printf("%d",m);
	return 0;
}
