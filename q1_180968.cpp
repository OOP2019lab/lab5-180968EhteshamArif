#include"Header.h"
using namespace std;
int main()
{
	BankAccount myAccount("John Doe",549002);
	myAccount.setbalance(5000);
	myAccount.withDraw(2000);
	myAccount.Deposit(6500);
	myAccount.withDraw(500);
	myAccount.Deposit(10);
	myAccount.withDraw(500);
	myAccount.Deposit(100);
	myAccount.withDraw(500);
	myAccount.Deposit(4000);
	myAccount.withDraw(500);
	myAccount.Deposit(800);
	myAccount.withDraw(500);
	myAccount.Deposit(32);
	myAccount.withDraw(500);
	
	myAccount.print();

	return 0;
}