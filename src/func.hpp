
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int doMain(int argc, char **argv)
{
    cout << "start" << endl;
    uint8_t status = false;
    string line;
    ifstream F1(argv[1]);
    ofstream F2(argv[2]);

    if (!F1.is_open())
    {
        cout << "Err1: " << argv[1] << endl;
    }
    if(!F2.is_open())
    {
        cout << "Err2: " << argv[2] << endl;
    }
    else
    {
        cout << "go" << endl;
        while ( getline (F1, line) )
        {
            F2 << line << '\n';
            cout << line << '\n';
        }
        F1.close();
        F2.close();

        status = true;
    }

    cout << "end" << endl;
    return status;
}