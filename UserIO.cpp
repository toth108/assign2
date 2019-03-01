#include "UserIO.h" 
#include "FileParser.h"
#include <iostream> 
#include <fstream> 
#include <string>
#include <stdexcept>

using namespace std; 

int UserIO::GetInt()
{
    int xInt; 
    string x;
    cin>>x;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(1000,'\n');
        cout<<"This input is invalid. Please enter an integer. userIO 1"<<endl; 
        cin>>x; 
    }
    while (true)
    {
        try 
        {
            xInt = stoi(x);
            break; 
        }
        catch(invalid_argument& e)
        {
            cout<<"This input is invalid. Please enter an integer. userIO 2"<<endl; 
        }
        break; 
 
    }
    return xInt;
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

void UserIO::Config()
{
    while (true) // loops until a viable input is given 
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

            //FileParser fp(filePath);
            
            FileParser fp;
            fp.findHW(filePath);

            int h = fp.rowInt; 
            cout << h << " user IO height "<< endl; // delete later 
            int w = fp.colInt; 
            cout << h << " user IO width "<< endl; // delete later 
            break; 
        }
        else if (configChoice == 2) 
        {
            cout<<"What is the height (number of rows) of your world?"<<endl; 
            int h = GetInt(); 
            cout << h << endl; 
            cout<<"What is the width (number of columns) of your world?"<<endl; 
            int w = GetInt();
            cout << w << endl; 
            cout<<"Enter a decimal value between 0 and 1 for the initial population density of your world: "<<endl;
            startPop = GetDouble();
            
            while (true) // loops until viable input is given 
            {
                if (startPop >0 && startPop<1) 
                {
                    cout<<"test userIO 1"<<endl; // delete later 
                    break; 
                }
                else 
                {
                    cout<<"This input is invalid."<<endl; 
                    cout<<"Enter a decimal value between 0 and 1 for the initial population density of your world: "<<endl;
                    startPop = GetDouble();
                }
            }
            break; 
        }
        else 
        {
            cout<<"This input is invalid."<<endl; 
        }
    }
    
}

int UserIO::BoundMode() 
{
    int modeInt;

    while(true)
    {
        cout<<"What boundary mode would you like to use?"<<endl; 
        cout<<"Enter '1' for Classic Mode, '2' for Doughnut Mode, or '3' for Mirror Mode."<<endl; 
        modeInt = GetInt();

        // Check if input is valid 
        if (modeInt != 1 && modeInt != 2 && modeInt != 3) 
        {
            cout<<"Invalid entry."<<endl; 
        }
        else
        {
            cout<<modeInt<<endl;  
            break; 
        }
    }

    return modeInt; 
}