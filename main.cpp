#include ".\include\article.hpp"
#include ".\include\order.hpp"
#include ".\include\user.hpp"
#include ".\include\customer.hpp"
#include <iostream>

int main()
{

    article* Articles[maxItems]; // Creando un puntero de tipo Article
    Articles[0] = new article();  // Instanciandolo en memoria dinamica
    Articles[0]->~article(); // Liberando la memoria utilizando el destructor de la clase


    Articles[0]->setDescription("GAS en Garrafas de distintos Tamaños");
    Articles[0]->setQuantity(2);
    Articles[0]->setUnitPrice(25.5);
    Articles[0]->updateSubTotal();
    user *activeUser = new user(1, "Bernardo", "Islas Baleares 185", 56235412);
    order *Order = new order();
    customer *Customer = new customer(1, "Nancy", "Uruguay 19070", 1856231);
    string name;

    Articles[0] = new article();
    Articles[0]->setDescription("GAS en Garrafas de distintos Tamaños");
    Articles[0]->setQuantity(2);
    Articles[0]->setUnitPrice(25.5);
    Articles[0]->updateSubTotal();
    
    Articles[1] = new article();
    Articles[1]->setDescription("Accesorios");
    Articles[1]->setQuantity(5);
    Articles[1]->setUnitPrice(10.0);
    Articles[1]->updateSubTotal();

    Articles[2] = new article();
    Articles[2]->setDescription("Otros Tamaños de Garrafas");
    Articles[2]->setQuantity(1);
    Articles[2]->setUnitPrice(30.75);
    Articles[2]->updateSubTotal();

    Order->setArticle(0, Articles[0]);
    Order->setArticle(1, Articles[1]);
    Order->setArticle(2, Articles[2]);
    Order->setCustomer(Customer);
    Order->setUser(activeUser);

    Customer->setOrder(0, Order);
    Customer->showOrders(0);

    Articles[0]->~article();
    Articles[1]->~article();
    Articles[2]->~article();
    activeUser->~user();
    Customer->~customer();
    Order->~order();
}

