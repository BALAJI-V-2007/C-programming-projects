#include <stdio.h>
struct Payment
{
	int transactionid;
	char *name[50];
	float amount;
	int type;
union
{
	char upiid[30];
	char  cardnumber[30];
	float cashamount;
}payment;

};


int main()
{
	struct Payment p;
	printf("**********SMART  PAYMENT  WALLET**********\n");
	
	printf("\nEnter transaction ID: ");
	scanf("%d",&p.transactionid);
	
	printf("Enter customer name: ");
	scanf("%s",&p.name);
	
	printf("Enter Amount: ");
	scanf("%f",&p.amount);
	
	printf("\nSelect the payment method\n");
	printf("1.UPI\n");
	printf("2.Card\n");
	printf("3.Cash\n");
	printf("\nEnter choice: ");
	scanf("%d",&p.type);
	switch(p.type)
	{
		case 1:
			printf("Enter UPI ID: ");
			scanf("%s",&p.payment.upiid);
			break;
		case 2:
			printf("Enter Card number: ");
			scanf("%s",&p.payment.cardnumber);
			break;
		case 3:
			p.payment.cashamount = p.amount;
			break;
		default:
			printf("Invalid payment method");
			break;
	}
	
	printf("\n\n*******PAYMENT RECEIPT*******\n");
	
	printf("\nTransaction ID: %d\n",p.transactionid);
	printf("Customer Name: %s\n",p.name);
	printf("Amount: %.2f\n",p.amount);
	
	switch(p.type)
	{
		case 1:
			printf("Payment type: UPI\n");
			printf("UPI ID: %s\n",p.payment.upiid);
			break;
		case 2:
			printf("Payment type: Card\n");
			printf("Card nummber: %s\n",p.payment.cardnumber);
			break;
		case 3:
			printf("Payment type: Cash\n");
			printf("UPI ID: %s\n",p.payment.cashamount);
			break;
	}
	return 0;
}
