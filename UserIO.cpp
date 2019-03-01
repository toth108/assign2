#include "UserIO.h" 
#include "FileParser.h"
#include <iostream> 
#include <fstream> 
#include <string>

using namespace std; 

int UserIO::GetInt()
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

double UserIO::GetDouble() 
{
    double y;
    cin>>y;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(1000,'\n');
        cout<<"This input is invalid. Please enter a decimal value between 0 and 1."<<endl; 
        cin>>y; 
    }
    return y;
}

int UserIO::Config()
{
    cout<<"Would you like to provide a file or use a random configuration?"<<endl; 
    cout<<"Enter '1' to enter a file path or '2' to use random configuration."<<endl; 
    int configChoice = GetInt();
    double startPop; 

    if (configChoice == 1)
    {
        cout<<"Enter the path of the map file you would like to use: "<<endl; 
        string filePath; 
        cin>>filePath; 

        // FileParser * fp = new FileParser(filePath);
        FileParser fp(filePath);
        fp.openFile(filePath);
    }
    else if (configChoice == 2)
    {
        cout<<"What is the height (number of rows) of your world?"<<endl; 
        int h = GetInt(); 
        cout<<"What is the width (number of columns) of your world?"<<endl; 
        int w = GetInt();
        cout<<"Enter a decimal value between 0 and 1 for the initial population density of your world: "<<endl;
        startPop = GetDouble();
        if (startPop >0 && startPop<1) 
        {
            return startPop; 
        }
        else 
        {
            cout<<"This input is invalid."<<endl; 
            cout<<"Enter a decimal value between 0 and 1 for the initial population density of your world: "<<endl;
            startPop = GetDouble();
        }
    }
    return 0; 
}

int UserIO::BoundMode() 
{
    cout<<"What boundary mode would you like to use?"<<endl; 
    cout<<"Enter '1' for Classic Mode, '2' for Doughnut Mode, or '3' for Mirror Mode."<<endl; 
    int modeInt = GetInt();

    // Check if input is valid 
    while (modeInt != 1 || modeInt != 2 || modeInt != 3)
    {
        cout<<"Invalid entry."<<endl; 
        cout<<"Enter '1' for Classic Mode, '2' for Doughnut Mode, or '3' for Mirror Mode."<<endl; 
        int modeInt = GetInt(); 
    }
    return modeInt; 
}