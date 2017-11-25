#include "stateMachine.h"
#include <iostream>

int main()
{
	std::string input;
	while (true)
	{
		StateMachine stm;
		std::cout << "enter the string: ";
		std::cin >> input;
		std::vector<std::string> ans = stm.run(input);
		for (int i = 0; i < ans.size(); ++i)
			std::cout << ans[i] << std::endl;
	}
	
	std::getchar();
	return 0;
}
