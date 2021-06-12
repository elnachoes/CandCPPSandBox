#include <stdio.h>

#define false 0
#define true 1

#define nameBufferSize 40

#define studentClassBufferSize 5

struct person
{
    char firstName[nameBufferSize];
    char lastName[nameBufferSize];
    int age;
};

void printPersonInfo(struct person individual);
void sortByAge(int n, struct person studentClass[]);

int main(void)
{
    struct person studentClass[studentClassBufferSize] = 
    {
        {"Bob","Smith",21},
        {"Jimmy","John",18},
        {"Amy","Goldberg",20},
        {"Dan","Marlo",17},
        {"Sally","Sorrow",16},
    };

    for(int i = 0; i < studentClassBufferSize; i++)
    {
        printPersonInfo(studentClass[i]);
    }

    sortByAge(studentClassBufferSize, studentClass);
    printf("---- POST SORT ----\n");

    for(int i = 0; i < studentClassBufferSize; i++)
    {
        printPersonInfo(studentClass[i]);
    }

    return 0;
}

void printPersonInfo(struct person individual)
{
    printf("\nname =\t%s %s\n",individual.firstName,individual.lastName);
    printf("age =\t%i\n\n",individual.age);
}

void sortByAge(int n, struct person studentClass[])
{
    int i, j;
    struct person temp[studentClassBufferSize];
    for (i = 0; i < n-1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if(studentClass[i].age > studentClass[j].age)
            {
                temp[j] = studentClass[i];
                studentClass[i] = studentClass[j];
                studentClass[j] = temp[j];
            }
        }
    }
}

