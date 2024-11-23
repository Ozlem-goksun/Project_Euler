/*
The sum of the squares of the first ten natural numbers is,

	1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

	(1 + 2 + ... + 10)^2 = 55^2 = 3025
	
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is

	3025 - 385 = 2640
	
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int i, num, powOfSum = 0, sumOfPow = 1, difference;
	
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++)
	{
		powOfSum = powOfSum + i;
	}
	
	powOfSum = powOfSum * powOfSum;
	
	for(i = 2; i <= num; i++)
	{
		sumOfPow = sumOfPow + (i * i);
	}
	
	
	difference = powOfSum - sumOfPow;
	
	printf("%d", difference);
	
	
	
	
	
}
