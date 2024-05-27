#ifndef ARTICLE_HPP
#define ARTICLE_HPP
#include <iostream>

using std::string;

class article
{
private:

    string description;
    int quantity;
    float unitPrice;
    float subTotal;

public:
    article();
    ~article();

    string getDescription() ;
    int getQuantity() ;
    float getUnitPrice() ;
    float getSubTotal() ;

    void setDescription(string newDescription);
    void setQuantity(int newQuantity);
    void setUnitPrice(float newUnitPrice);
    void updateSubTotal();
};

#endif