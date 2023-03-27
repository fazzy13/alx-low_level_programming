#include <stdio.h>
/**
* main - starting point of the programm
*
* Return:  exit of the programm
*/

int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int i, next_num;
	
	printf("%d, %d", num1, num2);
	
	for (i = 3; i <= 98; i++)
	{
		next_num = num1 + num2;
		printf(", %d", next_num);
		num1 = num2;
		num2 = next_num;
	}
	
	printf("\n");
	
	return (0);
}

