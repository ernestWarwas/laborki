#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

struct student_t
{
    char name[20];
    char surname[40];
    int index;
};

struct student_t* read(struct student_t* p);

void show(const struct student_t* p);

int main(){
    struct student_t student;

    read(&student);
    show(&student);
    return 0;
}

struct student_t* read(struct student_t* p){
    char name[20];
    char surname[40];
    int index;
    printf("Podaj imie: ");
    scanf("%s", p->name);
    printf("Podaj nazwisko: ");
    scanf("%s", p->surname);
    printf("Podaj nr indexu: ");
    scanf("%d", &p->index);
    return p;
}

void show(const struct student_t* p){
    printf("%s %s %d", p->name, p->surname, p->index);
}
