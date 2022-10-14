#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    //inicjacja tablicy
    int rozmx = 20;
    int rozmy = 20;
    string fname="grid.txt";
    double **G;
    G = new double*[rozmx];
    for(int i=0; i<rozmx; i++) G[i] = new double[rozmy];
    //wczytanie mapy
    ifstream grid(fname.c_str());
    for(int i=0; i<rozmx; i++)
            for( int j=0; j<rozmy; j++)
                 grid >> G[i][j];
    grid.close();
    //wypisanie
/*    for(int i=0; i<rozmx; i++) {
            for(int j=0; j<rozmy; j++)
                    cout<<G[i][j];
            cout<<"\n";        
    }
    */
    
    //A*
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
