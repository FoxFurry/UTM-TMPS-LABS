//
// Created by foxfurry on 10/6/21.
//

#ifndef LAB1_CONSUMER_H
#define LAB1_CONSUMER_H

#include "ITDepartment.h"

class Consumer {
public:
    Consumer(){}
    void consume(){
        WebSiteType types[3] = {WebSiteType::LandingPage, WebSiteType::Portfolio, WebSiteType::EShop};
        int idx = rand()%3;
        std::string host;
        char tmp[25];
        std::sprintf(tmp,"%d.%d.%d.%d", rand()%255+1, rand()%255+1, rand()%255+1, rand()%255+1);
        host = tmp;
        ITDepartment::getInstance()->deployWebsite(types[idx], host);
    }
};

#endif //LAB1_CONSUMER_H
