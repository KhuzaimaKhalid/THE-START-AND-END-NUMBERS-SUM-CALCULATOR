#include<stdio.h>

int main()
{
	printf("\t THE START AND END NUMBERS SUM CALCULATOR \n");
    int sum = 0;
    int start,end;
	printf("\nEnter The Starting Number: ");
	scanf("%d", &start);
	printf("Enter The Ending Number: ");
	scanf("%d", &end);
	for(int i = start ; i <= end ; i++){
		sum += i;
	}
	printf("The Sum of %d till %d is %d",start,end,sum);
	
	return 0;
}
