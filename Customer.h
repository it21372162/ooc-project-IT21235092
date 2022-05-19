#pragma once
#include "Visitor.h"
#include "Package.h"
#include "Booking.h"
#include "Feedback.h"

class Package;
class Booking;
class Feedback;
#define SIZE 5

class Customer : public Visitor
{
    protected :
            char Username[30];
            char Password[15];
            
            Package *pkg[SIZE];
            Booking *bk[SIZE];
            Feedback *fb[SIZE];
    
    public :
            Customer();
            Customer(const char C_name[], const char C_pass[], int V_email_ID, const char Name[], const char adrs[], int phone, const char V_email[]);
            void login();
            void makePayement();
            void placeBooking(Booking *bking);
            void searchPackages(Package *pk);
            void addFeedbacks(Feedback *feed);
            ~Customer();
            
};
