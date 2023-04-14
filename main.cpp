#include"calc.h"
int main()
{
	int a = 100;
	_Sqrt(a);
	std::cout << a << std::endl;
	_Pow(a, 2);
	std::cout << a << std::endl;
	testing::InitGoogleTest();
	RUN_ALL_TESTS();
	return 0;
}
