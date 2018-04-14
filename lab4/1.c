#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

struct point_t {
    int x;
    int y;
};

struct point_t* read(struct point_t* p);

void show(const struct point_t* p);

struct point_t* set(struct point_t* p, int x, int y);

float distance(const struct point_t* p1,
           	const struct point_t* p2);

int main()
{
    struct point_t a, b;
    struct point_t *ptr1 = &a, *ptr2 = &b;
    read(ptr1);
    read(ptr2);
    show(ptr1);
    show(ptr2);
    printf("%f", distance(ptr1, ptr2));
    return 0;
}

struct point_t* read(struct point_t* p){
    int x=0, y=0;
    printf("Podaj x: ");
    scanf("%d", &x);
    printf("Podaj y: ");
    scanf("%d", &y);
    p->x = x;
    p->y = y;
}

void show(const struct point_t* p){
    printf("%d \t %d\n", p->x, p->y);
}

struct point_t* set(struct point_t* p, int x, int y){
    p->x = x;
    p->y = y;
}

float distance(const struct point_t* p1,
           	const struct point_t* p2){
                float res = 0;
                res = sqrt(pow((p1->x - p2->x), 2) + pow((p1->y - p2->y), 2));
                return res;
           	}
