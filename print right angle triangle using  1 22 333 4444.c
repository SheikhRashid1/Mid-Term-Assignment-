//Name : Sheikh Rashid 
//Roll-no : ECE-22-33
//Assignment for Mid-Term
#include<stdio.h>
int main()
{
	int i, q, row;
	printf("Enter number of rows: \n");
	scanf("%d", &row);
	for(i=1;i<=row;i++)
	{
		for(q=1;q<=i;q++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
