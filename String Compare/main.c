#include <stdio.h>
#include <string.h>

int main()
{


    char five [10];


    printf("How many fingers does one hand have? ");
    scanf ("%s", five);

    if ((strcmp(five, "5") == 0) || (strcmp(five, "five") == 0))
        {
        printf("Correct!");
        }
    else
        {
        printf("Incorrect.");
        }

    return 0;
}
