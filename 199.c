#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int x;
} Inteiros;

typedef struct {
    Inteiros i;
    double y;
} Reais;

int main() {

    Reais w,z;
    w.i.x= 1;
    w.y= 1.1;
    z.i.x = 2;
    z.y = 2.2;

    Reais *rw,*rz;

    rw = &w;
    rz = &z;

    Inteiros *a[2];
    a[0] = rw;
    a[1] = rz;

    printf("%d\n",a[0]->x);
    //printf("%f\n",a[0]->y);
    printf("%d\n",a[1]->x);
    //printf("%f\n",a[1]->y);

    Reais *b[2];
    b[0] = rw;
    b[1] = rz;
    printf("%i\n",b[0]->i.x);
    printf("%f\n",b[0]->y);
    printf("%i\n",b[1]->i.x);
    printf("%f\n",b[1]->y);


    /* Don`t in basic structures */
    double *d[2];
    d[0] = rw;
    d[1] = rz;

    printf("%f\n",d[0]);
    printf("%f\n",d[1]);

    printf("%f\n",*d[0]);
    printf("%f\n",*d[1]);


    return EXIT_SUCCESS;
}
