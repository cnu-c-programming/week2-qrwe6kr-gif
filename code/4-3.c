#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    if ( x > 1 ) {
        for ( int i=1; i < x; i++ ) {
            if ( x % i == 0 ) {
                printf("%s", "false");
            }
            else {
                printf("%s", "true"); 
            }
        }
    }
    return 0;
}

