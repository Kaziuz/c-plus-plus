// invertir una cadena - funcion strrev()

#include <iostream>
#include <string.h>
#include <algorithm> // reverse()

using namespace std;

int main() {
    string cad = "Johnny";

    reverse(cad.begin(), cad.end());
    cout<<cad<<endl;
    return 0;
}