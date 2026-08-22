//**********ACCESSINTG THE STRUCTURES WITH POINTERS**********//
#include <stdio.h>
struct student{
	char *name;
	int age;
	float per;
};
int main()
{
	struct student o = {"Balaji V",19,76.9};
	struct student *ptr = &o;
	//USING ARROW OPERATOR
	printf("\nName: %s",ptr -> name);
	printf("\nAge: %d",ptr -> age);
	printf("\nPercentage: %.2f\n",ptr -> per);
	//EQUIVALENT USING DEREFERENCE OPERATOR
	printf("\nName: %s",(*ptr).name);
	printf("\nAge: %d",(*ptr).age);
	printf("\nPercentage: %.2f\n",(*ptr).per);
	return 0;
}
