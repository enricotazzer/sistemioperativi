#include <stdio.h>

int main(){

    /*for(int c = getchar(); c != EOF; c = getchar()){
        putchar(c);
    }*/

    int c = getChar();
    while(c != EOF){
        putchar(c);
        c = getChar();
    }
    
    return 0;
}