#include<stdio.h>

void main()
{
	
	int i,b[100],a[50][50],k,n,m,j,s;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	i=0;
	while(i<n)												//hour glass
	{
		j=0;
		while(j<n)
		{
			printf("enter value%d,%d=",i+1,j+1);
			scanf("%d",&a[i][j]);
			j++;
		}
		i++;
	}
	
	i=0;
	k=0;
	while(i<n-2)
	{
		j=0;
		while(j<n-2)
		{
			b[k]=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
			j++;
			k++;
		}
		i++;
	}
	s=k;	
	m=b[0];
	k=1;
	while(k<s)
	{
		if(m<b[k])
		{
			m=b[k];
		}
		k++;
	}
	printf("%d",m);
	
	getch();
	
}	
