#include <iostream>
#include "logger.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Logger::getInstance().logSetup("Zelog.txt");
    LOG(Logger::INFO) << "This is main entrance ";
    LOG(Logger::WARNING)  << "Testing!!";

    return 0;

}

