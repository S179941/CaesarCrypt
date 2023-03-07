#include <iostream>

using namespace std;

int main()
{
    int code = 1;
    int offset = 0;

    string input;

    while(true){
        cout << "Podaj przesuniecie:";
        cin >> offset;

        cout << "Wybierz funkcje: 0 - dekodowanie, 1 - kodowanie:";
        cin >> code;

        cout << "Wpisz tekst:";
        cin >> input;

        if(code){
            for(unsigned int i=0; i<input.length(); i++){
                cout << (char)(97 + ((input[i] - 97) + offset)%26);
            }
            cout << endl;
        }
        else{
            for(unsigned int i=0; i<input.length(); i++){
                cout << (char)(97 + ((input[i] - 97) - offset + 26)%26);
            }
            cout << endl;
        }
    }

}
