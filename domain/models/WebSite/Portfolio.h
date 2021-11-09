//
// Created by foxfurry on 10/6/21.
//

#ifndef PORTFOLIO_H
#define PORTFOLIO_H

#include "Website.h"

class Portfolio : public WebSite {
public:
    Portfolio(Deployment *_newDeploy) : WebSite(_newDeploy) {}

    void deploy() {
        std::cout << "Deploying a portfolio page on "; this->deployment->deploy();
    }
};

#endif //PORTFOLIO_H
