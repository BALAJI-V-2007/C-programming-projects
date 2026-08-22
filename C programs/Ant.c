//**********ANT ON THE RAIL**********//
#include<stdio.h>
int main()
{
	int arr[5] = {1,-1,1,-1,1};
	int round = 0,right,left,i;
	for(i = 0;i < 4;i++)
	{
  	 	if(arr[i] == -1)	
  	 	{                                       
  	 		round++;
	    }
	}
	printf("Round: %d",round);
	
}
