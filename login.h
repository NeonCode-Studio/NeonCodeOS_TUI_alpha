#pragma once
#include <string>

class login{
public:
    std::string nazwa;
    int ver;
    
    login(std::string start_name, int start_ver);

    void log();
};