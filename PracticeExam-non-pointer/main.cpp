#include "PersonInfo.h"

int main() {
	// THIS WILL BE CALLED TO INITIALIZED
	// THE VALUES OF CITI, INDEPENDENCE, AND SSN
	PersonInfo initializedPersonalInfo;
																
	//DECLARE A NEW INSTANCE OF PERSONINFO OBJECT AND PASS THE INITIALIZED PERSONAL INFO DATA
	//TO THIS NEW OBJECT
	PersonInfo personalInfo (initializedPersonalInfo.getCiti(),
		initializedPersonalInfo.getIndependence(),
		initializedPersonalInfo.getSSN());
	////////////////////////////////////////////////////////////////////

	// D I S P L A Y   D A T A /////////////////////////////////////////
	cout << "CITI Bank Acct Num # " << personalInfo.getCiti().getAccNumber() << endl
		<< ": $ " << personalInfo.getCiti().getBalance() << endl;
	cout << "Indepence Bank Acct Num # " << personalInfo.getIndependence().getAccNumber() << endl
		<< ": $ " << personalInfo.getIndependence().getBalance() << endl;
	cout << "SSN: " << personalInfo.getSSN() << endl << endl;
	////////////////////////////////////////////////////////////////////


	// D E P O S I T //////////////////////////////////////////////////
	personalInfo.deposit(personalInfo.getCiti(), 300);			// $300
	personalInfo.deposit(personalInfo.getIndependence(), 500);	//$500
	///////////////////////////////////////////////////////////////////


	// D I S P L A Y   U P D A T E D    B A L A N C E /////////////////
	cout << "CITI new balance: $ " << personalInfo.getCiti().getBalance() << endl;
	cout << "Independence new balance: $ " << personalInfo.getIndependence().getBalance() << endl;
	///////////////////////////////////////////////////////////////////

	cout << endl;

	// D E C L A R E    S A V I N G S A C C O U N T    O B J E C T S ///////////////////////
	SavingsAccount citi(0.02,
		personalInfo.getCiti().getAccNumber(),
		personalInfo.getCiti().getBalance());

	SavingsAccount indep(0.02,
		personalInfo.getIndependence().getAccNumber(),
		personalInfo.getIndependence().getBalance());
	/////////////////////////////////////////////////////////////////////////////////////////


	// D I S P L A Y    I N T E R E S T    R A T E S   F O R   S A V I N G S    O B J E C T S //
	cout << "Monthly Interest for the Citi Account # " << citi.getAccNumber() << endl <<
		" @ " << citi.getInterest() * 100 << "% is: $ " << citi.calcInterest() << endl;

	cout << "Monthly Interest for the Independence Account # " << indep.getAccNumber() << endl <<
		" @ " << indep.getInterest() * 100 << "% is: $ " << indep.calcInterest() << endl;
	///////////////////////////////////////////////////////////////////////////////////////////

	cout << endl;

	system("pause");
	return 0;
}

