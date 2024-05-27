#ifndef USER_HPP
#define USER_HPP
#include "person.hpp"
#include <iostream>

class user : person
{
private:
    int sales;
public:
    user(int tID, string name, string address, int DNI);
    ~user();
    void showPersonalData();
    void setSales();
    int getSales();

};

#endif