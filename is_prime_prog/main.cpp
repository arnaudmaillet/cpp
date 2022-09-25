#include <iostream>
#include "sources.h"

int main()
{
    char buff[256];
    std::cin.getline(buff, 256);
    parse(buff);
    return 0;
}