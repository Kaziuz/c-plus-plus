// pasar una palabra a minuscula - funcion strLwr()

#include <iostream>
#include <string.h>
#include <algorithm>
#include <cctype>

using namespace std;

// & es una referencia, es una referencia en memeoria a esa variable.

void to_lowercase(char& c) {
    c = tolower(static_cast<unsigned char>(c));   
}

int main(){
    string palabra = "AMOPROGRAMACION";

    for_each(palabra.begin(), palabra.end(), to_lowercase);

    cout<<palabra<<endl;
}