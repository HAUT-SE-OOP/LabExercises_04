#ifndef CHECKING_H
#define CHECKING_H

#include "Account.h" // Account class definition

class CheckingAccount : public Account
{
public:
   // constructor initializes balance and transaction fee
   CheckingAccount( double, double );
   virtual void credit(double);
   /* Write a function prototype for virtual function credit,
      which will redefine the inherited credit function */
   virtual bool debit(double);
   /* Write a function prototype for virtual function debit,
      which will redefine the inherited debit function */
private:
   double transactionFee; // fee charged per transaction
   // utility function to charge fee
   void chargeFee();
}; // end class CheckingAccount

#endif
