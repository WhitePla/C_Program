#include <stdio.h>

void ex_01(){

    int money, cup, coffee = 1200, pay, ohoh, thon, oh, bak;

    printf("10000이하의 금액을 입력하세요 : ");

    scanf("%d", &money);

    printf("커피 몇잔 드셔 : ");

    scanf("%d", &cup);

    pay = cup * coffee;

    ohoh = (money - pay) / 5000;
    thon = ((money - pay) - (5000 * ohoh)) / 1000;
    oh = ((money - pay) - (5000 * ohoh) - (1000 * thon)) / 500;
    bak = ((money - pay) - (5000 * ohoh) - (1000 * thon) - (500 * oh)) / 100;

    printf("거스름 돈 입니다.\n");
    printf("5000원권 %d개\n", ohoh);
    printf("1000원권 %d개\n", thon);
    printf("500원 동전 %d개\n", oh);
    printf("100원 동전 %d개", bak);

}

void ex_02(){

    int ia, ib, max, min;

    printf("정수 두개를 입력하세요 : ");

    scanf("%d", &ia);
    scanf("%d", &ib);

    max = ia > ib ? ia : ib;
    min = ia < ib ? ia : ib;

    printf("큰 수 : %d\n", max);
    printf("작은 수 : %d\n", min);
    
    printf("큰 수에서 작은 수 나눈 몫과 나머지 : %d, %d", max / min, max % min);

}

void ex_03(){

    char ch;

    printf("문자를 입력하세요 : ");

    ch = getchar();

    while(getchar() != '\n');

    if(('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z')){
        printf(" -> Y");
    }else{
        printf(" -> N");
    }

}

void ex_04(){

    char numa, numb;

    printf("숫자를 입력하세요 : ");
    numa = getchar();

    while(getchar() != '\n');

    numa = ('0' <= numa && numa <= '9') ? numa-'0' : 1;

    printf("숫자를 입력하세요 : ");
    numb = getchar();

    while(getchar() != '\n');

    numb = ('0' <= numb && numb <= '9') ? numb-'0' : 1;

    printf("두 수의 곱은 = %d", (numa * numb));
}

void ex_05(){

    int num;

    printf("정수를 입력하세요 : ");

    scanf("%d", &num);

    printf("2의 배수 : %d\n", num<<1);
    printf("4의 배수 : %d\n", num<<2);
    printf("8의 배수 : %d\n", num<<3);

}

void ex_06(){

    int a;

    printf("정수를 입력하세요 : ");

    scanf("%d", &a);

    (a>>1) >= 10 ? printf("OK") : printf("NOK");

}

void ex_07(){

    int num, a;

    printf("정수 입력 : ");

    scanf("%d", &num);

    a= (sizeof(int)*8) - 1;
                                                                                                                    
    (num >> a) ? printf("음수") : printf("양수");

}

int main(){

    //연산자 ex) 삼항 연산자, 비트연산자, 쉬프트이동

    //ex_01();
    //ex_02();
    //ex_03();
    // ex_04();
    // ex_05();
    // ex_06();
    ex_07();

    return 0;
}