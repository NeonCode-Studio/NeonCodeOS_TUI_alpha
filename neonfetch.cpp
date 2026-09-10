#include <iostream>
#include <fstream>
#include <string>
#include "neonfetch.h"

void neonfetch()
{
    std::string hostname;
    std::string kernel;
    std::string cpu;
    std::string os;

    // Hostname
    std::ifstream hostFile("/etc/hostname");
    std::getline(hostFile, hostname);

    // Kernel
    std::ifstream kernelFile("/proc/sys/kernel/osrelease");
    std::getline(kernelFile, kernel);

    // CPU
    std::ifstream cpuFile("/proc/cpuinfo");
    std::string line;

    while (std::getline(cpuFile, line))
    {
        if (line.find("model name") == 0)
        {
            cpu = line.substr(line.find(":") + 2);
            break;
        }
    }

    // OS
    std::ifstream osFile("/etc/os-release");

    while (std::getline(osFile, line))
    {
        if (line.find("PRETTY_NAME=") == 0)
        {
            os = line.substr(13);
            break;
        }
    }

    // Wyświetlanie
    std::cout << "\n";
    std::cout << "====================================\n";
    std::cout << "          N E O N F E T C H\n";
    std::cout << "====================================\n";
    std::cout << "OS       : " << os << "\n";
    std::cout << "Kernel   : " << kernel << "\n";
    std::cout << "Host     : " << hostname << "\n";
    std::cout << "CPU      : " << cpu << "\n";
    std::cout << "====================================\n";
}