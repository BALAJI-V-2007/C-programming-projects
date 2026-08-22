#include<stdio.h>
int main()
{
	int arr[5],i;
	int n = sizeof(arr) / sizeof(int);
	printf("Size = %d\n",n);
	for(i = 0; i <= n - 1;i++)
	{
		printf("Enter the number %d: ",i + 1);
		scanf("%d",&arr[i]);
	}
	int min = arr[0],max = arr[0],max2 = arr[0],min2 = arr[0],target = 97,found = 0;
	for(i = n-1; i >= 0; i--)
	{
		printf("%d ",arr[i]);
	}
    for(i = 0;i <= n-1;i++)
    {
    	if(arr[i] <= min)
    	{
    		min = arr[i];
		}
	}
	printf("\nSmallest = %d\n",min);
    for(i = 0;i <= n-1;i++)
    {
    	if(arr[i] <= min2 && arr[i] != min)
    	{
    		min2 = arr[i];
		}
	}	
	printf("Second smallest: %d\n",min2);
    for(i = 0;i <= n-1;i++)
    {
    	if(arr[i] >= max)
    	{
    		max = arr[i];
		}
	}
	printf("Largest = %d\n",max);
    for(i = 0;i <= n-1;i++)
    {
    	if(arr[i] >= max2 && arr[i] != max)
    	{
    		max2 = arr[i];
		}
	}	
	printf("Second largest: %d\n",max2);
    for(i = 0;i <= n-1;i++)
    {
    	if(arr[i] == target)
    	{
    		found = 1;
    		break;
		}
	}
	if(found == 1)
	{
		printf("Target found\nThe index of %d is %d",target,i);
	}
	else
	{
		printf("Target not found");
	}
}
