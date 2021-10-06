//
// Created by foxfurry on 10/6/21.
//

#ifndef LAB1_ITDEPARTMENT_H
#define LAB1_ITDEPARTMENT_H

#include "../infrastructure/WebFactory.h"
#include <iostream>

class ITDepartment {
private:
    ITDepartment() {}

public:
    ITDepartment(ITDepartment const &) = delete;

    void operator=(ITDepartment const &) = delete;

    static ITDepartment *getInstance() {
        static ITDepartment it;
        return &it;
    }

    void deployWebsite(WebSiteType type, std::string _host) {
        WebSite *deployedWeb = Factory(type, _host);
        if (deployedWeb == nullptr) {
            std::cout << "Could not create such website!";
            return;
        }

        deployedWeb->deploy();
    }
};

#endif //LAB1_ITDEPARTMENT_H
