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
    printf("Wow. %d is quite something\n", age); // lol
    /*gets(userInput); // used for reading the current '\n' on this line to be able to move
    //remark: *** the gets() function reads only the current line ***
    gets(userInput); // to the next line where gets function can work properly
     */
    printf("Sooo what's your height?\n");
    float h;
    scanf("%f", &h);
    printf("Wow %.2f ! You're kinda tall!\nDo you have any siblings?\n", h);
    int sbl;
    scanf("%d", &sbl);
    if (sbl == 0)
        printf("Oh, you're the special one!\n");
    else
        printf("Nice!\n");
    printf("How many fingers do you have on the left hand?\n ");
    int fing;
    scanf("%d", &fing);
    if(fing < 5)
        printf(":( Sorry about that...\n");
    else
        printf("Congrats! You have %d fingers on the left hand!\n", fing);
    printf("I've got to go. Nice to meet you! ^_^ Byeeee!\n");
    gets(userInput);
    gets(userInput);







    return 0;
}