// pasar una palabra a MAYUSCULAS - funcion strupr()

#include <iostream>
#include <string.h>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    string palabra = "alejandro";

    transform(palabra.begin(), palabra.end(), palabra.begin(), ::toupper);

    cout<<palabra<<endl;

    return 0;
}