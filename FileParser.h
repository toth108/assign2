#ifndef FileParser_H
#define FileParser_H
#include <fstream> 

using namespace std; 


class FileParser
{
    public: 
    void openFile(string filePath);
    int fpGetInt(string line); 
    FileParser();
    //int FileParser(string fileName);
    void findHW(string fileName);
    ifstream inFile;
    int maxSize; 
    int rowInt; 
    int colInt; 
};

#endif 