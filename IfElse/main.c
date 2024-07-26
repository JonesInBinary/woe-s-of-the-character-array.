#include <stdio.h>
#include <string.h>


int main()
{

    char *ans2 [4];
    int ans = 0;


    printf("How many fingers does one hand have? ");

    scanf("%d %c", &ans, *ans2);


    if (ans == 5 || *ans2 == ('five'))

        printf("Correct!");



 else

        printf("Incorrect.");




return 0;
}


