cmake_minimum_required(VERSION 3.16)
project(Lab1)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab1 main.cpp domain/models/Website.h domain/models/EShop.h domain/models/Portfolio.h domain/models/LandingPage.h infrastructure/WebFactory.h service/ITDepartment.h service/Consumer.h)
