#pragma once
#include "Customer.h"
#include "Payment.h"
#define SIZE5 2

class Customer;
class Payment;
class Booking
{
    private :
         int bookID;
         char bookDate[20];
         char bookDescription[100];
         int count=0;

         Customer *bcustmr;
         Payment *payment[SIZE5];
          

    public :
          Booking();
          Booking(int B_ID);
          Booking(int B_ID, const char B_date[], const char B_desc[],Customer *bcus, int pay1, int pay2);
          void addBooking();
          void calculateBill(int id, const char ptyp[], double pAmt);
          void displayBookingDetails();
          ~Booking();
          
};
