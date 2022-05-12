//
// Created by SuperNu1L on 2022/5/10.
//

//#include "1.h"
#include "stdio.h"
//
//int main(int argc, char const *argv[]) {
//    int number;
//    scanf("%d", &number);
//    unsigned mask = 1u << 31;
//    for (; mask; mask >>= 1) {
//        printf("%d", number & mask ? 1 : 0);
//    }
//    printf("\n");
//
//    return 0;
//}

struct U0 {
    unsigned int leading: 3;
    unsigned int FLAG1: 1;
    unsigned int FLAG2: 1;
    int trailing: 32;
};

void printBin(unsigned int number);

int main(int argc, char *argv[]) {
    struct U0 uu;
    uu.leading = 2;
    uu.FLAG1 = 0;
    uu.FLAG2 = 1;
    uu.trailing = 0;
    printf("sizeof uu = %d\n", sizeof uu);
    printBin(*(int *) &uu);
    return 0;
}

void printBin(unsigned int number) {
    unsigned mask = 1u << 31;
    for (; mask; mask >>= 1) {
        printf("%d", number & mask ? 1 : 0);
    }
    printf("\n");
}
