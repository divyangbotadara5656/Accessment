#include<iostream>
using namespace std;

class bank
{
	string address;
	string location;
	int alcnum;
	int balance;
	int depo;
	int ch;
	public :
		bank();
		void account()
		{
			cout<<"\n\n\t\t ATM ACCOUNT DEPOSIT SYSTEM";
			cout<<"\n\n\t The account holder address is : ";
			cin>>address;
			cout<<"\n\n\t The branch location :";
			cin>>location;
			cout<<"\n\n\t Account number :";
			cin>>alcnum;
			balance=200000;
			cout<<"\n\n\t Present available balance : Rs."<<balance;
			cout<<"\n\n\t Enter the amount to be deposited Rs :";
			cin>>depo;
			cout<<"\n\n\t Your new available balanced amount is Rs."<<balance+depo;
			cout<<"\n\n\t\t THANK YOU!";
			cout<<"\n\n\t Press any key to return to the main menu..";
			
		}
		void info()
		{
			switch(ch)
			{
				cout<<"\n\n\t Press 1 and Then Press Enter to Access Your Account Via Pin Number";
				cout<<"\n\n\t or";
				cout<<"\n\n\t Press 0 And Press Enter To Get Help";
				
				case 0:
					cout<<"\n\n\t\t ATM ACCOUNT STATUS";
					cout<<"\n\n\t You must have the correct pin number to access this account.See your";
					cout<<"\n\t bank representation for assistance during bank opening hours";
					cout<<"\n\t Thanks for,your choice today!!";
					cout<<"\n\n\t Press any key to continue.......";
					
				case 1:
					cout<<"Enter Your Pin Access Number! [Only one attempt is allowed]";
					
					int pin;
					cout<<"\n\n\t Pin :";
					cin>>pin;
					if(pin=12345)
					{
						cout<<"\n\n\t\t ATM MAIN MENU SCREEN";
						cout<<"\n\n\t Enter [1] To Deposite Cash";
						cout<<"\n\n\t Enter [2] To Withdraw Cash";
						cout<<"\n\n\t Enter [3] To Balance Cash";
						cout<<"\n\n\t Enter [0] To Exit ATM";
						cout<<"\n\n\t PLEASE ENTER A SELECTION AND PREE RETURN KEY:";
						
					}
					else 
					{
						cout<<"\n\n\t\t THANK YOU";
						cout<<"\n\n\t You had made your attempt which failed !! No More attemps allowed!! Sorry!!";
						cout<<"\n\n\t Press any key to continue.......";
						
					}
			}
	}
};
		
		bank :: bank()
		{
			cout<<"\n\n\t\t  WELCOME TO ATM";
			cout<<"\n\t............................................. ";
			cout<<"\n\n\t Current date : Mon Aug 22 12 15:00:59 2022";
			cout<<"\n\t............................................. ";
			int ch;
			switch(ch)
			{
				cout<<"\n\n\t Press 1 and Then Press Enter to Access Your Account Via Pin Number";
				cout<<"\n\n\t or";
				cout<<"\n\n\t Press 0 And Press Enter To Get Help";
				
				case 0:
					cout<<"\n\n\t\t ATM ACCOUNT STATUS";
					cout<<"\n\n\t You must have the correct pin number to access this account.See your";
					cout<<"\n\t bank representation for assistance during bank opening hours";
					cout<<"\n\t Thanks for,your choice today!!";
					cout<<"\n\n\t Press any key to continue.......";
				
				case 1:
					cout<<"Enter Your Pin Access Number! [Only one attempt is allowed]";
					break;
					
					int pin;
					cout<<"\n\n\t Pin :";
					cin>>pin;
					if(int pin=12345)
					{
						cout<<"\n\n\t\t ATM MAIN MENU SCREEN";
						cout<<"\n\n\t Enter [1] To Deposite Cash";
						cout<<"\n\n\t Enter [2] To Withdraw Cash";
						cout<<"\n\n\t Enter [3] To Balance Cash";
						cout<<"\n\n\t Enter [0] To Exit ATM";
						cout<<"\n\n\t PLEASE ENTER A SELECTION AND PREE RETURN KEY:";
						
					}
					else 
					{
						cout<<"\n\n\t\t THANK YOU";
						cout<<"\n\n\t You had made your attempt which failed !! No More attemps allowed!! Sorry!!";
						cout<<"\n\n\t Press any key to continue.......";
						
					}
			}
		
}
main()
{
	bank b;
	b.info();
	b.account();
}