#include <fstream>
#include <string.h>
#include "sources.h"

int motive(char *path, char *motive)
{
    std::ifstream file;
    file.open(path);

    if (file.fail())
    {
        std::cout << "The file " << path << " could not be opened.\n";
        return 1;
    }
    std::string str;
    file >> str;
    int len = str.size();
    char buff[len + 1];
    int count = 0;
    

    strcpy(buff, str.c_str());
    char *word = strtok(buff, " ");
    while (word != NULL)
    {
        std::string s(word);
        std::cout << s;
        if (s.find(motive) != -1)
        {
            count++;
        }
        word = strtok(NULL, " ");
    }
    std::cout << "The file " << path << " contains " << count << " words containing the motive " << motive << "\n";
    return 0;
}