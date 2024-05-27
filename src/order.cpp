#include "order.hpp"

order::order(/* args */)
{

}

order::~order()
{
}

int order::getId() 
{
    return id;
}
user* order::getUser() {
    return User;
}

customer* order::getCustomer() {
    return Customer;
}

void order::setUser(user* tUser) {
    User = tUser;
}

void order::setCustomer(customer* tCustomer) {
    Customer = tCustomer;
}
std::string order::getDate() 
{
    return date;
}

article* order::getArticle(int index) 
{
    if (index >= 0 && index < maxItems)
    {
        return articles[index];
    }
    return nullptr;
}

void order::setId(int newId)
{
    id = newId;
}


void order::setArticle(int index, article* newArticle)
{
    if (index >= 0 && index < maxItems)
    {
        articles[index] = newArticle;
    }
}
void order::showArticles(){

    for (size_t i = 0; i < maxItems; i++)
    {
        std::cout << "Descripcion: " << articles[i]->getDescription() << std::endl;
        std::cout << "Cantidad: " << articles[i]->getQuantity() << std::endl;
        std::cout << "Precio Unitario: $" << articles[i]->getUnitPrice() <<std::endl;
        std::cout << "Sub Total: $" << articles[i]->getSubTotal() <<std::endl;
    }
    
}