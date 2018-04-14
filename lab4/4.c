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
    	char field[50];
    	char faculty[80];
    	int year;
};


struct student_t* read(struct student_t* p);

void show(const struct student_t* p);

struct student_t* set(struct student_t* student, const char * name,
                  	const char * surname, int index,
   				   const char * field, const char * faculty,
   				   int year);

struct student_t* set_name(struct student_t* student,
                            const char * name);

struct student_t* set_surname(struct student_t* student,
                          	const char * surname);

struct student_t* set_field(struct student_t* student,
                        	const char * field);

struct student_t* set_faculty(struct student_t* student,
                          	const char * faculty);

struct student_t* set_year(struct student_t* student,
                            int year);

struct student_t* set_index(struct student_t* student,
                        	int index);

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
    printf("Podaj wydzial: ");
    scanf("%s", p->field);
    printf("Podaj kierunek: ");
    scanf("%s", p->faculty);
    printf("Podaj rok: ");
    scanf("%s", &p->year);
    return p;
}

void show(const struct student_t* p){
    printf("%s %s %d", p->name, p->surname, p->index);
}

struct student_t* set(struct student_t* student, const char * name,
                  	const char * surname, int index,
   				   const char * field, const char * faculty,
   				   int year){
                        student->name = name;
                        student->surname = surname;
                        student->index = index;
                        student->field = field;
                        student->faculty = faculty;
                        student->year = year;
   				   }

struct student_t* set_name(struct student_t* student,
                            const char * name){
                                student->name = name;
                            }

struct student_t* set_surname(struct student_t* student,
                          	const char * surname){

                          	}

struct student_t* set_field(struct student_t* student,
                        	const char * field){

                        	}

struct student_t* set_faculty(struct student_t* student,
                          	const char * faculty){

                          	}

struct student_t* set_year(struct student_t* student,
                            int year){

                            }

struct student_t* set_index(struct student_t* student,
                        	int index){

                        	}
