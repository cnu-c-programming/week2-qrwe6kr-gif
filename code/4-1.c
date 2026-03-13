int main()
{
    int a;
    int b;
    char c; 

   scanf("%d %d %c", &a, &b, &c);

    switch ( c ) {
        case '+': printf("%d\n", a+b); break;
        case '-': printf("%d\n", a-b); break;
        case '*': printf("%d\n", a*b); break;
        case '/': printf("%d\n", a/b); break;
    }
    return 0;
}
