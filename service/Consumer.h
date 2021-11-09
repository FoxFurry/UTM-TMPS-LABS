//
// Created by foxfurry on 10/6/21.
//

#ifndef CONSUMER_H
#define CONSUMER_H

#include "ITDepartment.h"

class Consumer {
public:
    Consumer() {}

    void consume() {
        const int siteNum = 4, deployNum = 3;

        WebSiteType typesWeb[siteNum] = {WebSiteType::LandingPage, WebSiteType::Portfolio, WebSiteType::EShop, WebSiteType::ComposedWeb};
        DeployType typesDeploy[deployNum] = {DeployType::AWS, DeployType::DigitalOcean, DeployType::AWS};

        int idx = rand() % siteNum;
        int idxDeploy = rand() % deployNum;

        std::string host;
        char tmp[25];
        std::sprintf(tmp, "%d.%d.%d.%d", rand() % 255 + 1, rand() % 255 + 1, rand() % 255 + 1, rand() % 255 + 1);
        host = tmp;


        ITDepartment::getInstance()->deployWebsite(typesWeb[idx], typesDeploy[idxDeploy], host);
    }
};

#endif //CONSUMER_H
