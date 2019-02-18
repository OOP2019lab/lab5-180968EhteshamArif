#include<string>
using namespace std;
class BankAccount
{
private:
	int i;
	string accountname;
	int accountnumber;
	float balance;
	float balancelimit;
	float*transactions;
	int totaltransactions;
	int nooftransactions;
public:
	float getbalance();
	void setbalance(float a);
	BankAccount(string accountname,int accountnumber);
	int withdraw;
	int deposit;
	void print();
	void withDraw(float);
	void Deposit(float);
	void increasTranCap();
	bool capacity();
	~BankAccount();
};