#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

class bank
{
	int acno;
	char nm[100],acctype[100];
	float bal;
public:
	bank(int acc_no,char *name,char *acc_type,float balance)
	{
		acno=acc_no;
		strcpy(nm,name);
		strcpy(acctype,acc_type);
		bal=balance;
	}
	void deposit();
	void withdraw();
	void display();
};
void bank::deposit()
{
	int damt1;
	cout<<"\n Enter Deposit amt=";
	cin>>damt1;
	bal+=damt1;
}
void bank::withdraw()
{
	int wamt1;
	cout<<"\n Enter Withdraw Amount=";
	cin>>wamt1;
	if(wamt1>bal)
		cout<<"\n Cannot withdraw amt";
	bal-=wamt1;
}
void bank::display()
{
	cout<<"\n-------------";
	cout<<"\n Account no.:"<<acno;
	cout<<"\n Name:"<<nm;
	cout<<"\n Account Type:"<<acctype;
	cout<<"\n Balamce:"<<bal;
}
int main()
{
	int acc_no;
	char name[100],acc_type[100];
	float balance;
	cout<<"\n Enter Details:\n";
	cout<<"------------------";
	cout<<"\n Account no.:";
	cin>>acc_no;
	cout<<"\n Name:";
	cin>>name;
	cout<<"\n Account Type:";
	cin>>acc_type;
	cout<<"\n Balance:";
	cin>>balance;

	bank b1(acc_no, name, acc_type, balance);
	b1.deposit();
	b1.withdraw();
		b1.display();
		getch();
		return 0;
}