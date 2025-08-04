#include <stdio.h>

/*
int main(){
    char x = getchar();
    char y = getchar();
    putchar(x);
    putchar(y);

    return 0;
}
*/

/* Copy input to output; 2nd version */
int main(){
    int c;

    printf("EOF: %d", EOF);

    while((c = getchar()) != EOF){
        putchar(c);
    }

    return 0;
}