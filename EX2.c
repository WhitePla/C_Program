#include <stdio.h>
#define PI 3.141592

void ex_03(){

    int num = 0;

    printf("정수 입력 : ");

    scanf("%d", &num);

    printf("8진수 : %#o, 10진수 : %#d, 16진수 : %#x", num, num, num);

}

void ex_04(){

    char ch;

    printf("문자 입력 : ");

    ch = getchar();

    while(getchar() != '\n');

    printf("8진수 : %#o, 10진수 : %#d, 16진수 : %#x", ch, ch, ch);

}

void ex_05(){

    double db;

    printf("실수 입력 : ");
    scanf("%lf", &db);

    printf("%0.1lf", db);

}

void ex_06(){

    double mid, last, sum, avg;

    printf("중간고사 성적 : ");
    scanf("%lf", &mid);
    
    printf("기말고사 성적 : ");
    scanf("%lf", &last);

    sum = mid+last;

    avg = sum / 2;

    printf("합 : %-10.3lf\n", sum);
    printf("평균 : %-10.3lf", avg);

}

void ex_07(){

    int r; 
    double P, V;

    printf("원 반지름 입력 : ");
    scanf("%d", &r);

    P = (r * r * PI);
    V = (2 * r * PI);

    printf("원 면적 : %.2lf\n", P);
    printf("원 넓이 : %.2lf", V);

}

void ex_08(){

    printf("char : %d\n", sizeof(char));
    printf("short : %d\n", sizeof(short));
    printf("int : %d\n", sizeof(int));
    printf("float : %d\n", sizeof(float));
    printf("double : %d", sizeof(double));

}

void ex_09(){

    char cha, chb;

    printf("문자 입력 : ");

    cha = getchar();

    while(getchar() != '\n');

    printf("문자 입력 : ");

    chb = getchar();

    while(getchar() != '\n');

    printf("입력 받은 문자는 : %c, %c", cha, chb);

}

void ex_10(){

    char cha, chb, sum;

    printf("숫자 입력 : ");

    cha = getchar();

    while(getchar() != '\n');

    printf("숫자 입력 : ");

    chb = getchar();

    while(getchar() != '\n');

    sum = ((cha-'0') + (chb-'0'));

    printf("두 숫의 합은 : %d", sum);

}

int main(){

    //C언어 입력부분 ex) scanf(), getchar()

    //ex_03();
    //ex_04();
    //ex_05();
    //ex_06();
    //ex_07();
    //ex_08();
    //ex_09();
    ex_10();
    
    return 0;

}