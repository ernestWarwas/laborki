#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct student_t
{
    char name[20];
    char surname[40];
    int index;
};
struct student_t* read(struct student_t* p)
{

    printf("Prosze podac imie: ");
    scanf("%s",  p->name );

    printf("Prosze podac nazwisko: ");
    scanf("%s",  p->surname);

    printf("Prosze podac nr indeksu: ");
    scanf("%d", &p->index);

    return p;
}
void show(const struct student_t* p)
{
    printf(" %s %s %d ", p ->name, p->surname, p->index);
}


int main()
{
    struct student_t stud;
    read(&stud);
    show(&stud);




    return 0;
}

