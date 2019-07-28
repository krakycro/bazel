#include <string>
#include <iostream>
#include <filesystem>

#include "src/func.hpp"

int main(int argc, char **argv)
{
    int argc2 = 3;
    char * argv2[3] = {"", "ccc.txt", "output.txt"};

    return doMain(argc2, argv2);
}