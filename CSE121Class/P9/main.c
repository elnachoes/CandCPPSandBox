#include "prog9.h"


int main (void)
{
    PERSON *head = NULL;
 
    
    head = createList();
    print_list(head);
    
    release_memory(head);

    printf("debug");

    head = NULL;

    printf("debug");
    printf("Done\n");
    return 0;
}
