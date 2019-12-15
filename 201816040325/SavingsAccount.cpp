// Lab 1: // Lab 1: SavingsAccount.cpp
// Member-function definitions for class SavingsAccount.
#include "SavingsAccount.h" // SavingsAccount class definition

#include <iostream>
using namespace std;
// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate )
   : Account( initialBalance ) // initialize base class
{
   interestRate = ( rate < 0.0 ) ? 0.0 : rate; // set interestRate
} // end SavingsAccount constructor

// return the amount of interest earned
double SavingsAccount::calculateInterest()
{
   return getBalance() * interestRate;
} // end function calculateInterest

// Member-function definitions for class SavingsAccount.
#include "SavingsAccount.h" // SavingsAccount class definition

#include <iostream>
using namespace std;
// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate )
   : Account( initialBalance ) // initialize base class
{
   interestRate = ( rate < 0.0 ) ? 0.0 : rate; // set interestRate
} // end SavingsAccount constructor

// return the amount of interest earned
double SavingsAccount::calculateInterest()
{
   return getBalance() * interestRate;
} // end function calculateInterest
