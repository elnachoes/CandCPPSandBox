#include "P6Header.h"


//main function
int main (void)
{
    //declaring the copy
    char phrase[BufferSize];
    char copyPhrase [BufferSize];
    _Bool palindrome;

    //gets user input string
    //NOTE: the max is buffersize minus 1 to include the null terminator character
    printf("\nenter a phrase (%d characters max): ", (BufferSize - 1));
    fgets(phrase,BufferSize,stdin);

    //coppies user input string
    //converts all characters to lower case, removes unwanted characters, and checks if its a palindrome
    makeCopyString(phrase,copyPhrase);
    convertUpperToLower(copyPhrase);
    keepChars(copyPhrase);
    palindrome = isPalindrome(copyPhrase);

    //reports back if the user input is a palindrome or not
    if (palindrome)
    {
        printf("\n%sis a palindrome\n", phrase);
    }
    else
    {
        printf("\n%sis not a palindrome\n", phrase);
    }

    printf("press enter to close");
    getchar();

    return 0;
}
