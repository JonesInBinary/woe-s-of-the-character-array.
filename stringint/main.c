#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    int i;

    printf("Enter name then age: \n");

    scanf("%s %d", str ,&i);

    printf("\nYour name is: %s, You are %d years old.\n", str, i);

    return 0;
}
