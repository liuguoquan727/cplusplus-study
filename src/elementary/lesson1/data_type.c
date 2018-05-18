//
// Descriptions: 基本数据类型
//
// Created by liuguoquan on 2018/5/17.
//

#include <stdio.h>
#include <limits.h>

/**
 * 打印基本数据类型占用的空间
 */
void printSize() {

    char c;
    int x;
    short s;
    float y;
    double z;
    long int l = 100l;
    printf("打印基本数据类型占用的空间:\n");
    printf("size of char: %lu\n", sizeof(c));
    printf("size of int: %lu\n", sizeof(x));
    printf("size of short: %lu\n", sizeof(s));
    printf("size of float: %lu\n", sizeof(y));
    printf("size of double: %lu\n", sizeof(z));
    printf("size of long: %lu\n", sizeof(long));
}

/**
 * 打印取值范围
 */
void printRangeOfType() {
    printf("打印取值范围:\n");
    printf("signed char min = %d, max = %d\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned char min = %u, max = %d\n", 0, UCHAR_MAX);
    printf("signed int min = %d, max = %d\n", INT_MIN, INT_MAX);
    printf("unsigned int min = %d, max = %u\n", 0, UINT_MAX);
    printf("signed short min = %d, max = %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short min = %d, max = %u\n", 0, USHRT_MAX);
}

int main() {
    printSize();
    printf("*************************\n");
    printRangeOfType();

    return 0;
}
