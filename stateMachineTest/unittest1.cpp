#include "unittest1.h"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

void stateMachineTest::UnitTest1::testMethod1()
{
	std::string input = "+a-a-ab-b-b-ba+";
	auto ans = _stm.run(input);
	Assert::AreEqual(input, ans[0]);
}
