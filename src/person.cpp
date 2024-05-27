#include "person.hpp"
person::person(){

}
person::~person(){

}
// Métodos get
int person::getId() 
{
    return id;
}

std::string person::getFullName() 
{
    return fullName;
}

std::string person::getAddress() 
{
    return address;
}

int person::getDni() 
{
    return dni;
}

// Métodos set
void person::setId(int newId)
{
    id = newId;
}

void person::setFullName( std::string& newFullName)
{
    fullName = newFullName;
}

void person::setAddress( std::string& newAddress)
{
    address = newAddress;
}

void person::setDni(int newDni)
{
    dni = newDni;
}