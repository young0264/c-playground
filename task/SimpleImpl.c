//
// Created by euiyoung on 2024. 5. 8..
//
#include <stdio.h>

int main(){
    int input;
    char name[] = "남의영";
    char department[] = "컴퓨터과학과";
    char studentID[] = "202334-363719";

    printf("5부터 10 사이의 짝수를 입력하시오 \n (0을 입력시 프로그램 종료)\n");

    while(true){
        printf("숫자입력 : ");
        scanf("%d", &input);
//        getchar(); // 버퍼 비우기

        if (input ==0){
            printf("-----------------------------\n");
            printf("♥프로그램을 종료합니다. 이름 : %s\n", name);
            printf("-----------------------------\n");

            break;
        } else if (input < 5 || input > 10){
            printf("---------------------------------------------\n");
            printf("☆ 5부터 10 사이의 짝수를 입력하시오. 학과 : %s\n", department);
            printf("---------------------------------------------\n");
        } else if (input % 2 != 0){
            printf("-------------------------------------\n");
            printf("★ 짝수를 입력하시오. 학번: %s\n", studentID);
            printf("-------------------------------------\n");
        } else {
            printf("---------------------------------------\n");
            printf("입력한 숫자 %d은(는) 5부터 10 사이의 짝수입니다.\n", input);
            printf("---------------------------------------\n");
        }
    }
    return 0;

}