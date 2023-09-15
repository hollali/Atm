#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

/* Mini Project - ATM
   -> Check Balance
   -> Cash withdraw
   -> User Details
   ->Update Mobile No.
*/

class atm                                //class atm
{
	private:                             //private member variables
		long int account_No;
		string name;
		int pin;
		double balance;
		string mobile_No;
	
	public:                              // public memeber fuctions
	    //steData function is setting the Data into the private memeber variables
	void setData(long int account_No_a, string name_a, int PIN_a double balance_a, string mobile_No_a)
	{
		account No = account_No_a;
		
		name = name_a;
		PIN  = PIN_a;
		balance = banace_a;
		mobile_No = mobile_No_a; 
	}	
	//getAccountNo fuction is returning the user's Name
	string getName()
  {
	    return name;	
	}
	
	//getPin fuction is returning the user's PIN
	int getPIN()
	{
		return PIN;
						}					
   }   
