#include<stdio.h>
#include<stdlib.h>
int main()
{
	int l1,l2,i,j,f ;
	char a[10000],b[100000],c;
	printf("Enter the 1st string :\n");
	scanf("%s",a);
	for(i=0;a[i];i++);
	printf("Length of the above string is : %d\n",i);
	f=0;
	l1=i;
	for(i=0;i<l1/2;i++)
	{
		if(a[i]!=a[l1-i-1])
		{
			f=1;
			break;
		}
	}
	if(f==0)
		printf("Pallindrome\n");
	else
		printf("Not Pallindrome\n");
	printf("Enter the 2nd string\n");
	scanf("%s",b);
	for(i=0;b[i];i++);
	l2=i;
	for(i=l1,j=0;i<l1+l2;i++,j++)
	{
		a[i]=b[j];
	}
	a[i]='\0';
	printf("%s\n",a);
	return 0;
}
	
		
