#pragma once
#include "Admin.h"
#include "Customer.h"

class Customer;
class Admin;
class Feedback
{
    private :
          int feedbackID;
          char fbDescription[500];
          char userName[50];

          Customer* Fcus;
            Admin* Fadmin;

    public :
          Feedback();
          Feedback(int F_ID, const char F_des[], const char F_name[], Customer* Fcust, Admin* Fadm);
          void storeFeedbacks();
          void displayFeedbacks();
          ~Feedback();

};
