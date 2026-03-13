#include <stdio.h>
int main()
{
    printf("% 4s", "name");
    printf("% 11s", "id");
    printf("% 11s\n", "value");

    printf("% 4s", "kim");
    printf("% 11d", 12);
    printf("% 11f\n", 4.120000);

    printf("% 4s", "lee");
    printf("% 11d", 1922);
    printf("% 11f\n", 1.000000);

    printf("% 4s", "park");
    printf("% 11d", 432);
    printf("% 11f\n", 1.000000);
    
    return 0;
}
