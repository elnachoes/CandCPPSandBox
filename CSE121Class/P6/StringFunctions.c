#include "P6Header.h"

//func that makes a copy of a string
void makeCopyString(char* str, char* strCopy)
{
    //declaring pointers to the first elements in the 2 arrays
    char* strChar = str;
    char* copyStrChar = strCopy;

    //copying the contents of the array over to the copy with pointers`
    while (*strChar != '\n' && *strChar != '\0')
    {
        *copyStrChar = *strChar;
        strChar++;
        copyStrChar++;
    }

    //assigning the null terminator after the array has been copied over to the last spot in the array
    strChar = '\0';
    copyStrChar = '\0';
}

//func that gets rid of special characters and spaces
void keepChars(char* str)
{
    //declaring pointers to the first elements in the 2 arrays
    char* checkChar = str;
    char* charSpace = str;

    //filtering out the special characters and spaces
    while (*checkChar != '\0')
    {
        //if the current element in check char is a letter then it will assign that char to that space
        if ('a' <= *checkChar && *checkChar <= 'z')
        {
            *charSpace = *checkChar;
            checkChar++;
            charSpace++;
        }
        //its only going to increment check char if there isnt a letter char there
        else
        {
            checkChar++;
        }
    }
    //assigning the null terminator at the end of the array
    *charSpace = '\0';
};

//func that converts all the characters in an array to lowercase
void convertUpperToLower(char* str)
{
    //declaring pointer to the first element in the array
    char* checkChar = str;

    //filtering out capital letter chars
    while (*checkChar != '\n' && *checkChar != '\0')
    {
        if (*checkChar >= 'A' && *checkChar <= 'Z')
        {
            //adds 32 to the char to convert a capital letter to a lowercass
            // !---- check ascii table ----!
            *checkChar += 32;
        }
        checkChar++;
    }
}

//func that checks if a string is a palindrome
_Bool isPalindrome(char* str)
{
    //declaring pointers for the left side of the stinr and for the right side of the string
    //also declaring a pointer spot for the end of the string
    char* checkLeftChar = str;
    char* checkRightChar = str;
    char* endOfString;

    //setting the checkRightPointer at the end of the string array
    while (*checkRightChar != '\n' && *checkRightChar != '\0')
    {
        checkRightChar++;
    }

    //subbtracting one from checkRightChar to move it off of the null terminator
    //assigning the endOfString to the checkRightChar
    checkRightChar--;
    endOfString = checkRightChar;

    //checking each character to see if they are the same
    while (checkLeftChar <= endOfString)
    {
        if (*checkLeftChar != *checkRightChar)
        {
            return false;
        }
        //checkleft has to move to the right and checkRight has to move to the left
        checkLeftChar++;
        checkRightChar--;
    }
    return true;
}