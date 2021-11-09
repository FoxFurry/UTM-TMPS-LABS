//
// Created by isaca on 10/7/2021.
//

#ifndef COMPOSEDWEB_H
#define COMPOSEDWEB_H

#include <iostream>
#include <vector>
#include "Website.h"

class ComposedWeb : public WebSite{
public:
    ComposedWeb(Deployment *_newDeploy) : WebSite(_newDeploy) {}
    std::vector<std::string> elements;
    std::string getElements(){
        std::string result;

        for(auto val: elements){
            result += val + "\n";
        }

        return result;
    }

    void deploy() {
        std::cout << "Deploying a custom platform on: "; this->deployment->deploy();
        std::cout << "With elements:\n" + getElements();
    }
};

#endif //COMPOSEDWEB_H
