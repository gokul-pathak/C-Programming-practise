//passing structure pointer to a function

#include <stdio.h>
#include <conio.h>
#include <string.h>

struct employee
{
    int id;
    char name[30];
};

void display(struct employee); //passing structure to function
void displaysp(struct employee*); //passing structure pointer to function

int getagephonename(char *, char* ); //getting more than 1 values as result through use of pointer


void main()
{
    char name[20], phone[20];
    struct employee e = {100, "ram"};
    struct employee *pe = &e;
    int age;
    display(e);
    displaysp(pe);
    age = getagephonename(name, phone); //getting more than 1 values as result through use of pointer
    printf("\nage: %d\tname: %s\tphone:%s", age, name, phone); //getting more than 1 values as result through use of pointer
    getch();
}

void display(struct employee e)
{
    printf("\nID: %d\t\tname: %s", e.id, e.name); //accessing data members of a structure through structure variable
    //using DOT operator
}

void displaysp(struct employee *p) //passing structure pointer to function
{
    printf("\nID: %d\t\tname: %s", p->id, p->name); //accessing data members of a structure through pointer to structure
    //using arrow operator
}

//getting more than 1 values as result through use of pointer

int getagephonename(char nam[], char phon[])
{
    strcpy(nam, "raju"); strcpy(phon, "9856033333");
    return 19;
}
