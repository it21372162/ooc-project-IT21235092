#pragma once
#include "Package.h"
#include "Feedback.h"
#define SIZE1 5
class Admin
{
      private :
            int empNo;
            char empName[30];
            char email[20];
            int mobile;

           
            Package *admin[SIZE1];
            Feedback *fbk[SIZE1];

      public :
            Admin();
            Admin(int E_no, const char E_name[], const char E_email[], int E_mobile);
            void login();
            void managePackages(Package *apkg);
            void handleFeedbacks(Feedback *afdk);
            ~Admin();
};
