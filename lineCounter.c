#include <stdio.h>

int main(){
    int lc = 0;
    int c;

    while((c = getchar()) != EOF){
        if (c == '\n')
            ++lc;
    }

    printf("Line Count %d", lc);

    return 0;
}