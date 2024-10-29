#include <stdio.h>

void foo()
{
    char str[] = "Welcome to lab 4!!!!!!! THIS is the location in memory to report";
    printf("Hello, %s!\n", "world");

    long num = 0x9cf8ae7927;
    num *= 0x16b28f9;
}

int main()
{
    foo();
}
