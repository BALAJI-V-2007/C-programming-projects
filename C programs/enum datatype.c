#include<stdio.h>
typedef  enum{SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY}weekday;
int main()
{
	weekday today = WEDNESDAY;
	switch(today)
	{
		case SUNDAY:
			printf("It's a fundayyyyy");
		case MONDAY:
		case TUESDAY:
		case WEDNESDAY:
		case THURSDAY:
		case FRIDAY:
			printf("It's a working day");
			break;
		case SATURDAY:
			printf("It's a weekend");
			break;
		default:
			printf("Enter the day properly");
			break;
	}
}
