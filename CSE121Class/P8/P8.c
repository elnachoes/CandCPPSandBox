#include <stdio.h>

int main (void) 
{
    FILE *fp_out; //declare pointer to a file // Do not alter the literal stings below    
    
    char *str1 = "Four score and seven years ago our";    
    char *str2 = "fathers brought forth on this continent,";
    char *str3 = "a new nation, conceived in Liberty and dedicated";
    char *str4 = "to the proposition that all men are created equal.";
    
    fp_out = fopen("my_file", "w");  
    
    if( fp_out != NULL )
    {   // Insert your code here to write the 4 strings above
        // to the file my_file. The output should look like a
        // paragraph (not just one long line of text).

        fputs(str1,fp_out);
        fputc('\n',fp_out);
        fputs(str2,fp_out);
        fputc('\n',fp_out);
        fputs(str3,fp_out);
        fputc('\n',fp_out);
        fputs(str4,fp_out);
        fputc('\n',fp_out);

        fclose(fp_out);  
    }
    else
    {
       printf("I couldn't open the file \"my_file\".\n");
       return -1;
    }
    
    return 0; 
    }