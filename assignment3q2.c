#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,l,n ;
	scanf("%d",&n);
	char a[n][100],t[100];
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(a[i],a[j])>0)
			{
				strcpy(t,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],t);
			}
		}
	}
	printf("Strings in lexicographically order are : \n");
	for(i=0;i<n;i++)
		printf("%s\n",a[i]);
	printf("Unique Strings are : \n");
	for(i=0;i<n;)
	{
		if(strcmp(a[i],a[i+1])==0)
			i+=2;
		else
		{
			printf("%s\n",a[i]);
			i+=1;
		}
	}	
	return 0;
}
