#include <stdio.h>
int main()
{
	int a[]={1,3,4,6,7,9,4,2,},b[]={33,55,77,88,99,111},i,s1=0,s2=0;
	printf(" array 1 = ");
	for(i=0;i<(sizeof(a)/4);i++)
	{
        s1++;
		printf("%d ",a[i]);
	}

    printf(" array 2 = ");
	for(i=0;i<(sizeof(b)/4);i++)
	{
        s2++;
		printf("%d ",b[i]);
	}

    printf("\n size =%d",s1+s2);

    int c[s1+s2];

    for(i=0;i<s1;i++)
    {
        c[i]=a[i];
    }
     for(i=0;i<s2;i++)
    {
        c[s1+i]=b[i];
    }
    
    printf(" merged array = ");
	for(i=0;i<s1+s2;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}