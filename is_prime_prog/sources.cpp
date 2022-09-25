#include <string.h>
#include "sources.h"


void parse(char buff[])
{
    char *number = strtok(buff, " ");
    
    while (number != NULL)
    {
        std::cout << number << " is a prime: " << isPrimeNumber(atoi(number)) << "\n";
        
        number = strtok(NULL, " ");
    }
}

std::string isPrimeNumber(int number)
{
    if (number <= 1)
    {
        return "False";
    }
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return "False";
        } 
    }
    return "True";
}


