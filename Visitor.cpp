#include "Visitor.h"
#include <iostream>
#include <cstring>

Visitor::Visitor()
{
    ID=0;
    strcpy(fullName,"");
    strcpy(address,"");
    mobile=0;
    strcpy(email,"");
    
}

Visitor::Visitor(int V_ID, const char Name[], const char adrs[], int phone, const char V_email[])
{
    ID=V_ID;
    strcpy(fullName,Name);
    strcpy(address,adrs);
    mobile=phone;
    strcpy(email,V_email);
}

void Visitor :: login()
{
  
}

void Visitor :: registerUser()
{
    
}

void Visitor :: displayDetails()
{
    
}

Visitor :: ~Visitor()
{
    //destructor
}

