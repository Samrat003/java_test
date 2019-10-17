#include<stdio.h>
main()
{
	int i,a[10],b[10],k,p,sum=0,n;
	print("Enter the size of the arry :");
	scanf("%d",&n);
	for (i=1;i<n;i++)
		scanf("%d",&a[i]);
	for (i=1;i<n;i++)
	{
			sum = a[i]+sum;
			printf(" %d ",sum);
		
	}
	printf("\n");
	for (i=1;i<n;i++)
		{
			
			p= sum- a[n-1-i];
			b[i]=p;
			printf(" %d \n",p);
		}
	int max=b[0];
	int min=b[0];	
	for (i=0;i<n;i++)
	{
		if(b[i]>max)
		max=b[i];
		if(b[i]<min)
		min=b[i];
		
	}
		print ("%d\n",max);
		printf ("%d",min);
	
	
}
