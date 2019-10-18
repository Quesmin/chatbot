#include <stdio.h>

int main() {
    printf("Let's chat\n");
    char userInput[100];
    gets(userInput);
    printf("%s there to you too! I am HAL, what is your first name? (one word, please)\n", userInput);
    char name[20];
    scanf("%s", name);
    printf("Oh hi, %s.\nHow old are you?\n", name);
    int age;
    scanf("%d", &age);
    printf("Wow. %d is quite something\n",age);
    gets(userInput); // used for reading the current '\n' on this line to be able to move
    //remark: *** the gets() function reads only the current line ***
    gets(userInput); // to the next line where gets function can work properly
    printf("I'm sorry, not sure what this \"%s\" means. Gotta go. Bby",userInput);

    return 0;
}