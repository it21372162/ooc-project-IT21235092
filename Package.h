#pragma once
#include "Customer.h"
#include "Admin.h"
#include "Booking.h"
#define SIZE3 5


class Customer;
class Admin;
class Booking;
class Package
{
    private :
            int packageID;
            char pDescription[200];
            char pFacilities[100];
            char pAccommodation[100];
            double pPrice;
            
            Customer* custmr;
            Admin* admin;
            Booking* book[SIZE3];

            
            
    public :
            Package();
            Package(int book1, int book2, Customer* cus, Admin* adm);
            void storePackagedetails(int pID, const char pDes[], const char pFaci[], const char pAcc[], double price, Customer* cus, Admin* adm);
            void addPackages();
            void updatePackages();
            void deletePackages();
            ~Package();
};
