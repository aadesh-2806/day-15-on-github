#include<stdio.h>
#include<math.h>

void main()
{	
	int i,a[50],b[50][50],j,n,k;
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	j=0;
	k=0;
	for(i=0;i<n;i++)
	{	
		printf("enter no %d=",i+1);
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			b[0][j++]=a[i];
		}
		else
		{
			b[1][k++]=a[i];
		}
	}
	
	for(j=0;j<(n/2);j++)
	{
		printf("%d",b[0][j]);
		printf("%d",b[1][j]);
	}
	getch();
	
}	
