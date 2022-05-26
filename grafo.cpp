#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

int main () {
    string line;
    int linha;

    ifstream myfile ("Grafo.txt");

    if (myfile.is_open()){

        linha = 1;
        while (!myfile.eof()) {
            myfile >> line;
            myfile >> line;
            myfile >> line;
            linha++;
        }

    myfile.close();

    }

    cout << linha << endl;

    return 0;
}