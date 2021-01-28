#include "wyszukiwanie.h"

void znajdywanie(ofstream & fileToWrite, vector<string> & text){

    string word;
    cout << "\n\nwpisz slowo, ktore chcesz wyszukac: " << endl;
    cin >> word;
    fileToWrite << "\n\npodane slowo jest na pozycjach numer: " << endl;

    bool f = false;

    for (int a=0; a<text.size(); a++){
        if (text[a]==word)
        {
                  fileToWrite << a << ", ";
                  f =true;
        }
    }

    if(!f){
    fileToWrite << "podanego slowa nie ma w pliku" << endl;
    }

}
