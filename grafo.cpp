#include <iostream>
#include <fstream>

using namespace std;
int linha = 0;
int i;

int main () {
    string line;

    ifstream myfile ("Grafo.txt");

    if (myfile.is_open()){

        while (!myfile.eof()) {
            myfile >> line;
            myfile >> line;
            myfile >> line;
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
        i++;
    }

    myfile.close();

    for(i=0; i<linha; i++) {
        cout << x[i] << "  " << y[i] << endl;
    }
    
    return 0;
}
