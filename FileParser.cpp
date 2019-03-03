#include "FileParser.h" 
#include "World.h"
#include <iostream> 
#include <fstream> 
#include <string>
#include <stdexcept>

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
int FileParser::fpGetInt(string line)
{
    int lineInt; 
    while (true)
    {
        try 
        {
            lineInt = stoi(line);
            break; 
        }
        catch(invalid_argument& e)
        {
            cout<<"This input is invalid. Please enter an integer. fp1"<<endl; 
        }
        break; 
 
    }
    return lineInt; 
}

// get the dimensions from the map file 
void FileParser::findHW(string fileName)
{
    World w(height, width); 

    inFile.open(fileName); 
    while (!inFile.is_open())
    {
        cout<<"File cannot be found, name a new file."<<endl; 
        string newPath; 
        cin>>newPath; 
        inFile.open(newPath);
    }
    
    string line; 
    cout<<"test fp 1"<<endl; // delete later 

    getline(inFile, line);
    w.globalHeight = fpGetInt(line); 
    // int rowInt = fpGetInt(line); 
    cout<<rowInt<<" rowInt fp "<<endl; // delete later 

    getline(inFile, line);
    w.globalWidth = fpGetInt(line);
    // int colInt = fpGetInt(line); 
    cout<<colInt<<" colInt fp "<<endl; // delete later 
}

FileParser::FileParser()
{
    int f = 0; // it needed something here to run 
    return; 
}


