#include <iostream>
#include <unordered_map>

int main ()
{
	std::unordered_map<char, int> mp;
	
	int size = 7;
	char* ptr = new char[size];
	
	for (int  i = 0 ;i < size: ++i)
	{
		std::cin >> ptr[i];
	}
	
	for (int i = 0 ; i < size; ++i)
	{
		++mp[ptr[i]];
	}
	
	int max = 0;
	for (auto elem : mp)
	{
		if (elem > max)
		{
			max = elem.first;
		}
	}
	for (auto elem : mp)
	{
		std::cout << elem.first << " " << elem.second << std::endl;
	}
}
