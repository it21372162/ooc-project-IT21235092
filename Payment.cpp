#include "Payment.h"
#include <cstring>

Payment :: Payment()
{
  
}

Payment :: Payment(int P_ID, const char P_type[], double P_amnt)
{
  paymentID=P_ID;
  strcpy(paymentType,P_type);
  paymentAmount=P_amnt;
  
}

void Payment :: checkPayment()
{
  
}

void Payment :: confirmPayment()
{
  
}

void Payment :: displayPaymeentDetails()
{
  
}

Payment :: ~Payment()
{
  
}
