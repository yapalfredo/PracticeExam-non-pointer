#include "BankAccount.h"
#include <iostream>
#include <string>

using namespace std;

class PersonInfo
{
private:
	BankAccount citiAccount;
	BankAccount independenceAccount;
	string ssn;

public:
	//DEFAULT CONSTRUCTOR
	// INITIALIZES CITIBANK, INDEPENDENCE, AND SSN VALUES
	PersonInfo()
	{	
		citiAccount.setAccNumber(1234);
		citiAccount.setBalance(200);
		independenceAccount.setAccNumber(3456);
		independenceAccount.setBalance(300);
		ssn = "123-45-1234";
	}

	//PARAMETERIZED CONSTRUCTOR
	PersonInfo(BankAccount & citiAccount, BankAccount & independenceAccount, string ssn)
	{
		this->citiAccount = citiAccount;
		this->independenceAccount = independenceAccount;
		this->ssn = ssn;
	}

	//DESTRUCTOR
	~PersonInfo()
	{

	}

	// RECEIVES A BANKACCOUNT POINTER AND DOUBLE DATA TYPES
	// THIS WILL ALLOW TO CALL THE DEPOSIT FUNCTION FROM BANKACCOUNT
	// CLASS
	void deposit(BankAccount & bank, double amount)
	{
		bank.deposit(amount);
	}

	// G E T T E R S ////////////////////////////////////////////////
	string getSSN() const
	{
		return ssn;
	}

	BankAccount & getCiti() 
	{
		return citiAccount;
	}

	BankAccount & getIndependence()
	{
		return independenceAccount;
	}
	////////////////////////////////////////////////////////////////
};
