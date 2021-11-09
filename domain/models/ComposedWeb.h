//
// Created by isaca on 10/7/2021.
//

#ifndef LAB1_COMPOSEDWEB_H
#define LAB1_COMPOSEDWEB_H

#include <iostream>
#include <vector>
#include "Website.h"

class ComposedWeb : public WebSite{
public:
    ComposedWeb(std::string _host) : WebSite(_host) {}
    std::vector<std::string> elements;
    std::string getElements(){
        std::string result;

        for(auto val: elements){
            result += val + "\n";
        }

        return result;
    }

    void deploy() {
        std::cout << "Deploying a custom platform on: " << this->host << " with elements:\n" + getElements();
    }
};

#endif //LAB1_COMPOSEDWEB_H
