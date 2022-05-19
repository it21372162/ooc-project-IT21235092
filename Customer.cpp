#include "Customer.h"
#include <iostream>
#include <cstring>

Customer :: Customer()
{
    strcpy(Username,"");
    strcpy(Password,"");
}

Customer :: Customer(const char C_name[], const char C_pass[], int V_ID, const char Name[], const char adrs[], int phone, const char V_email[])
{
    strcpy(Username,C_name);
    strcpy(Password,C_pass);
}

void Customer :: login()
{
    
}

void Customer :: makePayement()
{
    
}

void Customer :: placeBooking(Booking *bking)
{
    
}
            
void Customer :: searchPackages(Package *pk)
{
    
}
            
void Customer :: addFeedbacks(Feedback *feed)
{
    
}

Customer :: ~Customer()
{
    for (int i=0; i<SIZE; i++) 
    {
        delete Package[i];
    }
        
}
