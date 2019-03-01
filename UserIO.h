#ifndef UserIO_H
#define UserIO_H
#include <fstream>

using namespace std; 


class UserIO
{
    public: 
    int GetInt(); 
    double GetDouble(); 
    void Config(); 
    int BoundMode(); 
    string filePath; 
    int h; 
    int w; 
    double startPop;
};

#endif 