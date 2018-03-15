#include <stdio.h>

int main() {
      int a,i,count=0;
      scanf("%d",&a);
      for(i=1;i<=a;i++)
      {
      if((a/i==2)&&(a%2==0))
      	{
      		printf("%d",i);
      		count=1;
      		
      	} }
        if(count==0)
      {
      	printf("%d",a);
      }
     
	return 0;
}
