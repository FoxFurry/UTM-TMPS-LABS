//
// Created by foxfurry on 10/6/21.
//

#ifndef LANDINGPAGE_H
#define LANDINGPAGE_H

#include "Website.h"

class LandingPage : public WebSite {
public:
    LandingPage(Deployment *_newDeploy) : WebSite(_newDeploy) {}

    void deploy() {
        std::cout << "Deploying a landing page on: "; this->deployment->deploy();
    }
};

#endif //LANDINGPAGE_H
