#include "stateMachine.h"
#include <iostream>

int main()
{
	StateMachine stm;
	std::vector<std::string> ans = stm.run("+a-a-aba++++bab+ab+ab-b+");
	std::cout << ans.size() << std::endl;
	for (int i = 0; i < ans.size(); ++i)
		std::cout << ans[i] << std::endl;
	
	std::getchar();
	return 0;
}
