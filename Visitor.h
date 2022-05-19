#pragma once
class Visitor
{
    protected :
            int ID;
            char fullName[50];
            char address[50];
            int mobile;
            char email[20];
            
    public :
            Visitor();
            Visitor(int V_ID, const char Name[], const char adrs[], int phone, const char V_email[]);
            void registerUser();
            void displayDetails();
            ~Visitor();
            
};
