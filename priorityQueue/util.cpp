#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "util.h"

using namespace std;

int main()
{
    // varialbles for the fparser...
    char c;
    int i, v;
    while(1){
        c = nextcommand(&i, &v);
        switch(c){
            case 's':
            case 'S': printf("COMMAND: %c.\n", c); exit(0);

            case 'k':
            case 'K': printf("COMMAND: %c %d %d.\n", c, i, v); break;

            default: break;
        }
    }
    exit(0);
}
