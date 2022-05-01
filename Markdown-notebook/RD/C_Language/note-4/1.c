//
// Created by SuperNu1L on 2022/5/1.
//

#include <stdbool.h>
#include "1.h"
#include "stdio.h"


bool divide(int a, int b, int *ret);

//swap
void swap(int *pInt, int *pInt1) {
    int t = *pInt;
    *pInt = *pInt1;
    *pInt1 = t;
}

//min max
void minmax(int a[], int length, int *min, int *max) {
    int i;
    *max = *min = a[0];
    for (int i = 0; i < length; ++i) {
        if (a[i] < *min) {
            *min = a[i];
        }
        if (a[i] > *max) {
            *max = a[i];
        }
    }
}

//指针应用2，函数返回运行状态，指针返回结果


int main(void) {


//    int a = 5;
//    int b = 6;
//    swap(&a, &b);
//    printf("%d\n%d", a, b);



//    int a[] = {23523, 5, 43, 5, 43, 325, 2, 42, 243, 45, 2, 5, 4, 5, 4, 6, 5, 67, 3456, 2, 61, 643, 134,};
//    int min, max;
//    minmax(a, sizeof(a) / sizeof(a[0]), &min, &max);
//    printf("%d\n%d", min, max);
    int a = 5;
    int b = 2;
    int c;
    if (divide(a, b, &c)) {
        printf("%d/%d=%d", a, b, c);
    }
    return 0;
}

bool divide(int a, int b, int *result) {
    bool ret = 1;
    if (b == 0) ret = 0;
    else {
        *result = a / b;
    }
    return ret;
}



