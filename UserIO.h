#ifndef UserIO_H
#define UserIO_H
#include <fstream>

using namespace std; 


class UserIO
{
    public: 
    int GetInt(); 
    double GetDouble(); 
    int Config(); 
    int BoundMode(); 
    string filePath; 
};

#endif 