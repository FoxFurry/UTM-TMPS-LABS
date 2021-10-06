//
// Created by foxfurry on 10/6/21.
//

#ifndef LAB1_WEBSITE_H
#define LAB1_WEBSITE_H

#include <string>
#include <iostream>

class WebSite {
protected:
    std::string host;
public:
    WebSite(std::string _host): host(_host) {}
    std::string getHost() {return host;}
    void setHost(std::string _host) { host = _host; }
    virtual void deploy() = 0;
};

#endif //LAB1_WEBSITE_H
