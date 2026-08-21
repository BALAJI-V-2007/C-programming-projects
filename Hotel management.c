//**********HOTEL MANAGEMENT PROBLEM**********
#include <stdio.h>
int main()
{
 int ch,qty,ord =1;
 float bill = 0;
 do
 {	
  printf("\n\n**********HOTEL SARAVANAN**********\nMENU CARD:");
  printf("\n1) Kari dosa - 150\n2) Mutton briyani - 250\n3) Chicken briyani - 200\n4) Chettinad chicken - 180\n5) Mutton chukka - 220\n");
  printf("Enter your choice: ");
  scanf("%d",&ch);
  switch(ch)
  {
  	case 1:
  		printf("Enter quantity: ");
  		scanf("%d",&qty);
  		bill += qty*150;
  		printf("If you want to order more enter 1 otherwise enter any number: ");
  		scanf("%d",&ord);
  		break;
  	case 2:
  		printf("Enter quantity: ");
  		scanf("%d",&qty);
  		bill += qty*250;
  		printf("If you want to order more enter 1 otherwise enter any number: ");
  		scanf("%d",&ord);
  		break;
  	case 3:
  		printf("Enter quantity: ");
  		scanf("%d",&qty);
  		bill += qty*200;
  		printf("If you want to order more enter 1 otherwise enter any number: ");
  		scanf("%d",&ord);
  		break;
  	case 4:
  		printf("Enter quantity: ");
  		scanf("%d",&qty);
  		bill += qty*180;
  		printf("If you want to order more enter 1 otherwise enter any number: ");
  		scanf("%d",&ord);
  		break;
  	case 5:
  		printf("Enter quantity: ");
  		scanf("%d",&qty);
  		bill += qty*220;
  		printf("If you want to order more enter 1 otherwise enter any number: ");
  		scanf("%d",&ord);
  		break;
  	default:
  		printf("Enter your choice correctly");
  		break;
  }
 }
  while(ord == 1);
 printf("Your bill: %.2f",bill);
 return 0;
}
