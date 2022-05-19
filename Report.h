#pragma once
#include "Booking.h"
#include "Payment.h"

class Report
{
    private :
          int reportID;

    public :
           Report();
           Report(int R_ID);
           void generateBookDetails(Booking *R_bk);
           void generatePaymentDetails(Payment *R_pay);
           void generateConfirmationDetails();
          ~Report();

};
