#include "user.hpp"

user::user(int tID, string name, string address, int DNI)
{
    this->setId(tID);
    this->setFullName(name);
    this->setAddress(address);
    this->setDni(DNI);
}

user::~user()
{
}

void user::setSales() {
    sales++;
}


int user::getSales() {
    return sales;
}

void user::showPersonalData(){
    std::cout << "Nro de vendedor: " << this->getId();
    std::cout << "Nombre: " << this->getFullName();
}

