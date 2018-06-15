#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct student_t
{
    char name[20];
    char surname[40];
    int index;
    char field[50];
    char faculty[80];
    int year;
};

struct student_t* read(struct student_t* p)
{

    printf("Prosze podac imie: ");
    scanf("%s",  p->name );

    printf("Prosze podac nazwisko: ");
    scanf("%s",  p->surname);

    printf("Prosze podac nr indeksu: ");
    scanf("%d", &p->index);

    printf("Prosze podac rok: ");
    scanf("%d", &p->year);

    printf("Prosze podac kierunek studiow: ");
    scanf("%s", p->field);

    printf("Prosze podac wydzial: ");
    scanf("%s", p->faculty);


    return p;
}
void show(const struct student_t* p)
{
    printf(" %s %s %d %s %s %d", p ->name, p->surname, p->index,
p->faculty, p->field, p->year);
}

struct student_t* set(struct student_t* student, const char * name,
                      const char * surname, int index,
                      const char * field, const char * faculty,
                      int year)
{
    strcpy(student->name, name);
    strcpy(student->surname, surname);
    student->index = index;
    strcpy(student->field, field);
    strcpy(student->faculty, faculty);
    student->year = year;

    return student;

}

struct student_t* set_name(struct student_t* student,
                           const char * name)
{
    strcpy(student->name, name);
    return student;
}
struct student_t* set_surname(struct student_t* student,
                              const char * surname)
{
    strcpy(student->surname, surname);
    return student;
}
struct student_t* set_field(struct student_t* student,
                            const char * field)
{
    strcpy(student->field, field);
    return student;
}
struct student_t* set_faculty(struct student_t* student,
                              const char * faculty)
{
    strcpy(student->faculty, faculty);
    return student;
}
struct student_t* set_year(struct student_t* student,
                           int year)
{
    student->year = year;
    return student;

}
struct student_t* set_index(struct student_t* student,
                            int index)
{
    student->index = index;
    return student;
}



int main()
{
    struct student_t stud;
    read(&stud);
    show(&stud);




    return 0;
}

