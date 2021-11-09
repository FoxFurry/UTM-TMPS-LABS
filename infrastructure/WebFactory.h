//
// Created by foxfurry on 10/6/21.
//

#ifndef WEBFACTORY_H
#define WEBFACTORY_H

#include "../domain/models/WebSite/Website.h"
#include "../domain/models/WebSite/EShop.h"
#include "../domain/models/WebSite/Portfolio.h"
#include "../domain/models/WebSite/LandingPage.h"
#include "WebBuilder.h"
#include "../domain/models/Deployment/AWS.h"
#include "../domain/models/Deployment/GCP.h"
#include "../domain/models/Deployment/DigitalOcean.h"

enum class WebSiteType {
    EShop,
    LandingPage,
    Portfolio,
    ComposedWeb
};

enum class DeployType {
    AWS,
    DigitalOcean,
    GCP
};

WebSite *Factory(WebSiteType type, DeployType deploy, std::string _host) {
    Deployment *deployInstance;
    switch (deploy) {
        case DeployType::AWS:
            deployInstance = new AWS(_host);
            break;
        case DeployType::GCP:
            deployInstance = new GCP(_host);
            break;
        case DeployType::DigitalOcean:
            deployInstance = new DigitalOcean(_host);
            break;
        default:
            return nullptr;
    }
    
    switch (type) {
        default:
            return nullptr;
        case WebSiteType::EShop:
            return new EShop(deployInstance);
            break;
        case WebSiteType::LandingPage:
            return new LandingPage(deployInstance);
            break;
        case WebSiteType::Portfolio:
            return new Portfolio(deployInstance);
            break;
        case WebSiteType::ComposedWeb:
            ComposedBuilder* comp_builder = new ComposedBuilder(deployInstance);
            WebDirector* comp_director = new WebDirector(comp_builder);

            comp_director->BuildBestWeb();

            return new ComposedWeb(comp_builder->build());
            break;
    }

    return nullptr;
}

#endif //WEBFACTORY_H
