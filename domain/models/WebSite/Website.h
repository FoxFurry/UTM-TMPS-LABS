//
// Created by foxfurry on 10/6/21.
//

#ifndef WEBSITE_H
#define WEBSITE_H

#include <string>
#include <iostream>
#include "../Deployment/Deployment.h"

class WebSite {
protected:
    Deployment *deployment;
public:
    WebSite(Deployment *_newDeploy) : deployment(_newDeploy) {}

    std::string getHost() { return deployment->getHost(); }

    void setHost(std::string _host) { deployment->setHost(_host); }

    virtual void deploy() = 0;
};

#endif //WEBSITE_H
