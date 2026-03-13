#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    if ( x > 1 ) {
        for ( int i=2; i < x; i++ ) {
            if ( x % i == 0 ) {
                printf("%s\n", "false");
                break;
            }
            else { 
                 printf("%s\n", "true");
                break;
            }
        
        }
    }
    return 0;
}

