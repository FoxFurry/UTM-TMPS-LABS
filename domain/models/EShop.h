//
// Created by foxfurry on 10/6/21.
//

#ifndef LAB1_ESHOP_H
#define LAB1_ESHOP_H

#include "Website.h"

class EShop : public WebSite {
public:
    EShop(std::string _host) : WebSite(_host) {}

    void deploy() {
        std::cout << "Deploying a eshop platform on: " << this->host << '\n';
    }
};


#endif //LAB1_ESHOP_H
