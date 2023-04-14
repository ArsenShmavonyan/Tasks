#include <iostream>
int main ()
{
	const int size = 3;
	int arr[3];
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
	std::cout << (arr[0] + arr[1] + arr[2]) / 3;
}
