#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
   Account( double ); // constructor initializes balance
   virtual void credit(double);
   /* Write a function prototype for virtual function credit */
   virtual bool debit(double);
   /* Write a function prototype for virtual function debit */
   void setBalance( double=0.0 ); // sets the account balance
   double getBalance(); // return the account balance
private:
   double balance; // data member that stores the balance
}; // end class Account

#endif
