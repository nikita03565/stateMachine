#ifndef STATE_MACHINE
#define STATE_MACHINE

#include <array>
#include <map>
#include <string>
#include <vector>

/* Example of using
 * 
 * StateMachine stm;
 *	std::vector<std::string> ans = stm.run("+a-a-ab-b-b+");
 *	for (int i = 0; i < ans.size(); ++i)
 *		std::cout << ans[i] << std::endl;
 * 
 */
class StateMachine
{
	//pointer to a member-function
	using StateMachineMbFn = void(StateMachine::*)(char in);

	typedef std::map<char, StateMachineMbFn> MyMap;

	/**
	 * \brief number of current state, starts for 0, -1 is empty state
	 */
	int _currentState;
	
	/**
	 * \brief table of states
	 */
	std::array<MyMap, 7> _states;

	/**
	 * \brief one found string
	 */
	std::string _tmpans;

	/**
	 * \brief all found strings
	 */
	std::vector<std::string> _ans;

	/**
	 * \brief function for moving to empty state
	 * \param[i] in input char
	 */
	void state0(char in);

	/**
	* \brief function for moving to 1 state
	* \param[i] in input char
	*/
	void state1(char in);

	/**
	* \brief function for moving to 2 state
	* \param[i] in input char
	*/
	void state2(char in);

	/**
	* \brief function for moving to 3 state
	* \param[i] in input char
	*/
	void state3(char in);

	/**
	* \brief function for moving to 4 state
	* \param[i] in input char
	*/
	void state4(char in);

	/**
	* \brief function for moving to 5 state
	* \param[i] in input char
	*/
	void state5(char in);

	/**
	* \brief function for moving to 6 state
	* \param[i] in input char
	*/
	void state6(char in);

	/**
	* \brief function for moving to final state
	* \param[i] in input char
	*/
	void state7(char in);
public:

	StateMachine();
	
	/**
	 * \brief 
	 * \param[in] input 
	 * \return 
	 */
	std::vector<std::string> run(std::string input);
};


#endif


