#include "zapisywanie.h"

void zapisywanie (ofstream & fileToWrite, vector<string> & text){
    for (int i = 0; i < text.size(); i++){
        if(i%10 == 0){
        fileToWrite << endl << i << ": " << text[i] ;
        }
    }
        cout << "zapis do pliku zostal dokonany\n";
}

