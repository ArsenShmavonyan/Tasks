#include <iostream>
int main ()
{
	int num;
	std::cout << "put size" << std::endl;
	std::cin >> num;

	int maxx = 0;
	while (num != 0)
	{
		int max = num % 10;
		num /= 10;
		if (max > maxx)
		{
			maxx = max;
		}
	}
	std::cout << maxx;
}
