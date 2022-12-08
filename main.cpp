#include <iostream>
using namespace std;
#include "lib.h"


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
