#include<stdio.h>
#include<math.h>

void main()
{	
	int i,a[50],t,j,n;
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{	
		printf("enter no %d=",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{					
		if(a[i]%2!=0 && i%2==0)
		{
			for(j=i+1;j<n;j++)
			{
				if((a[j]%2==0 && j%2!=0))
				{
					t=a[i];
					a[i]=a[j];
					a[j]=t;
					break;
				}
			}
		}
		if(a[i]%2==0 && i%2!=0)
		{
			for(j=i+1;j<n;j++)
			{
				if((a[j]%2!=0 && j%2==0))
				{
					t=a[i];
					a[i]=a[j];
					a[j]=t;
					break;
				}
			}
		}
		
	}
	for(i=0;i<n;i++)
	{	
		printf("%d",a[i]);
	}
	
	getch();
	
}	
