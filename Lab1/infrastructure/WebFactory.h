//
// Created by foxfurry on 10/6/21.
//

#ifndef LAB1_WEBFACTORY_H
#define LAB1_WEBFACTORY_H

#include "../domain/models/Website.h"
#include "../domain/models/EShop.h"
#include "../domain/models/Portfolio.h"
#include "../domain/models/LandingPage.h"

enum class WebSiteType{
    EShop,
    LandingPage,
    Portfolio
};

WebSite *Factory(WebSiteType type, std::string _host) {
    WebSite *result = nullptr;
    switch (type) {
        case WebSiteType::EShop:
            result = new EShop(_host);
            break;
        case WebSiteType::LandingPage:
            result = new  LandingPage(_host);
            break;
        case WebSiteType::Portfolio:
            result = new Portfolio(_host);
            break;
    }
    return result;
}

#endif //LAB1_WEBFACTORY_H
