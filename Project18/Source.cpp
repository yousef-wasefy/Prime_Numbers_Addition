#include<cmath>
#include<iostream>
#include<iomanip>
#include<array>
#include<cctype>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;


int main()
{
	// Addition of the first 7 prime numbers entered.
	int num;
	int result = 0;
	int count = 0;
	
	while (true)
	{
		bool isprime = true;
		cin >> num;
		if (num == 1)
			continue;
		for (int divisor = 2;divisor < num;divisor++)
		{
			if (num % divisor == 0)
			{
				isprime = false; // then not a prime number.
				break;
			}

		}
		if (isprime == true)
		{
			result += num;
			count++;
		}
		if (count == 7)
			break;
	}
	
	cout << result;

	return 0;
}