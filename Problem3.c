/* The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143?
*/

#include <stdio.h>

int main()
{
	int i;
	long long int num, biggestPrime = 0;
	
	printf("Enter a number : ");
	scanf("%lld", &num);
	
	for(i = 2; i <= num; i++)
	{
		if(num % i == 0)
		{
			int j = 0;
			
			while(num % i == 0)
			{
				num = num / i;
				j++;
			}
			
			printf("There is %d times the prime number %d  \n",j , i);
			
			if(biggestPrime < i)
			{
				biggestPrime = i;
			}
			
		}
		
	}
	printf("Biggest Prime = %lld", biggestPrime);
}
