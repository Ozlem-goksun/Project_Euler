/* Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms. */

#include <stdio.h>

int main()
{
	int num, n1 = 0, n2 = 1, sumOfEvens = 0, temp = 0;
	
	scanf("%d", &num);
	
	while(temp < num)
	{
		temp = n1 + n2;
		
		if(temp % 2 == 0)
		{
			sumOfEvens = sumOfEvens + temp;
		}
		
		n1 = n2;
		n2 = temp;
	}
	
	printf("%d", sumOfEvens);
	
	
	return 0;
}
