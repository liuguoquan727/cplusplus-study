//
// Descriptions: 流程控制
//
// Created by liuguoquan on 2018/5/18.
//

#include <stdio.h>

#define EPSINON 0.00000001

void compare_float() {

    float f = 0.0f;

    if (-EPSINON <= f && f <= EPSINON) {

        printf("f == 0\n");

    } else {

        printf("f != 0\n");

    }
}

void do_for() {
    int i;
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", i);
    }
}

void do_while() {

    int x = 5;

    while (x) {
        x--;
    }
    printf("end \n");
}

void do_switch() {

    int x;

    switch (x) {
        case 1:
            printf("x == 1");
            break;
        case 2:
            printf("x == 2");
            break;
        case 3:
            printf("x == 3");
            break;
        case 4:
        case 5:
        case 6:
            printf("x >= 4 && x <= 6");
            break;
        default:
            printf("default\n");
            break;
    }
}

void do_if_else() {

    int x = 5;

    if (x > 5) {

        printf("x > 5\n");

    } else if (x == 5) {

        printf("x == 5\n");

    } else {

        printf("x <= 5\n");

    }
}

int main() {
    do_if_else();
    do_switch();
    do_while();
    compare_float();
    return 0;
}
