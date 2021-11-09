//
// Created by foxfurry on 10/6/21.
//

#ifndef ITDEPARTMENT_H
#define ITDEPARTMENT_H

#include "../infrastructure/WebFactory.h"
#include "WebAggregator.h"
#include <iostream>

class ITDepartment {
private:
    ITDepartment() {}
    Aggregator aggregator;
public:
    ITDepartment(ITDepartment const &) = delete;

    void operator=(ITDepartment const &) = delete;

    static ITDepartment *getInstance() {
        static ITDepartment it;
        return &it;
    }

    void deployWebsite(WebSiteType type, DeployType deployType, std::string _host) {
        WebSite *deployedWeb = Factory(type, deployType, _host);
        if (deployedWeb == nullptr) {
            std::cout << "Could not create such website!\n";
            return;
        }

        deployedWeb->deploy();
        aggregator.addWebsite(deployedWeb);
    }
};

#endif //ITDEPARTMENT_H
