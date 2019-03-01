#include "World.h"
#include "UserIO.h" 
#include "FileParser.h"
#include "ClassicMode.h"
#include <iostream> 

using namespace std; 

int main (int argc, char** argv)
{
    UserIO user;
    user.Config();

    FileParser fp(user.filePath);

    ClassicMode cm;
    // initialize new class instances 
    //UserIO *user = new UserIO(); 
    //UserIO user;
    //ClassicMode * cM = new ClassicMode(); 
    //FileParser * fp = new FileParser(user.filePath);

    cout << "test" << endl;
    user.Config();
    int boundMode = user.BoundMode();
cout << "test2" << endl;
    int height = fp.rowInt; 
    int width = fp.colInt; 

    World * w = new World(height, width); 
    
    // Classic Mode 
    if (boundMode == 1) 
    {
        // iterate through w.grid for r and c 
        for (int r = 0; r < height; r++)
        {
            for (int c = 0; c < width; c++)
            {
                cm.classicNeighbors(r, c, height, width);
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