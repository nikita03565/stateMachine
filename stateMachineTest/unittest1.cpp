#include "unittest1.h"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

void stateMachineTest::UnitTest1::testMethod0()
{
	std::string input = "+a-a-ab+bbbbbbbb+a-b-b-bab+abababa+b+a";
	std::string ansExpected0 = "+a-a-ab+";
	std::string ansExpected1 = "+abababa+";
	std::string ansExpected2 = "+b+";
	auto ans = _stm.run(input);
	Assert::AreEqual(ansExpected0, ans[0]);
	Assert::AreEqual(ansExpected1, ans[1]);
	Assert::AreEqual(ansExpected2, ans[2]);
}

void stateMachineTest::UnitTest1::testMethod1()
{
	std::string input = "+a-a-ab-b-b-ba+";
	std::string ansExpected = "+a-a-ab-b-b-ba+";
	auto ans = _stm.run(input);
	Assert::AreEqual(ansExpected, ans[0]);
}

void stateMachineTest::UnitTest1::testMethod2()
{
	std::string input = "+a-a-ab+-b-b-ba+";
	std::string ansExpected = "+a-a-ab+";
	auto ans = _stm.run(input);
	Assert::AreEqual(ansExpected, ans[0]);
}

void stateMachineTest::UnitTest1::testMethod3()
{
	std::string input = "+a++";
	std::string ansExpected = "+a+";
	auto ans = _stm.run(input);
	Assert::AreEqual(ansExpected, ans[0]);
}

void stateMachineTest::UnitTest1::testMethod4()
{
	std::string input = "+a-a-ab+++a-ab-b-ba+";
	std::string ansExpected0 = "+a-a-ab+";
	std::string ansExpected1 = "+a-ab-b-ba+";
	auto ans = _stm.run(input);
	Assert::AreEqual(ansExpected0, ans[0]);
	Assert::AreEqual(ansExpected1, ans[1]);
}

void stateMachineTest::UnitTest1::testMethod5()
{
	std::string input = "+a-a-ab+++a-ab-b-ba+a+b+b-b+";
	std::string ansExpected0 = "+a-a-ab+";
	std::string ansExpected1 = "+a-ab-b-ba+";
	std::string ansExpected2 = "+a+";
	std::string ansExpected3 = "+b+";
	std::string ansExpected4 = "+b-b+";
	auto ans = _stm.run(input);
	Assert::AreEqual(ansExpected0, ans[0]);
	Assert::AreEqual(ansExpected1, ans[1]);
	Assert::AreEqual(ansExpected2, ans[2]);
	Assert::AreEqual(ansExpected3, ans[3]);
}

void stateMachineTest::UnitTest1::testMethod6()
{
	std::string input = "+aaa+";
	auto ans = _stm.run(input);
	Assert::AreEqual(size_t(0), ans.size());
}

void stateMachineTest::UnitTest1::testMethod7()
{
	std::string input = "++";
	auto ans = _stm.run(input);
	Assert::AreEqual(size_t(0), ans.size());
}

void stateMachineTest::UnitTest1::testMethod8()
{
	std::string input = "+a-a-aba-a-a+";
	std::string ansExpected = "+a-a-aba-a-a+";
	auto ans = _stm.run(input);
	Assert::AreEqual(ansExpected, ans[0]);
}

void stateMachineTest::UnitTest1::testMethod9()
{
	std::string input = "++++b-b-b-b-b-b-b-b-b++++";
	std::string ansExpected = "+b-b-b-b-b-b-b-b-b+";
	auto ans = _stm.run(input);
	Assert::AreEqual(ansExpected, ans[0]);
}