#include <stdio.h>

void f( char c, int times ) {
    while(
        times-- 
            &&
        printf("%c", c)        
    ){}
}

void function1(char c, int times ) {
    while(
        times-- 
            &&
        (
            f(c, 25-times),
            printf("\n"),
            1
        )
    ){}
}

void function2(char c, int times ) {
    while(
        times--
            &&
        (
            f(c, times),
            printf("\n"),
            1
        )
    ){}
}

int main() {
    while( function1('*', 25), 0 ){}
    while( function2('*', 25), 0 ){}
}
