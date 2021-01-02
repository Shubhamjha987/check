#include<stdio.h>
int main()
{
		int a[10],i,max,min;
		for(i=0;i<=9;i++)
		{
        	printf("enter the number:\n");
	        scanf("%d",&a[i]);
        }
        max=a[0];
        for(i=0;i<=9;i++)
        {
        	if(a[i]>max)
        	max=a[i];
      	}
		printf("the max value is=%d\n",max);
		min=a[0];
		for(i=0;i<=9;i++)
		{
			if(a[i]<min)
			min=a[i];
		}
		printf("the min value is=%d",min);
}
