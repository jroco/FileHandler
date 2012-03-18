/* 
 * File:   main.cpp
 * Author: Administrador
 *
 * Created on 17 de marzo de 2012, 16:06
 */

#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cout << "Program Begin" << endl;
    cout << "Try to create an input and an output file." << endl;
    
    ifstream file1in;
    ofstream file1out;
    file1in.open("file1in.txt");
    file1out.open("file1out.txt");
    
    int primero = 1, segundo = 2, tercero = 3;
    file1in >> primero >> segundo >> tercero;
    file1out << "La suma de los 3 primeros\n"
                << "numeros de file1in.txt es: " << (primero + segundo + tercero) << "\n" << endl;
    
    file1in.close();
    file1out.close();
    
    cout << "End of program." << endl;
    
    return 0;
}

