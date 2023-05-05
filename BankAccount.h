#pragma once
using namespace System;
ref class BankAccount abstract
{
public:
	//Derived classes can override this function
	virtual String^ ToString() override;
	//Derived classes must override this function
	//You can use '=0' instead of 'abstract'
	virtual bool CanDebit(double amount) abstract;
	BankAccount(String^ holder);
	void Credit(double amount);
	bool Debit(double amount);
	double GetBalance();
private:
	String^ accountHolder;
	double balance;
protected:
	String^ RoutingInstructions(double amount);
};