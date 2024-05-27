#ifndef PERSON_HPP
#define PERSON_HPP
#include <iostream>

using std::string;
class person
{
private:
    int id;
    string fullName;
    string address;
    int dni;

protected:
    person(/* args */);
    ~person();
    
    void setId(int newId);
    void setFullName( std::string& newFullName);
    void setAddress( std::string& newAddress);
    void setDni(int newDni);

    int getId() ;
    std::string getFullName() ;
    std::string getAddress() ;
    int getDni() ;
    virtual void showPersonalData() = 0;
};

#endif