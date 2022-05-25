/*
    【問題1】
    ①Hello World!と表示させてみよう

    ②英語・数学・物理の点数をscanfで入力し、
    入力後に英語・数学・物理の点数を表示させよう
*/
#include<stdio.h>

// ①
/*
int main(void) {
    printf("Hello World!");
    return 0;
}
*/

// ②
/*
int main(void) {
    int En, Ma, Ph;   // 整数として En:英語, Ma:数学, Ph:物理

    printf("English Point: ", En);
    scanf("%d", &En);   // 英語を読み取る
    printf("Math Point: ", En);
    scanf("%d", &Ma);   // 数学を読み取る
    printf("Physics Point: ", En);
    scanf("%d", &Py);   // 物理を読み取る

    printf("En %dpoint!, Ma %dpoint! Ph %dpoint!", En, Ma, Ph);

    return 0;
}
*/


/*
    【問題2】
    キャスト式を使って割り算を求めよう

    「英語・数学・物理の点数をscanfで入力し、
    入力後に英語・数学・物理の点数を表示させよう」

    のプログラムを使って、入力した点数の平均を出力せよ
*/
/*
int main(void) {
    int En, Ma, Ph;   // 整数として En:英語, Ma:数学, Ph:物理

    printf("English Point: ", En);
    scanf("%d", &En);   // 英語を読み取る
    printf("Math Point: ", En);
    scanf("%d", &Ma);   // 数学を読み取る
    printf("Physics Point: ", En);
    scanf("%d", &Py);   // 物理を読み取る

    printf("En %dpoint!, Ma %dpoint! Ph %dpoint!", En, Ma, Ph);

    // ↓ 追加
    printf("Average %lfpoint!", (double)(En + Ma + Ph) / 3);   // 3で割った時に少数で出てくる

    return 0;
}
*/