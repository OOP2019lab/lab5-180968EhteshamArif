#include"Header.h"
#include<iostream>
using namespace std;

BankAccount::BankAccount(string name,int number)
{
	i=0;
	accountname=name;
	accountnumber=number;
	balance=0;
	balancelimit=200000;
	nooftransactions=0;
	totaltransactions=10;
	transactions=new float[totaltransactions];
}
void BankAccount::print()
{
	cout<<"The Account Name is :"<<accountname<<endl;
	cout<<"The Account number is : "<<accountnumber<<endl;
	cout<<"The Total Balance is : "<<balance<<endl;
	cout<<"The Number of transactions are :"<<nooftransactions<<endl;
	if(nooftransactions!=0)
	{
		cout<<"The Transactions are as follows :";
	    for(int j=0;j<nooftransactions;j++)
	    {
		  cout<<transactions[j]<<" ";
	    }
	}
	else
	{
		cout<<"-----NO TRANSACTIONS---"<<endl;
	}
	cout<<endl;
}
void BankAccount::withDraw(float n)
{
	if(capacity()==true)
	{
		increasTranCap();
	}
	if(n<=balance)
	{
		cout<<"---Withdraw Successful---"<<endl;
		cout<<"Amount WithDrawn :"<<n<<endl;
		balance=balance-n;
		nooftransactions++;
		transactions[i]=-n;
		i++;
	}
	else
	{
		cout<<"---Transaction UnSuccessful---"<<endl;
	}

}
float BankAccount::getbalance()
{
	return balance;
}
void BankAccount::setbalance(float a)
{
	balance=a;
}
void BankAccount::Deposit(float n)
{
	if(capacity()==true)
	{
		increasTranCap();
	}
	cout<<"---Deposit Successful---"<<endl;
	cout<<"Amount Deposited :"<<n<<endl;
	balance=balance+n;
	nooftransactions++;
	transactions[i]=n;
	i++;
}
BankAccount::~BankAccount()
{
	if(transactions!=nullptr)
	{
	 delete [] transactions;
	 transactions=nullptr;
	}
}
bool BankAccount::capacity()
{
	if(totaltransactions<=nooftransactions)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void BankAccount::increasTranCap()
{
	if(totaltransactions<=nooftransactions)
	{
		float *temp=new float[2*totaltransactions];
		for(int i=0;i<nooftransactions;i++)
		{
			temp[i]=transactions[i];
		}
		temp=transactions;
	}
}