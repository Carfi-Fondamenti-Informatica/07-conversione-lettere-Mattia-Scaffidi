#include "lib.h"
bool convertitore(char &l){

        if (l >= 'A' && l <= 'Z') {
            l = l + 32;
            return true;
        }
        else if (l >= 'a' && l <= 'z') {
            l = l - 32;
            return true;
        }

    else if (l == '\0')

    return false;
}
