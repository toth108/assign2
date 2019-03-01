#include "FileParser.h" 
#include <iostream> 
#include <fstream> 
#include <string>

using namespace std; 


// opens file from a pre-defined file path 
// and checks if that file exists, if not it prompts user for a new file 
void FileParser::openFile(string filePath) 
{
    inFile.open(filePath); 
    while (!inFile.is_open())
    {
        cout<<"File cannot be found, name a new file."<<endl; 
        string newPath; 
        cin>>newPath; 
        inFile.open(newPath);
    }
}

// get an int from the file line 
int FileParser::fpGetInt()
{
    int x;
    cin>>x;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(1000,'\n');
        cout<<"This input is invalid. Please enter an integer."<<endl; 
        cin>>x; 
    }
    return x;
}

// get the dimensions from the map file 
FileParser::FileParser(string fileName)
{
    string line; 

    ifstream filein(fileName);
    getline(filein, line);
    int rowInt = fpGetInt(); 
    getline(filein, line);
    int colInt = fpGetInt(); 
}


