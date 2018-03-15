#include <stdio.h>
#include<string.h>
int main() 
{
   int i,l;
   char a[100];
   scanf("%[^\n]s",a);
   l=strlen(a);
   for(i=0;i<l;i++)
   {
   	if(i==0)
   	{
   		if((a[i]>='a')&&(a[i]<='z'))
   		{
   			a[i]=a[i]-32;
   		}
   	}
   	if(a[i]==' ')
   	{ ++i;
   	          if((a[i]>='a')&&(a[i]<='z'))
   		{
   			a[i]=a[i]-32;
   		}	
   	}
   }
   printf("%s",a);
   return 0;
}
