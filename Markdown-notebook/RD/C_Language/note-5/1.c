//
// Created by SuperNu1L on 2022/5/3.
//

#include "1.h"
#include "stdio.h"

//// 英寸转换
//int main(void ){
//    double foot;
//    double inch;
//
//    scanf("%lf %lf",&foot,&inch);
//    printf("%f\n",(foot + inch /12) * 0.3048 );
//    return 0;
//}

//

//int main(void) {
//    /*
//     * 不能用运算符对字符串进行运算
//     * 通过数组的方式可以遍历字符串
//     * 唯一特殊的地方是字符串字面量可以用力啊初始化字符数组
//     *
//     * s是一个指针，初始化为指向一个字符串变量
//     * 由于这个变量所在的地方，所以实际上s是const char * s ，但是由于历史原因，编译器接受不带const的写法
//     * 但是试图对s所指的字符串做写入会导致严重后果
//     *
//     * 两处相同的东西会指向同一个地方
//     *
//     * 指针还是数组？
//     * 数组： 这个字符串就在这里 作为本地变量空间自动回收
//     * 指针： 这个字符串不知道在哪里 处理参数 动态分配空间
//     *
//     */
//    char *s = "Hello World";
//    char *s2 = "Hello World";
//    char s3[] = "Hello World";
////    s[0]=0;
//    printf("s =%p\n", s);
//    printf("s2=%p\n", s2);
//    printf("s3=%p\n", s3);
//    printf("Here is s[0] = %c\n", s[0]);
//    return 0;
//}


//int main(void ){
//    char string1[8];
//    char string2[8];
//    scanf("%s",string1);
//    scanf("%s",string2);
//    printf("%s\n",string1);
//    printf("%s\n",string2);
//    printf("#%s#%s#\n",string1,string2);
//    return 0;
//
//}

int main(int argc, char const *argv[]) {
    int i ;
    for ( i= 0; i< argc;i++){
        printf("%d:%s\n",i,argv[i]);
    }
    return 0;
}