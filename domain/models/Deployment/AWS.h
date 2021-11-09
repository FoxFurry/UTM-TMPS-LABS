//
// Created by foxfurry on 11/9/21.
//

#ifndef TMPS_AWS_H
#define TMPS_AWS_H

class AWS : public Deployment {
public:
    AWS(std::string _host) : Deployment("AWS", _host) {}

    void deploy() {
        std::cout << "AWS with host: " << this->getHost() << '\n';
    }
};

#endif //TMPS_AWS_H
