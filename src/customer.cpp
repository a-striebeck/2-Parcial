#include "customer.hpp"


customer::customer(int tID, string name, string address, int DNI)
{
    this->setId(tID);
    this->setFullName(name);
    this->setAddress(address);
    this->setDni(DNI);
}
customer::~customer()
{
}

order* customer::getOrder(int index)
{
    if (index >= 0 && index < maxItems)
    {
        return Order[index];
    }
    else
    {
        return nullptr;
    }
}

void customer::setOrder(int index, order* newOrder)
{
    if (index >= 0 && index < maxItems)
    {
        Order[index] = newOrder;
    }
    else
    {
        std::cout << " \n En esta version solo puede haber un maximo de 10 ordenes por cliente. \n";
    }
}

void customer::showPersonalData(){

    std::cout << "Nro de cliente: " << this->getId();
    std::cout << "Nombre: " << this->getFullName();
    std::cout << "Dirección: " << this->getAddress();
    std::cout << "DNI: " << this->getDni();
    for (size_t i = 0; i < maxItems; i++)
    {
        this->showOrders(i);
    }
    

}
void customer::showOrders(int index){
    
    order *tOrder = this->getOrder(index);
    user *tUser = tOrder->getUser();

    std::cout << "Nro de Orden" << tOrder->getId();
    std::cout << "Fecha: " << tOrder->getDate();
    std::cout << "Vendedor: ";
    tUser->showPersonalData();
    tOrder->showArticles();



}