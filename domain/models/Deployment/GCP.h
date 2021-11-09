//
// Created by foxfurry on 11/9/21.
//

#ifndef TMPS_GCP_H
#define TMPS_GCP_H

class GCP : public Deployment {
public:
    GCP(std::string _host) : Deployment("GCP", _host) {}

    void deploy() {
        std::cout << "GCP with host: " << this->getHost() << '\n';
    }
};

#endif //TMPS_GCP_H
