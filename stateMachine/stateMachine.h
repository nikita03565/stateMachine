#ifndef STATE_MACHINE
#define STATE_MACHINE

#include <array>
#include <map>
#include <string>
#include <vector>

class StateMachine
{
	int _currentState;
	using StateMachineMbFn = void(StateMachine::*)(char in);
	typedef std::map<char, StateMachineMbFn> MyMap;
	std::array<MyMap, 7> _states;
	std::string _tmpans;
	std::vector<std::string> _ans;
public:
	StateMachine();
	void state0(char in);
	void state1(char in);
	void state2(char in);
	void state3(char in);
	void state4(char in);
	void state5(char in);
	void state6(char in);
	void state7(char in);
	std::vector<std::string> run(std::string input);
};


#endif


