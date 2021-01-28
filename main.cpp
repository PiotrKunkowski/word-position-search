#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "wczytywanie.h"
#include "zapisywanie.h"
#include "wyszukiwanie.h"

using namespace std;

int main()
{
    vector<string> text;
    ifstream fileToRead("thehobbit.txt");
    ofstream fileToWrite("projektA.txt");


        if(fileToRead.is_open()){
            cout<<"mozna pracowac\n\n\n";
        }
        else {
            cout<<"plik nie istnieje lub nie jest dostepny\n";
            return -1;
        }

wczytywanie(fileToRead, text);

zapisywanie(fileToWrite, text);

znajdywanie (fileToWrite, text);

    fileToRead.close();
    fileToWrite.close();

    return 0;
}
