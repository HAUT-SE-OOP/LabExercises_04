// Lab 1: CheckingAccount.h
// Definition of CheckingAccount class.
#ifndef CHECKING_H
#define CHECKING_H

#include "Account.h" // Account class definition

class CheckingAccount : public Account
{
public:
   // constructor initializes balance and transaction fee
   CheckingAccount( double, double );
    //virtual~CheckingAccount();
   /* Write a function prototype for virtual function credit,
      which will redefine the inherited credit function */
      virtual void credit(double )override;
   /* Write a function prototype for virtual function debit,
      which will redefine the inherited debit function */
     virtual bool debit(double )override;
private:
   double transactionFee; // fee charged per transaction

   // utility function to charge fee
   void chargeFee();
}; // end class CheckingAccount

#endif
