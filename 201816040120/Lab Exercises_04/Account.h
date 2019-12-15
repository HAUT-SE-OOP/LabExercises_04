// Lab 1: Account.h
// Definition of Account class.
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
   Account( double ); // constructor initializes balance
   /* Write a function prototype for virtual function credit */
   virtual void credit(double);
   /* Write a function prototype for virtual function debit */
   virtual bool debit(double);
   void setBalance( double ); // sets the account balance
   double getBalance(); // return the account balance
private:
   double balance; // data member that stores the balance
}; // end class Account

#endif
