#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> vect(std::string str)
{
	std::vector<std::string> vp;
	int i = 0;
	int size = str.size();
	while (i < size)
	{
		std::string my_str;
		while (str[i] != ' ' || str[i] != ',' || str[i] !='\0')
		{
			my_str.push_back(str[i]);
			++i;
		}
		vp.push_back(my_str);
		++i;
	}
	return vp;
}
		
int main ()
{
	std::string str;
	str = "mov r1, 4 ";
	std::vector< std::string > vp = vect(str);
	for (int i = 0; i < 3; ++i)
	{
		std::cout << vp[i];
	}
}

