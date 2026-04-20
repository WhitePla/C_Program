#include <stdio.h>
#include <string.h>
#include <ctype.h>

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

void ex_06(){

    char str[100], *pc;

    pc= str;

    while(1){

        printf("문자열입력 : ");

        fgets(str, sizeof(str), stdin);

        if(*pc == '\n'){
        
            break;
        
        }
        
        if(str[strlen(str) - 1] == '\n') str[strlen(str) - 1] = '\0';
        
        int count = 0;

        for(int i = 0; *(pc + i); i++){

            count++;

        }

        printf("입력된 문자열 길이 = %d\n", count);

    }

}

void ex_07(){

    int count = 0;

    char str[100], ch, *pc;

    pc = str;
    
    while(1){

        printf("문자열 입력 : ");
        
        fgets(str, sizeof(str), stdin);
        
        if(*pc == '\n'){
            
            break;
            
        }
        
        if(str[strlen(str) - 1] == '\n') str[strlen(str) - 1] = '\0';
        
        printf("문자 입력 : ");

        ch = getchar();

        while(getchar() != '\n');

        int count = 0;

        for(int i = 0; *(pc + i); i++){

            if(*(pc + i) == ch){

                count++;

            }

        }

        int width = strlen(pc) + 5;

        printf("%*s에서 %c는 %d개.\n", width, pc, ch, count);

    }

}

void ex_08(){

    char sa[100], sb[100], *pa, *pb;

    pa = sa;
    pb = sb;

    printf("문자열 입력 : ");

    fgets(sa, sizeof(sa), stdin);

    if(sa[strlen(sa) - 1] == '\n') sa[strlen(sa) - 1] = '\0';

    printf("문자열 입력 : ");

    fgets(sb, sizeof(sb), stdin);
        
    if(sb[strlen(sb) - 1] == '\n') sb[strlen(sb) - 1] = '\0';
        
    printf("sa = %s, sb = %s\n", pa, pb);

    while(*pa){

        pa++;

    }

    while(*pb){

        *pa = *pb;

        pa++;
        pb++;

    }

    *pa = '\0';

    printf("sa = sa + sb = %s, sb = %s", sa, sb);

}

void ex_09(){

    char str[3][100], *pa, *pb, *pc;

    pa = str[0];
    pb = str[1];
    pc = str[2];

    for(int i = 0; i < (sizeof(str) / sizeof(str[0]) - 1); i++){

        printf("str[%d] 문자열 입력 : ", i);

        fgets(str[i], sizeof(str[i]), stdin);

        if(str[i][strlen(str[i]) - 1] == '\n') str[i][strlen(str[i]) - 1] = '\0';

    }

    while(*pa){

        *pc = *pa;

        pa++;
        pc++;

    }

    while(*pb){

        *pc = *pb;

        pb++;
        pc++;

    }

    *pc = '\0';

    printf("str[2] = %s", str[2]);

}

void ex_10(){

    char stra[100], strb[100], *pa;

    pa = stra;

    printf("문자열 입력 : ");

    fgets(stra, sizeof(stra), stdin);

    if(stra[strlen(stra) - 1] == '\n') stra[strlen(stra) - 1] = '\0';

    printf("stra = %s, strb = ", pa);

    for(int i = 0; stra[i]; i++){

        strb[i] = toupper(*(pa + i));

    }

    strb[strlen(strb) + 1] = '\0';

    printf("%s", strb);

}

void ex_11(){

    char str[2][100], (*p)[100];

    
    printf("문자열 입력 : ");
    
    fgets(str[0], sizeof(str[0]), stdin);
    
    if(str[0][strlen(str[0]) - 1] == '\n') str[0][strlen(str[0]) - 1] = '\0';
    
    p = str;

    strcpy(str[1], *(p+0));

    strupr(str[1]);

    printf("str[0] = %s, str[1] = %s", str[0], str[1]);

}

void ex_12(){

    char stra[100], strb[100], *pa, *pb;

    pa = stra;
    pb = strb;

    printf("문자열 입력 : ");
    
    fgets(stra, sizeof(stra), stdin);

    if(stra[strlen(stra) - 1] == '\n') stra[strlen(stra) - 1] = '\0';

    printf("문자열 입력 : ");
    
    fgets(strb, sizeof(strb), stdin);

    if(strb[strlen(strb) - 1] == '\n') strb[strlen(strb) - 1] = '\0';

    while(*pa && *pb){

        if(*pa != *pb){

            break;

        }

        pa++;
        pb++;

    }

    if(*pa == '\0' && *pb == '\0'){

        printf("%s, %s, 같음", stra, strb);

    }else{

        printf("%s, %s, 다름", stra, strb);

    }

}

int main(){

    // ex_01();
    // ex_02();
    // ex_03();
    // ex_04();
    // ex_05();
    // ex_06();
    // ex_07();
    // ex_08();
    // ex_09();
    // ex_10();
    // ex_11();
    ex_12();
    // ex_13();
    // ex_14();


    return 0;
    
}