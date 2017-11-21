#include "StateMachine.h"
#include <iostream>

StateMachine::StateMachine()
{
	_currentState = 0;
	_tmpans = "";
	_states = {
		MyMap{
			{ '-', &StateMachine::state0 },{ 'a', &StateMachine::state0 },{ 'b', &StateMachine::state0 },{ '+', &StateMachine::state2 }
	},
		MyMap{
			{ '-', &StateMachine::state0 },{ 'a', &StateMachine::state3 },{ 'b', &StateMachine::state4 },{ '+', &StateMachine::state0 }
	},
		MyMap{
			{ '-', &StateMachine::state5 },{ 'a', &StateMachine::state0 },{ 'b', &StateMachine::state4 },{ '+', &StateMachine::state7 }
	},
		MyMap{
			{ '-', &StateMachine::state6 },{ 'a', &StateMachine::state3 },{ 'b', &StateMachine::state0 },{ '+', &StateMachine::state7 }
	},
		MyMap{
			{ '-', &StateMachine::state0 },{ 'a', &StateMachine::state3 },{ 'b', &StateMachine::state0 },{ '+', &StateMachine::state0 }
	},
		MyMap{
			{ '-', &StateMachine::state0 },{ 'a', &StateMachine::state0 },{ 'b', &StateMachine::state4 },{ '+', &StateMachine::state0 }
	},
		MyMap{
			{ '-', &StateMachine::state0 },{ 'a', &StateMachine::state0 },{ 'b', &StateMachine::state0 },{ '+', &StateMachine::state0 }
	}
	};
}

void StateMachine::state0(char in)
{
	//end and move to the next symbol
	_currentState = -1;
	_tmpans.clear();
}

void StateMachine::state1(char in)
{
	_currentState = 0;
	_tmpans.push_back(in);
}

void StateMachine::state2(char in)
{
	_currentState = 1;
	_tmpans.push_back(in);
}

void StateMachine::state3(char in)
{
	_currentState = 2;
	_tmpans.push_back(in);
}

void StateMachine::state4(char in)
{
	_currentState = 3;
	_tmpans.push_back(in);
}

void StateMachine::state5(char in)
{
	_currentState = 4;
	_tmpans.push_back(in);
}

void StateMachine::state6(char in)
{
	_currentState = 5;
	_tmpans.push_back(in);
}

void StateMachine::state7(char in)
{
	_currentState = 6;
	_tmpans.push_back(in);
	_ans.push_back(_tmpans);
	_tmpans.clear();
}

std::vector<std::string> StateMachine::run(std::string input)
{
	for (int i = 0; i < input.size(); ++i)
	{
		for (int j = i; j < input.size(); ++j)
		{
			if (_currentState == -1 || _currentState == 6)
			{
				_currentState = 0;
				break;
			}
			(this->*_states[_currentState][input[j]])(input[j]);
		}
	}
	return _ans;
}

