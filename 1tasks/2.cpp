#include <iostream>

int foo(int num)
{
	int result = 0;
	while (num)
	{
		result += num %10;
		num /= 10;
	}
	return result;
}
		
int main ()
{
	int num;
	std::cout << "put num" << std::endl;
	std::cin >> num;
	
	std::cout << foo(num);
}
