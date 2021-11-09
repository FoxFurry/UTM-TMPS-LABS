//
// Created by foxfurry on 11/9/21.
//

#ifndef TMPS_DIGITALOCEAN_H
#define TMPS_DIGITALOCEAN_H

class DigitalOcean : public Deployment {
public:
    DigitalOcean(std::string _host) : Deployment("DigitalOcean", _host) {}

    void deploy() {
        std::cout << "DigitalOcean with host: " << this->getHost() << '\n';
    }
};

#endif //TMPS_DIGITALOCEAN_H
