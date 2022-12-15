#include <stdio.h>
 
void prn(unsigned n) {
    if ( n ) {
        prn(n / 10);
        printf("%c", n % 10 + '0');
    }
}
 
int main(void) {
    unsigned n;
    
    while ( printf("\nNumber: ") && scanf("%u", &n) == 1 && n && printf("By digits: ") )
        prn(n);
    
    return 0;
}

