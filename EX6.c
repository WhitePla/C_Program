#include <stdio.h>
#include <string.h>

void ex_01(){

    double source[] = {1.21, 3.43, 5.65, 7.87, 8.98}, target[100], *pd;

    pd = source;
    
    printf("source = ");
    
    for(int i = 0; i < sizeof(source) / sizeof(double); i++){
        
        printf("%.2lf, ", *(source + i));

        *(target + i) = *(pd + i);

    }

    printf("\ntarget = ");
    
    for(int i = 0; i < sizeof(source) / sizeof(double); i++){
        
        printf("%.2lf, ", *(target + i));

    }

}

void ex_02(){

    double source [] = {1.21, 3.43, 5.65, 7.87, 8.98}, target[100], *pd, add;

    pd = source;

    printf("source = ");

    for(int i = 0; i < sizeof(source) / sizeof(double); i++){

        printf("%.2lf, ", *(source + i));

        target[i] = *(pd + i);

    }

    printf("\nsource 각 원소에 더할 값 입력 : ");

    scanf("%lf", &add);

    printf("target = ");

    for(int i = 0; i < sizeof(source) / sizeof(double); i++){

        printf("%.2lf, ", (*(target + i) + add));

    }

}

void ex_03(){

    int from[4], sum, *p;

    p = from;

    for(int i = 0; i < sizeof(from) / sizeof(int); i++){

        printf("정수 입력 : ");

        scanf("%d", (p + i));

        sum = *(p + i);

    }

    int max = from[0], min = from[0];

    for(int i = 0; i < sizeof(from) / sizeof(int); i++){
        
        max = from[i] > max ? from[i] : max; 
        min = from[i] < min ? from[i] : min; 
        
    }
    
    printf("\n합 = %d\n", sum);
    printf("가장 큰 수 = %d\n", max);
    printf("가장 작은 수 = %d", min);

}

void ex_04(){

    char ch[100], re[100], *pc;

    pc = ch;

    printf("한 단어를 입력하세요 : ");

    fgets(ch, sizeof(ch), stdin);

    if(ch[strlen(ch) - 1] == '\n') ch[strlen(ch) - 1] = '\0';

    int index = strlen(ch);

    for(int i = 0; ch[i]; i++){

        re[index - i - 1] = *(pc + i);

    }

    if(re[index] != '\0'){
        re[index] = '\0';
    }

    printf("입력한 단어를 반대로 출력합니다 : %s", re);

}

void ex_05(){

    int count = 0;

    char ch[100], *pc;

    pc = ch;

    printf("문자열입력 : ");

    fgets(ch, sizeof(ch), stdin);

    if(ch[strlen(ch) - 1] == '\n') ch[strlen(ch) - 1] = '\0';

    for(int i = 0; *(pc + i); i++){

        count++;

    }

    printf("입력된 문자열 길이= %d", count);

}

int main(){

    // ex_01();
    // ex_02();
    // ex_03();
    // ex_04();
    ex_05();
    // ex_06();
    // ex_07();
    // ex_08();
    // ex_09();
    // ex_10();
    // ex_11();
    // ex_12();
    // ex_13();
    // ex_14();


    return 0;
    
}