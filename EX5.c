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

void ex07(){

    char stra[100], strb[100];

    while(1){

        printf("문자열입력 : ");
    
        fgets(stra, sizeof(stra), stdin);

        if(stra[0] == '\n') break;

        for(int i = 0; stra[i]; i++){
        
            if(stra[i] == '\n'){

                stra[i] = '\0';
                break;

            }
        }

        printf("문자열입력 : ");

        fgets(strb, sizeof(strb), stdin);

        if(strb[0] == '\n') break;
    
        for(int i = 0; strb[i]; i++){
        
            if(strb[i] == '\n'){

                strb[i] = '\0';
                break;

            }
        }

        int i = 0;

        while(stra[i] && strb[i]){ // 서로 참인지만 확인

            // 서로 값이 같은지 확인 만약 서로 다르다면 그자리에서 break
            if(stra[i] != strb[i]) break; //만약 apple appel이라면 [3]이 다르기에 멈춤

            i++;

        }

        printf("%s, %s, ", stra, strb);

        if(stra[i] == strb[i]){

            printf("같음");
            
        }else{
            
            printf("다름");
            
        }

        printf("\n\n");

    }

}

void ex08(){

    char str[2][100];
    int i, j;


    while(1){

        for(i = 0; i < sizeof(str) / sizeof(str[0]); i++){
            printf("문자열 입력 : ");

            fgets(str[i], sizeof(str[i]), stdin);

            if(str[i][0] == '\n') break;

            for(j = 0; ; j++){
                if(str[i][j] == '\n'){
                    
                    str[i][j] = '\0';
                    
                    break;
                }
            }

        }

        i = 0;

        while(str[0][i] && str[1][i]){

            if(str[0][i] != str[1][i]) break;

            i++;
        }

        if(str[0][j] == str[1][i]){
            printf("같음");
        }else{
            printf("다름");
        }

        printf("\n\n");

    }

}

void ex09(){

    int from[4], sum = 0, max, min;

    for(int i = 0; i < sizeof(from) / sizeof(int); i++){

        printf("정수 입력 : ");
        scanf("%d", &from[i]);

        sum += from[i];

        min = from[0], max = from[0];

        max = from[i] > max ? from[i] : max;
        min = from[i] < min ? from[i] : min;

    }

    printf("\n합 = %d\n가장 큰 수  = %d\n가장 작은 수 = %d", sum, max, min);

}

void ex10(){

    int from[4], to[4];

    for(int i = 0; i < sizeof(from) / sizeof(int); i++){

        printf("정수 입력 : ");

        scanf("%d", &from[i]);

        to[i] = from[i];

    }

    for(int i = 0; i < sizeof(from) / sizeof(int); i++){

        printf("from배열: %d, to배열: %d\n", from[i], to[i]);

    }

}

void ex11(){

    int count[5];
    char num[100];

    for(int i = 0; i < sizeof(count) / sizeof(int); i++){
        count[i] = 0;
    }

    printf("0에서 4까지의 정수 입력 : ");

    fgets(num, sizeof(num), stdin);

    if(num[strlen(num) - 1] == '\n') num[strlen(num) - 1] = '\n';

    for(int i = 0; i < sizeof(num) / sizeof(char); i++){

        int index = num[i] - '0';

        if( 0 <= index && index <= 4){
            
            count[index]++;

        }
        
    }

    int max = count[0] , max_val = 0;

    for(int i = 0; i < 5; i++){

        if( count[i] > max){

            max = count[i];
            max_val = i;

        }

    }

    printf("가장 많이 입력받은 수 = %d\n", max_val);
    printf("입력 받은 횟수 = %d\n", max);

}

void ex12(){

    int num[100];

    while(1){

        printf("정수입력 : ");
        scanf("%d", &num[0]);

        while(getchar() != '\n');

        if(num[0] == 0) break;

        printf("    입력된 %d의 이진수는  : ", num[0]);

        for(int i = num[0]; i > 0; i = i >> 1){

            i & num[0] ? printf("1") : printf("0");

        }

        printf("\n");

    }
    

}

int main(){

    //배열

    // ex01();
    // ex02();
    // ex03();
    // ex04();
    // ex05();
    // ex06();
    // ex07();
    // ex08();
    // ex09();
    // ex10();
    // ex11();
    ex12();

    return 0;

}