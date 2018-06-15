#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct pacjent_t
{
    char imie[20];
    char nazwisko[40];
    int wiek;
    char plec[2];
    char adres[50];
    float pesel;
  	int nr_choroby;
};

struct pacjent_t* wprowadz_pacjenta(struct pacjent_t* p)
{

    printf("Prosze podac imie pacjenta: ");
    scanf("%s",  p->imie );

    printf("Prosze podac nazwisko pacjenta: ");
    scanf("%s",  p->nazwisko);

    printf("Prosze podac wiek pacjenta: ");
    scanf("%d", &p->wiek);

    printf("Prosze podac plec pacjenta (M/K): ");
    scanf("%s", p->plec);

    printf("Prosze podac adres pacjenta: ");
    scanf("%s", p->adres);

    printf("Prosze podac pesel pacjenta: ");
    scanf("%f", &p->pesel);
    
    printf("Prosze podac numer choroby pacjenta: ");
    scanf("%d", &p->nr_choroby);


    return p;
}
void zapisz_pacjenta(const struct pacjent_t* p)
{
	FILE* plik=NULL;
	plik=fopen("pacjenci.txt", "w");
    fprintf(plik," %s %s %d %s %s %.0f %d", p ->imie, p->nazwisko, p->wiek,
p->plec, p->adres, p->pesel, p->nr_choroby);
}

struct pacjent_t* set(struct pacjent_t* pacjent, const char * imie,
                      const char * nazwisko, int wiek,
                      const char * plec, const char * adres, int pesel,
                      int nr_choroby)
{
    strcpy(pacjent->imie, imie);
    strcpy(pacjent->nazwisko, nazwisko);
    pacjent->wiek = wiek;
    strcpy(pacjent->plec, plec);
    strcpy(pacjent->adres, adres);
    pacjent->pesel = pesel;
    pacjent->nr_choroby =nr_choroby;

    return pacjent;

}

struct pacjent_t* set_imie(struct pacjent_t* pacjent,
                           const char * imie)
{
    strcpy(pacjent->imie, imie);
    return pacjent;
}
struct pacjent_t* set_nazwisko(struct pacjent_t* pacjent,
                              const char * nazwisko)
{
    strcpy(pacjent->nazwisko, nazwisko);
    return pacjent;
}
struct pacjent_t* set_plec(struct pacjent_t* pacjent,
                            const char * plec)
{
    strcpy(pacjent->plec, plec);
    return pacjent;
}
struct pacjent_t* set_adres(struct pacjent_t* pacjent,
                              const char * adres)
{
    strcpy(pacjent->adres, adres);
    return pacjent;
}
struct pacjent_t* set_wiek(struct pacjent_t* pacjent,
                           int wiek)
{
    pacjent->wiek = wiek;
    return pacjent;

}
struct pacjent_t* set_nr_choroby(struct pacjent_t* pacjent,
                            int nr_choroby)
{
    pacjent->nr_choroby = nr_choroby;
    return pacjent;
}



int main()
{
    struct pacjent_t pac;
    wprowadz_pacjenta(&pac);
    zapisz_pacjenta(&pac);




    return 0;
}

