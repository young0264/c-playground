//
// Created by euiyoung on 2024. 5. 30..
//
#include <stdio.h>
void main(){
    static int a[] = {10, 20, 30, 40, 50};
    int *pt, b, c;
    pt = a;
    b = *pt + *(pt + 2);
    pt = pt + 2;
    c = *pt + *(pt + 2);
    printf("pt=%d\n", pt);
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    printf("c=%d\n", c);
}