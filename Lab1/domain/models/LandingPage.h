//
// Created by foxfurry on 10/6/21.
//

#ifndef LAB1_LANDINGPAGE_H
#define LAB1_LANDINGPAGE_H

#include "Website.h"

class LandingPage: public WebSite {
public:
    LandingPage(std::string _host): WebSite(_host) {}
    void deploy(){
        std::cout << "Deploying a landing page on: " << this->host << '\n';
    }
};

#endif //LAB1_LANDINGPAGE_H
