//
// Created by isaca on 10/7/2021.
//

#ifndef LAB1_WEBBUILDER_H
#define LAB1_WEBBUILDER_H

#include "../domain/models/ComposedWeb.h"

class WebBuilder {
private:
    virtual void addElement(std::string) = 0;

public:
    virtual ~WebBuilder() {}

    virtual WebBuilder *sliderElement() = 0;

    virtual WebBuilder *topPanelElement() = 0;

    virtual WebBuilder *bottomPanelElement() = 0;
};

class ComposedBuilder : public WebBuilder {
private:
    ComposedWeb *product;
    std::string host;

    void addElement(std::string _element) override {
        product->elements.push_back(_element);
    }

public:
    ComposedBuilder(std::string _host) : host(_host) {
        Reset();
    }

    ~ComposedBuilder() {
        delete product;
    }

    void Reset() {
        product = new ComposedWeb(host);
    }

    WebBuilder *sliderElement() override {
        addElement("slider");
        return this;
    }

    WebBuilder *topPanelElement() override {
        addElement("top_panel");
        return this;
    }

    WebBuilder *bottomPanelElement() override {
        addElement("bottom_panel");
        return this;
    }

    ComposedWeb build() {
        ComposedWeb result = *product;
        Reset();
        return result;
    }
};

class WebDirector {
private:
    WebBuilder *builder;

public:
    WebDirector(WebBuilder *_builder) : builder(_builder) {}

    void setBuilder(WebBuilder *newBuilder) {
        builder = newBuilder;
    }

    void BuildMinimumWeb() {
        builder->bottomPanelElement();
    }

    void BuildBestWeb() {
        builder->bottomPanelElement()->sliderElement()->topPanelElement();
    }
};

#endif //LAB1_WEBBUILDER_H
