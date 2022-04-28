//
// Created by SuperNu1L on 2022/4/28.
//

#ifndef C_LANGUAGE_FUNCTION_H
#define C_LANGUAGE_FUNCTION_H

#endif //C_LANGUAGE_FUNCTION_H

//求素数
int isPrime(int i) {
    int ret = 1;
    int k;
    for (k = 2; k < i - 1; k++) {
        if (i % k == 0) {
            ret = 0;
            break;
        }
    }
}