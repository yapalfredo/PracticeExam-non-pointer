class BankAccount
{
private:
	int accNumber;
	double balance;

public:
	//DEFAULT CONSTRUCTOR
	BankAccount()
	{

	}

	//COPY - CONSTRUCTOR
	BankAccount(const BankAccount &bank)
	{
		accNumber = bank.accNumber;
		balance = bank.balance;
	}

	//CONSTRUCTOR
	BankAccount(int acct, double bal)
	{
		accNumber = acct;
		balance = bal;
	}

	//DESTRUCTOR
	~BankAccount()
	{

	}

	// G E T T E R S //////////////////////////////////////////////
	int getAccNumber() const
	{
		return accNumber;
	}

	double getBalance() const
	{
		return balance;
	}
	///////////////////////////////////////////////////////////////

	// S E T T E R S //////////////////////////////////////////////

	void setAccNumber(int accNumber)
	{
		this->accNumber = accNumber;
	}

	void setBalance(int balance)
	{
		this->balance = balance;
	}

	void deposit(double amount)
	{
		balance += amount;
	}

	void withdraw(double amount)
	{
		balance -= amount;
	}
	///////////////////////////////////////////////////////////////
};

// DERIVED CLASS
class SavingsAccount : public BankAccount
{
private:
	double monthInterestRate;

public:
	//CONSTRUCTOR
	SavingsAccount(double monthInterestRate, int accNumber, double balance) :BankAccount(accNumber, balance)
	{
		this->monthInterestRate = monthInterestRate;

	}

	//DESTRUCTOR
	~SavingsAccount()
	{

	}

	//FUNCTION TO CALCULATE MONTHYL INTEREST
	double calcInterest() const
	{
		return (getBalance() * monthInterestRate);
	}

	//GETTER
	double getInterest() const
	{
		return monthInterestRate;
	}
};