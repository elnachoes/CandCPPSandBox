#include "prog9.h"

void print_list(PERSON *person_ptr)
{
    while(person_ptr != NULL)
    {
        printf("%s\n",person_ptr->name);
        printf("%i\n",person_ptr->age);
        person_ptr = person_ptr->next_ptr;
    }
}
