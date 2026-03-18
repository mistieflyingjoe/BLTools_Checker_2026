#include <iostream>
#include <windows.h>
#include "NetworkSuite.hpp"

void StartServiceCheck(std::string serviceName) {
    std::cout << "[THREAD] Initializing audit for: " << serviceName << "..." << std::endl;
    // Simulate proxy connection
    Sleep(800);
    std::cout << "[+] Connection established. Parsing response patterns..." << std::endl;
}

int main() {
    SetConsoleTitleA("BlTools Professional - Security Suite v2.9");
    std::cout << ">>> Automated Log Processing & Audit Tool <<<" << std::endl;

    if (NetworkSuite::IsAuthorized()) {
        std::cout << "[*] System status: Premium (Lifetime)" << std::endl;
        StartServiceCheck("Global_Cloud_Services");
        std::cout << "[INFO] Audit in progress. Check 'Results' folder for updates." << std::endl;
    }

    std::cin.get();
    return 0;
}
