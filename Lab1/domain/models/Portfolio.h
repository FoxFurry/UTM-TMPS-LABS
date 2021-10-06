//
// Created by foxfurry on 10/6/21.
//

#ifndef LAB1_PORTFOLIO_H
#define LAB1_PORTFOLIO_H

#include "Website.h"

class Portfolio : public WebSite {
public:
    Portfolio(std::string _host) : WebSite(_host) {}

    void deploy() {
        std::cout << "Deploying a portfolio page on: " << this->host << '\n';
    }
};

#endif //LAB1_PORTFOLIO_H
