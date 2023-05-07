#include"calc.h"
int main()
{
	std::stringstream ss;
	std::string str;
	std::getline(std::cin, str);
	std::string buf = "";
	std::map<std::string, int> znak;
	std::stack<std::string> stack;
	znak["+"] = 0;
	znak["-"] = 1;
	znak["*"] = 2;
	znak["/"] = 3;
	znak["^"] = 4;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] != ' ')
		{
			if (str[i] >= '0' && str[i] <= '9')
			{
				buf += str[i];
			}
			else
			{
				ss << str[i];
				std::string buff;
				ss >> buff;
				stack.push(buff);
			}
		}
		else
		{
			stack.push(buf);
			buf = "";
		}
		if (i == str.size() - 1)
		{
			stack.push(buf);
		}
	}
	long long int sum = 0;
	for (int i = 0; !stack.empty(); i++)
	{
		long long int a, b;
		std::string p = stack.top();
		a = std::stoi(stack.top());
		stack.pop();
		std::cout << a << " " << stack.size() << std::endl;
		std::string ex = stack.top();
		stack.pop();
		std::cout << ex << " " << stack.size() << std::endl;
		if (ex == "+" && ex == "-" && ex == "*" && ex == "/" && ex == "^")
		{
			std::cout << ex << " " << stack.size() << std::endl;
			b = std::stoi(stack.top());
			stack.pop();
			std::cout << b << " " << stack.size() << std::endl;
			switch (znak[ex])
			{
			case 0:
				_add(a, b);
				sum += a;
				break;
			case 1:
				_sub(a, b);
				sum += a;
				break;
			case 2:
				_mul(a, b);
				sum += a;
				break;
			case 3:
				_div(a, b);
				sum += a;
				break;
			case 4:
				_pow(a, b);
				sum += a;
				break;
			}
		}
	}
	std::cout << sum << std::endl;
	//testing::InitGoogleTest();
	//RUN_ALL_TESTS();
	return 0;
}