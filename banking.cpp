#include<iostream>
using namespace std;
class Account{
	int accountNumber;
	string accountHolderName;
	int accountBalance;
	public:
		int withdraw;
		int deposit;
		Account(){
		}
		Account(int a,string b,int c){
			accountNumber=a;
			accountHolderName=b;
			accountBalance=c;
		}
	void input(){
		cout<<"enter the accountNumber: "<<endl;
		cin>>accountNumber;
		cout<<"enter the accountHolderName: "<<endl;
		cin>>accountHolderName;
		cout<<"enter the accountBalance: "<<endl;
		cin>>accountBalance;
		cout<<"enter withdraw amount: "<<endl;
		cin>>withdraw;
		cout<<"enter the deposite amount: "<<endl;
		cin>>deposit;
	}	
	void display(){
		cout<<"accountNumber: "<<accountNumber<<endl;
		cout<<"accountHolderName: "<<accountHolderName<<endl;
		cout<<"accountBalance: "<<accountBalance<<endl;
		cout<<"remain balance: "<<accountBalance-withdraw<<endl;
		//cout<<"deposited amount: "<<accountBalance+deposit<<endl;
	}
	
	};
int main(){
Account A1;
A1.input();
A1.display();
	return 0;
}

