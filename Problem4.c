/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>

#include <stdio.h>

// bool tanimi
typedef int bool;
#define true 1
#define false 0

int main()
{
	int i, j, product = 1, biggestPalindromic = 1;
	
	for(i = 999; i > 99; i--)
	{
		for(j = 999; j > 99; j--)
		{
			product = i * j;
			
			if(product > 100000 && IsPalindromic_6Digits(product))
			{
				if (product > biggestPalindromic)
				{
					
				   	biggestPalindromic = product;
					printf("The largest palindromic number made frome product of two 3-digit number : %d", biggestPalindromic);
				}
				break;
			}
			else if(product < 100000 && IsPalindromic_5Digits(product))
			{
				break;
			}
		}
	}
	
}

bool IsPalindromic_5Digits(int product)
{
	int n1, n2, n3, n4, n5;
	bool IsPalindromic;
	
	n1 = product % 10;
	n2 = ((product % 100) - n1) / 10;
	n3 = ((product % 1000) - (product % 100)) / 100;
	n4 = ((product % 10000) - (product % 1000)) / 1000;
	n5 = ((product % 100000) - (product % 10000)) / 10000;
	
	if(n1 == n5 && n2 == n4)
	{
		IsPalindromic = true;
	}
	else
	{
		IsPalindromic = false;
	}
	
	return IsPalindromic;
}

bool IsPalindromic_6Digits(int product)
{
	int n1, n2, n3, n4, n5, n6;
	bool IsPalindromic;
	
	n1 = product % 10;
	n2 = ((product % 100) - n1) / 10;
	n3 = ((product % 1000) - (product % 100)) / 100;
	n4 = ((product % 10000) - (product % 1000)) / 1000;
	n5 = ((product % 100000) - (product % 10000)) / 10000;
	n6 = ((product % 1000000) - (product % 100000)) / 100000;
	
	
	if(n1 == n6 && n2 == n5 && n3 == n4)
	{
		IsPalindromic = true;
	}
	else
	{
		IsPalindromic = false;
	}
	
	return IsPalindromic;
}

