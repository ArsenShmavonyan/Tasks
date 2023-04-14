#include <iostream>
int main ()
{
	int size;
	std::cout << "put size" << std::endl;
	std::cin >> size;
	
	int* arr = new int[size];
	
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
	
	int count = 0;
 	for (int i = 0; i < size; ++i)
	{
		count += arr[i];
	}
	std::cout << count;

}
