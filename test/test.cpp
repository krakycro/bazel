
#include <gtest/gtest.h>

#include "src/func.hpp"
//#include "test/test_cases/test1.cpp"

using namespace std;

TEST(StrCompare, CStrEqual)
{
    int argc = 3;
    char * argv[3] = {"", "../../../../../test/test_cases/input.txt", "output.txt"};

    EXPECT_TRUE(doMain(argc, argv));

}