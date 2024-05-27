#include "article.hpp"

article::article()
{
}

article::~article()
{
}


string article::getDescription() 
{
    return description;
}

int article::getQuantity() 
{
    return quantity;
}

float article::getUnitPrice() 
{
    return unitPrice;
}

float article::getSubTotal() 
{
    return subTotal;
}

void article::setDescription(string newDescription)
{
    description = newDescription;
}

void article::setQuantity(int newQuantity)
{
    quantity = newQuantity;
    updateSubTotal();
}

void article::setUnitPrice(float newUnitPrice)
{
    unitPrice = newUnitPrice;
    updateSubTotal();
}

void article::updateSubTotal()
{
    subTotal = quantity * unitPrice;
}