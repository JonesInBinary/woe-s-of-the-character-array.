#include <stdio.h>
#include <string.h>

int main() {
    
    int ok = -1;

    while (ok == -1) {
        ok = getNumberOfFingersOnOneHand();
        printf("ret = %d\n", ok);
    };

    return 0;
}

int getNumberOfFingersOnOneHand() {
    char resp [4];
    int ret = -1;
    int check;

    printf("How many fingers does one hand have? ");

    check = scanf("%s", resp);

    printf("resp = %s\n", resp);
    printf("check = %d\n", check);

    if (check == 1) {
        if ((strcmp(resp, "5") == 0) || (strcmp(resp, "five") == 0)) {
            printf("Correct!\n");
            ret = 1;
        }
        else {
            printf("Incorrect!\n");
        }
    }
    else {
        printf("Incorrect data type entered!");
    }

    return ret;
}