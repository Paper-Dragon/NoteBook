//
// Created by SuperNu1L on 2022/4/30.
//
#include "stdio.h"

// 数字计数器
int main(void) {
    const int number = 10;
    int x, i;
    int count[number];
    scanf("%d", &x);
    while (x != -1) {
        if (x >= 0 && x <= number - 1) {
            count[x]++;
        }
        scanf("%d", &x);
    }
    for (i = 0; i <= number; i++) {
        printf("%d:%d\n", i, count[i]);
    }
    return 0;
}