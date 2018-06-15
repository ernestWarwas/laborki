#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct point_t* read(struct point_t* p);
void show(const struct point_t* p);
struct point_t* set(struct point_t* p, int d, int s);
float distance(const struct point_t* p1, const struct point_t* p2);

struct point_t
{
        int x;
        int y;
};

struct point_t* read(struct point_t* p)
{
    int x = 0, y = 0;
    printf("prosze podac x: ");
    scanf("%d", &x);
    p->x = x;
    printf("prosze podac y: ");
    scanf("%d", &y);
    p->y = y;

    return p;

}

void show(const struct point_t* p)
{
    printf("%d %d\n", p->x, p->y);
}

struct point_t* set(struct point_t* p, int d, int s)
{
    p->x = d;
    p->y = s;

    return p;
}

float distance(const struct point_t* p1, const struct point_t* p2)
{
    float result = 0;

    result = sqrt(pow((p1->x - p2->x), 2) + pow((p1->y - p2->y), 2));

    return result;
}
int main()
{
    struct point_t pkt1, pkt2;
    struct point_t *wsk_pkt1, *wsk_pkt2;

    wsk_pkt2 = &pkt2;

    read(&pkt1);
    read(wsk_pkt2);

    show(&pkt1);
    show(wsk_pkt2);

    printf("Dystans miedzy tymi punktami wynosi: %.2f",distance(&pkt1,
wsk_pkt2));



    return 0;
}

