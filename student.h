#pragma once

// Library Includes
#include <string>
#include <memory>

// File Includes
#include "params.h"

// Namespaces
using string = std::string;

class Student {

private:

    std::unique_ptr<Params> params;
    string name;
    int totalScore;

public:

    void calculateScore();
    int getScore() const;
    string getName() const;
    void setName();
    std::unique_ptr<Params> getParams();
    void setParams();
    void printInfo();

};