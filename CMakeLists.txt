cmake_minimum_required(VERSION 3.16)
project(TMPS)

set(CMAKE_CXX_STANDARD 20)

add_executable(TMPS main.cpp domain/models/WebSite/Website.h domain/models/WebSite/EShop.h domain/models/WebSite/Portfolio.h domain/models/WebSite/LandingPage.h infrastructure/WebFactory.h service/ITDepartment.h service/Consumer.h infrastructure/WebBuilder.h domain/models/WebSite/ComposedWeb.h service/WebAggregator.h domain/models/Deployment/Deployment.h domain/models/Deployment/AWS.h domain/models/Deployment/GCP.h domain/models/Deployment/DigitalOcean.h)
