//
// Created by euiyoung on 2024. 5. 8..
//
/**
 * 과제 2
 * [예제 2-2]
 * */

#include <stdio.h>
const float PI = 3.141592;

float circ_area(float radius){
    return PI * radius * radius;
}

int main() {
    int radius;
    printf("반지름을 입력하세요: ");
    scanf("%d", &radius);

    float area = circ_area(radius);
    printf("원의 면적 : %.2f\n", area);

    return 0;
}
