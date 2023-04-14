#include <iostream>
#include <string>

std::string replaceAll(std::string str1,std::string str2,std::string str3)
{	
	for (int i = 0; i < str1.size(); ++i)
	{
	 	bool b = true;
		int k = 0;
		for (int j = 0; j < str2.size(); ++j)
		{
			k = i;
			if (str1[i] != str2[j])
			{
				b = false;
				break;
			}
		}
		if (b == true)
		{
			str1.erase(k,str2.size());
			str1.insert(k,str3);	
		}
	}
	return str1;
}
	
int main ()
{
	int size = 3;
	std::string str[size];
	for (int i = 0 ; i < size; ++i)
	{
		std::cout << "put your world" << std::endl;
		std::cin >> str[i];
	}
	std::cout << replaceAll(str[0],str[1],str[2]);
}
