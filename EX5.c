#include <stdio.h>
#include <string.h>

void ex01(){

    char ch[4];
    
    for(int i = 0; i < sizeof(ch) / sizeof(char); i++){
        
        printf("문자 입력 : ");

        ch[i] = getchar();

        while(getchar() != '\n');

    }

    printf("입력된 문자 = ");

    for(int i = 0; i < sizeof(ch) / sizeof(char); i++){

        printf("%c", ch[i]);

    }

}

void ex02(){

    char str[100];

    printf("문자역 입력 : ");

    fgets(str, sizeof(str), stdin);

    if(str[strlen(str) - 1] == '\n'){
        str[strlen(str) - 1] = '\0';
    }

    printf("입력 문자열(strlen()사용) = %s\n", str);

    printf("-----------------구역 나눔-----------------\n");

    printf("문자역 입력 : ");

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i]; i++){

        if(str[i] == '\n'){
            str[i] = '\0';
            break;
        }

    }

    printf("입력 문자열(strlen()미사용) = %s\n", str);

}

void ex03(){

    char str[100];

    printf("문자열 입력 : ");

    fgets(str, sizeof(str), stdin);

    if(str[strlen(str) - 1] == '\n'){
        str[strlen(str) - 1] = '\0';
    }

    printf("입력한 문자열의 길이 : %d", strlen(str));

}

void ex04(){

    char str[100];

    while(1){

        printf("문자열 입력 : ");

        fgets(str, sizeof(str), stdin);

        if(str[1] == '\0') break; //'스페이스바 + enter'는 'enter만 입력'에 포함안되기에 '스페이스바 + enter'는 끝나지 않는다

        if(str[strlen(str) - 1] == '\n'){
            str[strlen(str) - 1] = '\0';
        }

        printf("입력된 문자열의 길이 : %d\n", strlen(str));

    }


}

void ex05(){

    char str[100], ch;
    int count = 0;

    printf("문자열 입력 : ");

    fgets(str, sizeof(str), stdin);

    if(str[strlen(str) - 1] == '\n'){
        str[strlen(str) - 1] = '\0';
    }
    
    printf("찾을 문자 입력 : ");

    ch = getchar();

    while(getchar() != '\n');

    for(int i = 0; str[i]; i++){

        if(ch == str[i]) count++;

    }

    printf("%s에서 %c는 %d개이다.", str, ch, count);

}

void ex06(){

    char stra[100], strb[100];

    printf("문자열 입력 : ");

    fgets(stra, sizeof(stra), stdin);

    if(stra[strlen(stra) - 1] == '\n'){
        stra[strlen(stra) - 1] ='\0';
    }

    printf("stra = %s\n", stra);

    for(int i = (strlen(stra) - 1); i >= 0; i--){

        strb[strlen(stra) - 1 - i] = stra[i];
        
    }

    strb[strlen(stra)] = '\0';

    printf("strb = %s", strb);

}

void ex07(){}

void ex08(){}

void ex09(){}

void ex10(){}

void ex11(){}

void ex12(){



}

int main(){

    //배열

    // ex01();
    // ex02();
    // ex03();
    // ex04();
    // ex05();
    ex06();
    // ex07();
    // ex08();
    // ex09();
    // ex10();
    // ex11();
    // ex12();

    return 0;

}