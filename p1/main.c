#include <stdio.h>
#include <stdlib.h>

/* computes sum(1,n) using Gauss method */
static int gauss(int n) {
    return n*(n+1)/2;
}

int main(int argc, char* argv[]) {
    printf("Project Euler Problem 1\nAuthor: Chris Kolimago\n\n");

    if (argc < 2) {
        printf("Usage: main n\n");
        return -1;
    }

    int n = atoi(argv[1]);

    // printf("n = %d\n", n);

    int s = n;

    if (n % 5 == 0 || n % 3 == 0) {
        n--;
    }

    //printf("n = %d\n", n);

    int sum_x = gauss(n/3)*3;
    //printf("n/3=%d\n", n/3);
    // printf("gauss(%d)=%d\n", n/3, gauss(n/3));
    // printf("gauss(%d)*3=%d\n\n", gauss(n/3), sum_x);

    int sum_y = gauss(n/5)*5;
    /* printf("n/5=%d\n", n/5);
    printf("gauss(%d)=%d\n", n/5, gauss(n/5));
    printf("gauss(%d)*5=%d\n\n", gauss(n/5), sum_y); */

    int sum_xy = gauss(n/15)*15;
    /* printf("n/15=%d\n", n/15);
    printf("gauss(%d)=%d\n", n/15, gauss(n/15));
    printf("gauss(%d)*15=%d\n\n", gauss(n/15), sum_xy); */

    int sum = sum_x+sum_y-sum_xy;
    // printf("sum_x+sum_y-sum_xy=%d\n", sum);

    printf("Sum of all numbers from 1 to %d, divisible by 3 and 5 is: %d\n",s,sum);
    return 0;
}