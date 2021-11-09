//
// Created by foxfurry on 11/9/21.
//

#ifndef TMPS_DEPLOYMENT_H
#define TMPS_DEPLOYMENT_H

class Deployment {
protected:
    std::string cloudProvider, cloudHost;
public:
    Deployment(std::string _provider, std::string _host) : cloudHost(_host), cloudProvider(_provider) {}

    std::string getProvider() { return cloudProvider; }
    void setProvider(std::string _provider) { cloudProvider = _provider; }

    std::string getHost() { return cloudHost; }
    void setHost(std::string _host) { cloudHost = _host; }

    virtual void deploy() = 0;
};

#endif //TMPS_DEPLOYMENT_H
