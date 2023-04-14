#include <iostream>

void foo(int num)
{
	if (num <= 0)
	{
		std::cout << "bard";
		return;
	}
	else if(num == 1 || num == 2 || num == 3)
	{
		std::cout << "parz";
		return;
	}
	int tmp = num/2;
	while (tmp != 1)
	{	
		if (num % tmp == 0)
		{
			std::cout << "bard" << std::endl;
			return;
		}
		tmp /= 2;
	}
	std::cout << "parz" << std::endl;
}
		
int main ()
{
	int num;
	std::cout << "put num:" <<std::endl;
	std::cin >> num;
	
	foo(num);
}
