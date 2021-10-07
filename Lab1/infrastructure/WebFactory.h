//
// Created by foxfurry on 10/6/21.
//

#ifndef LAB1_WEBFACTORY_H
#define LAB1_WEBFACTORY_H

#include "../domain/models/Website.h"
#include "../domain/models/EShop.h"
#include "../domain/models/Portfolio.h"
#include "../domain/models/LandingPage.h"
#include "WebBuilder.h"

enum class WebSiteType {
    EShop,
    LandingPage,
    Portfolio,
    ComposedWeb
};

WebSite *Factory(WebSiteType type, std::string _host) {
    switch (type) {
        case WebSiteType::EShop:
            return new EShop(_host);
        case WebSiteType::LandingPage:
            return new LandingPage(_host);
        case WebSiteType::Portfolio:
            return new Portfolio(_host);
        case WebSiteType::ComposedWeb:
            ComposedBuilder* comp_builder = new ComposedBuilder(_host);
            WebDirector* comp_director = new WebDirector(comp_builder);

            comp_director->BuildBestWeb();

            return new ComposedWeb(comp_builder->build());
    }
    return nullptr;
}

#endif //LAB1_WEBFACTORY_H
