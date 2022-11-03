#include <stdio.h>
int main()
{
	int a[]={11,3,42,36,7,9,14,12,1},i,j,s,t;

    s = sizeof(a)/4;
	printf(" array before sorting = ");
	
    for( i=0; i<s; i++ )
	{
		printf("%d ",a[i]);
	}

    for ( i=0; i<s; i++ )
    {
        for( j=0; j<s; j++ )
        {
             if ( a[i] < a[j] )
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
             }
        }      
    }

    printf("\n array after sorting = ");

	for ( i=0; i<s; i++ ) 
	{
		printf("%d ",a[i]);
	}

	return 0;
}