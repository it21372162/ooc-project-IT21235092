#include "Admin.h"
#include<cstring>

Admin :: Admin()
{
  
}

Admin ::Admin(int E_no, const char E_name[], const char E_email[], int E_mobile)
{
    empNo=E_no;
    strcpy(empName,E_name);
    strcpy(email,E_email);
    mobile=E_mobile;
  
}

void Admin :: login()
{

  
}

void Admin :: managePackages(Package *apkg)
{
  
}

void Admin :: handleFeedbacks(Feedback *afdk)
{

}

Admin :: ~Admin()
{
    for (int i=0; i<SIZE1; i++) 
    {
        delete Package[i];
    }
}
