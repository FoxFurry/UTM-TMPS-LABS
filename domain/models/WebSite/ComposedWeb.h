//
// Created by isaca on 10/7/2021.
//

#ifndef COMPOSEDWEB_H
#define COMPOSEDWEB_H

#include <iostream>
#include <vector>
#include "Website.h"

class Element{
public:
    virtual void accept(class Visitor &v) = 0;
};

class ComposedWebElement: public Element{
private:
    std::string val;
public:
    ComposedWebElement(std::string _val){
        this->assign(_val);
    }

    void assign(std::string _val) {
        val = _val;
    }
    std::string get() {
        return val;
    }

    void accept(Visitor &v);
};

class Visitor{
public:
    virtual void visit(ComposedWebElement *e) = 0;
};

void ComposedWebElement::accept(Visitor &v) {
    v.visit(this);
}

class ComposedWebVisitor: public Visitor {
    void visit(ComposedWebElement *e){
        std::cout << e->get() << '\n';
    }
};

class ComposedWeb : public WebSite {
private:
    void printElements() {
        ComposedWebVisitor cwv;

        for (auto& el: elements){
            el.accept(cwv);
        }
    }
public:
    ComposedWeb(Deployment *_newDeploy) : WebSite(_newDeploy) {}

    std::vector<ComposedWebElement> elements;

    void pushElement(std::string elem) {
        elements.push_back(ComposedWebElement(elem));
    }

    void deploy() {
        std::cout << "Deploying a custom platform on: ";
        this->deployment->deploy();
        std::cout << "With elements:\n";
        this->printElements();
    }
};

#endif //COMPOSEDWEB_H
