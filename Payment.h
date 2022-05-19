#pragma once

class Payment
{
    private :
          int paymentID;
          char paymentType[20];
          double paymentAmount;

    public :
          Payment();
          Payment(int P_ID, const char P_type[], double P_amnt);
          void checkPayment();
          void confirmPayment();
          void displayPaymeentDetails();
          ~Payment();

};
