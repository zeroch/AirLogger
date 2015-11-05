#include <iostream>
#include "logger.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Logger::getInstance().logSetup("Zelog.txt");
    Logger::getInstance().log(Logger::LOGINFO) << "This is main entrance ";
    Logger::getInstance().log(Logger::LOGWARNING)  << "Testing!!";

    return 0;

}

