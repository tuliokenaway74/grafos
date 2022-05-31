#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

int main () {
    string line;
    int linha;
    int i;

    ifstream myfile ("Grafo.txt");

    if (myfile.is_open()){

        linha = 0;
        while (!myfile.eof()) {
            myfile >> line;
            myfile >> line; //
            myfile >> line; //
            linha++;
        }

    myfile.close();
    myfile.clear();

    }

    int x[linha];
    int y[linha];


myfile.open("Grafo.txt");

while (!myfile.eof()) {
            myfile >> line;

            myfile >> line;
            x[i] = stoi(line); 
            
            myfile >> line;
            y[i] = stoi(line); 
            linha++;
            i++;
        }

    myfile.close();

    for(i=0; i < linha; i++) {
        cout << x[i] << "  " << y[i] << endl;
    }

    return 0;
}
