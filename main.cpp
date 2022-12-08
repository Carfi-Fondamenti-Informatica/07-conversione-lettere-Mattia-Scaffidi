#include <iostream>
#include "lib.h"
using namespace std;

int main (){
    bool f;
char lettera;
cin>>lettera;
f = convertitore(lettera);
    if (f == true){
        cout<< lettera<<endl;
    }
    else
        cout<<"errore"<<endl;


    return 0;
}
