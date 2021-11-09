//
// Created by foxfurry on 10/6/21.
//

#ifndef LAB1_CONSUMER_H
#define LAB1_CONSUMER_H

#include "ITDepartment.h"

class Consumer {
public:
    Consumer() {}

    void consume() {
        const int n = 4;

        WebSiteType types[n] = {WebSiteType::LandingPage, WebSiteType::Portfolio, WebSiteType::EShop, WebSiteType::ComposedWeb};
        int idx = rand() % n;
        std::string host;
        char tmp[25];
        std::sprintf(tmp, "%d.%d.%d.%d", rand() % 255 + 1, rand() % 255 + 1, rand() % 255 + 1, rand() % 255 + 1);
        host = tmp;
        ITDepartment::getInstance()->deployWebsite(types[idx], host);
    }
};

#endif //LAB1_CONSUMER_H
