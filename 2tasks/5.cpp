#include <iostream>
#include <unordered_map>

int add(int x,int y)
{
	return x + y;
}
int sub (int x,int y)
{
	return x - y;
}
int mul(int x,int y)
{
	 return x * y;
}
int divid(int x,int y)
{
	return x / y;
}
int main ()
{
	char simvol;
	std::cout << "put + , - , / ,* " << std::endl;
	std::cin >> simvol;
	
	std::unordered_map<char,int(*)(int,int)> vp;

	int x;
	std::cin >> x;
	int y;
	std::cin >> y;
	vp['+'] = &add;
	vp['-'] = &sub;
	vp['*'] = &mul;
	vp['/'] = &divid;
 
	std::cout << vp[simvol](x,y);
}

