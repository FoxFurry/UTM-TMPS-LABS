//
// Created by foxfurry on 11/9/21.
//

#ifndef WEBAGGREGATOR_H
#define WEBAGGREGATOR_H

#include "../domain/models/WebSite/Website.h"

class Aggregator{
    std::vector<WebSite*> history;

public:
    Aggregator() {}
    ~Aggregator() {}

    void addWebsite(WebSite* newWeb) { history.push_back(newWeb); }

    WebSite *getWebsite(int idx) {
        if(idx < 0 || idx>=history.size()){
            return nullptr;
        }
        return history[idx];
    }
};

#endif //WEBAGGREGATOR_H

