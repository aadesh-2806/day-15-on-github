#include<stdio.h>

void main()
{
	
	int i,a[100],r,n,j;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	i=0;
	while(i<n)
	{
		printf("enter no%d=",i+1);
		scanf("%d",&a[i]);
		i++;
	}
	
	for(i=0;i<n;i++)		
	{
		r=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				r++;
			}
		}
		if(r==1)
		{
			printf("%d ",a[i]);
		}
	}
	getch();
	
}	 		
