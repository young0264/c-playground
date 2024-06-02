//
// Created by euiyoung on 2024. 5. 8..
//
/**
 * 과제 3
 * [예제 3-2]
 * */

#include <stdio.h>
const int FIVE_HUNDREAD = 500;
const int A_HUNDREAD = 100;
const int FIFTY = 50;
const int TEN = 10;

int main() {

    int amount, remain;
    int coin_500, coin_100, coin_50, coin_10;

    printf("교환할 액수를 입력하세요: ");
    scanf("%d", &amount);

    coin_500 = amount / FIVE_HUNDREAD;
    remain = amount % FIVE_HUNDREAD;

    coin_100 = remain / A_HUNDREAD;
    remain = remain % A_HUNDREAD;

    coin_50 = remain / FIFTY;
    remain = remain % FIFTY;

    coin_10 = remain / TEN;

    printf("500원짜리: %d개\n", coin_500);
    printf("100원짜리: %d개\n", coin_100);
    printf("50원짜리: %d개\n", coin_50);
    printf("10원짜리: %d개\n", coin_10);

    return 0;

}