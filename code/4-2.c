#include <stdio.h>

int main()
{
int i = 1;
int j = 1;
for (int i=1; i<=0; i++) {
     for (int j=1; j<=9; j++) {
        printf("%d * %d\n = %d", i*j);
     }
}

    return 0;
}

