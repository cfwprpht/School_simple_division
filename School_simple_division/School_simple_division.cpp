//
// This Code belongs to Harald Swoboda a Student of HTL WienWest Class 1BBIF
// This work was done for AINF Prof Jaich.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    float zaehler, nenner, resultat;
    zaehler = nenner = resultat = 0;
    string empty = "";

    cout << "\n\n Bitte geben Sie einen Zaehler ein:\n ";
    cin >> zaehler;
    system("cls");
    
    while (1) {
        cout << "\n\n Bitte geben Sie einen Nenner ein:\n ";
        cin >> nenner;
        system("cls");

        if (nenner != 0) break;
        else {
            cout << "\n\n !! Der Nenner darf nicht 0 sein !!\n\n Buchstaben oder Zahl tippen, dan enter...\n ";
            cin >> empty;
            system("cls");
        }
    }

    resultat = zaehler / nenner;

    string formated_result = to_string(resultat);
    formated_result.erase(formated_result.find_last_not_of('0') + 1, string::npos);
    formated_result.erase(formated_result.find_last_not_of('.') + 1, string::npos);

    cout << "\n\n Das Resultat betraegt: " << formated_result << "\n\n Buchstaben oder Zahl tippen, dan enter...\n ";
    cin >> empty;
    return 0;
}
