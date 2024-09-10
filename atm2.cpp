#include<conio.h>
#include<string.h>
#include<iostream>
/* mini project- ATM
	-> check balence
	-> cash withdrow
	-> update mobile no
	-> user detail
	*/
using namespace std;
class atm{
	private:
		long int account_no;
		string name;
		int pin;
		string mobile_no;
		double balence;
	public:
		void setdata(long int account_no_1,int pin_1,string mobile_no_1, string name_1,double balence_1)
		{
            
           account_no = account_no_1;
			name = name_1;
			pin = pin_1;
			mobile_no = mobile_no_1;
			balence = balence_1;
			
		}
		long int getaccountno(){
			return account_no;
		}
		int getpin(){
			return pin;
			
		}
		string getname(){
			return name;
		}
		string getmobileno(){
			return mobile_no;
		}
		double getbalence(){
			return balence;
		}
		void updatemobileno(string old_no, string new_no){
			if (old_no == mobile_no){
				mobile_no = new_no;
				cout<<"successfully updated";
				_getch();
			
			}
			else{
			
			cout<<"incorrect old no";
			_getch();
		}
		}
		void cashwithdrow(int amount_1){
			if(amount_1 > 0 && amount_1 < balence)
			{
				balence -= amount_1;
				cout<<"collect your money:"<<endl;
				cout<<"avaliable balance "<<balence;
				_getch();
			}
			else
		{
			cout << endl << "Invalid Input or Insufficient Balance";
			_getch();
		}
	}
};
int main(){
	atm user1 ,user2;
	system("cls");
	int enteraccount;
	int enterpin;
	user1.setdata(1234567,2558,"7302605506","aamir",50000);

	do{
		system("cls");

		cout << endl << "****Welcome to ATM*****" << endl;
		cout << endl << "Enter Your Account No ";	  // asking user to enter account no
		cin >> enteraccount;

		cout << endl << "Enter PIN ";				 // asking user to enter PIN
		cin >> enterpin;
		if(enteraccount == user1.getaccountno() && enterpin == user1.getpin()){
			do{
				int amount =0,choice =0;
				string old_no, new_no;
				
				system("cls");
				// user Interface
				cout << endl << "**** Welcome to ATM *****" << endl;
				cout << endl << "Select Options ";
				cout << endl << "1. Check Balance";
				cout << endl << "2. Cash withdraw";
				cout << endl << "3. Show User Details";
				cout << endl << "4. Update Mobile no.";
				cout << endl << "5. Exit" << endl;
				cin >> choice;
				switch(choice)
				{
				  case 1:
				  	cout << endl << "Your Bank balance is :" << user1.getbalence();	
				  	_getch();
				  	break;
				  case 2:
				  	cout<<"enter your amount:";
				  	cin>>amount;
				  	user1.cashwithdrow(amount);
				  	break;
				   case 3:
				   	cout << endl << "*** User Details are :- ";
					cout << endl << "-> Account no" << user1.getaccountno();
					cout << endl << "-> Name      " << user1.getname();
					cout << endl << "-> Balance   " << user1.getbalence();
					cout << endl << "-> Mobile No." << user1.getmobileno();
													// getting and printing user details
					_getch();
					break;
					case 4:
						cout<<"enter old number:"<<endl;
						cin>>old_no;
						cout<<"enter new number:"<<endl;
						cin>> new_no;
						user1.updatemobileno(old_no ,new_no);
						break;
					case 5:
						exit(0);
					default:
						cout<<"enter valid data";
				}		
			}while(1);
		}
		cout<<"thank you for using ";
	}while(1);
	
	return 0;
}
	
	

	

