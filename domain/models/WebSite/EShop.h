//
// Created by foxfurry on 10/6/21.
//

#ifndef ESHOP_H
#define ESHOP_H

#include "Website.h"

class EShop : public WebSite {
public:
    EShop(Deployment *_newDeploy) : WebSite(_newDeploy) {}

    void deploy() {
        std::cout << "Deploying a eshop platform on: "; this->deployment->deploy();
    }
};


#endif //ESHOP_H
