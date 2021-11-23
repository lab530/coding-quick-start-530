#include <stdio.h>
int main()
{
    int bucket[101]={0};
	int i;
	int j;
	int t;

                 
    for(i=1;i<=5;i++)  
    {
        scanf("%d",&t);  
        bucket[t]++;  
    }
    for(i=0;i<=100;i++) 
	{
	 
        for(j=1;j<=bucket[i];j++) 
		{
		 
            printf("%d ",i);
        }
    }
    
    
    return 0;
}

