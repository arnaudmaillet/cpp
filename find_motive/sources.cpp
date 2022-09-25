#include <fstream>
#include <string.h>
#include "sources.h"

int motive(char *path, char *motive)
{
    std::ifstream file;
    file.open(path);

    if (file.fail()) {
        std::cout << "The file " << path << " could not be opened.\n";
        return 1;
    }

    std::string str;
    int len = str.length();
    char buff[len + 1];
    file >> str;

    int count = 0;

    std::string word = strtok(strcpy(buff, str.c_str()), " ");
    while (word.find(motive))
    {
        count++;
    }
    std::cout << "The file " << path << " contains " << count << " words containing the motive "<< motive <<"\n";
    return 0;
}