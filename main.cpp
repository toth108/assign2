#include "World.h"
#include "UserIO.h" 
#include "FileParser.h"
#include "ClassicMode.h"
#include <iostream> 

using namespace std; 

int main (int argc, char** argv)
{
    // initialize new class instances 
    UserIO user;
    user.Config();
    cout << "test main 1" << endl; // delete later 
    ClassicMode cm;

    int boundMode = user.BoundMode();
    cout << "test main 2" << endl; // delete later 
    int height = user.h; 
    cout << "test main 3" << endl; // delete later 
    int width = user.w; 
    
    cout << height << " main height" << endl; // delete later 
    cout << width << " main width" << endl; // delete later 

    // World * w = new World(height, width); 
    cout << "test main 4" << endl; // delete later 
    
    // Classic Mode 
    if (boundMode == 1) 
    {
        cout<<"test main 5"<<endl; // delete later 

        // iterate through w.grid for r and c 
        for (int r = 0; r < height; r++)
        {
            for (int c = 0; c <= width; c++)
            {
                cout<<"test main 6" << " r: " << r << " c: " << c <<endl; // delete later 
                //cm.classicNeighbors(r, c, height, width);
            }
        }
    }

    // Doughnut Mode 
    else if (boundMode == 2)
    {
        //dM.doughNeighbors
    }

    // Mirror Mode 
    else if (boundMode == 3)
    {
        //mM.mirrorNeighbors
    }

    return 0;
}