//
// Created by euiyoung on 2024. 5. 8..
//
/**
 * 과제 4
 * [예제 4-3]
 * */

#include <stdio.h>
#include <ctype.h>
#include <string.h> // 문자열 관련 함수를 사용하기 위한 헤더 파일

int main() {
    char input[100];
    int digit_cnt = 0, space_cnt = 0,char_cnt = 0;

    printf("문자열을 입력하세요: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    printf(input);
    for (int i = 0; input[i] != '\0'; i++) {
        if (isdigit(input[i])){
            digit_cnt++;
        } else if (isspace(input[i])){
            space_cnt++;
        } else {
            char_cnt++;
        }
    }

    printf("숫자의 수: %d\n", digit_cnt);
    printf("공백의 수: %d\n", space_cnt);
    printf("문자의 수: %d\n", char_cnt);

    return 0;
}