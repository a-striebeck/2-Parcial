#ifndef ORDER_HPP
#define ORDER_HPP
#include <iostream>
#include "article.hpp"

class user;
class customer;

const int maxItems = 10;

class order
{
private:
    int id;
    string date = __DATE__;
    article *articles[maxItems];
    customer *Customer;
    user *User;

public:
    order(/* args */);
    ~order();

    void setId(int newId);
    void setArticle(int index, article* newArticle);
    void setUser(user *tUser);
    void setCustomer(customer *tCustomer);
    
    int getId() ;
    std::string getDate() ;
    user* getUser();
    customer* getCustomer();
    article* getArticle(int index);
    void showArticles();

};


#endif