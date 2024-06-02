//
// Created by euiyoung on 2024. 5. 8..
//
/**
 * 과제 2
 * [예제 1-2]
 * */

#include <stdio.h>

void multiply(int a, int b){
    int result = a * b;
    printf("두 수의 곱 : %d\n", result);
}

int main(){
    int num1, num2;
    printf("두 수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);
    multiply(num1, num2);

    return 0;
}

