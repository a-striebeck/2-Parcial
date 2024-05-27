#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP
#include "person.hpp"
#include "order.hpp"
#include "user.hpp"


class customer : person
{
private:
    order *Order[maxItems];
public:
    customer(int tID, string name, string address, int DNI);
    ~customer();
    order* getOrder(int index);
    void setOrder(int index, order* newOrder);
    void showPersonalData();
    void showOrders(int index);
    
};



#endif