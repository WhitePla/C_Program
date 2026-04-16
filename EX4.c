#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void ex_01(){

    int num;

    printf("정수를 입력하세요 : ");

    scanf("%d", &num);

    if(0 <= num){
        printf("양수입니다.");
    }else{
        printf("음수입니다.");
    }

}

void ex_02(){

    int num, sel = 0;

    printf("정수 입력 : ");
    scanf("%d", &num);

    if((num >> 1 ) > 10){

        sel = 0;

    }else {

        sel = 1;
    }

    switch(sel){

        case 0:
        printf("OK");
        break;

        case 1:
        printf("NOK");
        break;

        default:
        break;
    }
}

void ex_03(){

    double num = 0, sum = 0;

    while(-100 < num &&  num < 100){

        printf("숫자를 입력하세요 : ");

        scanf("%lf", &num);

        if(-100 < num &&  num < 100) sum += num;

    }

    printf("?100 이상 100 이하 숫자들의 합 = %.2lf", sum);

}

void ex_04(){

    char ch = 'a';

    printf("문자를 입력하세요.\n");

    
    while(ch != 'q' && ch != 'Q'){

        ch = getchar();

        while(getchar() != '\n');

    }

}

void ex_05(){

    int num, i;

    printf("정수를 입력하세요 : ");
    scanf("%d", &num);

    i = num;

    printf("2진수는 = ");

    for(int i = num; i > 0 ; i = i >> 1 ){

        if(num & i){ 
            printf("1");
        }else{
            printf("0");
        }   // num은 고정된 2진수 100001, i는 계속 오른쪽으로 쉬프트하며 2진수 자리가 바뀜 
            // 가장 오른쪽 비트 값끼리 비교하기에 서로 다르면 0 같으면 1이 되는 구조이다

    }

}

void ex_06(){

    int num = 0, count = 0;

    do{

        printf("정수를 입력하세요 : ");

        scanf("%d", &num);

    }while(num < 0);

    for(int i = num; i > 0; i = i >> 1){ //for문 작성시 ++, --연산자 아니면 반드시 =사용해줘야함

        if(num & i){
            count++;
        }

    }

    printf("2진수로 만들 때 1이 나타나는 횟수 = %d", count);
    
}

void ex_07(){

    int num = 0, count = 0;

    do{

        printf("10의 정수부터 입력 : ");

        scanf("%d", &num);

    }while(num < 10);

    for(int i = 10; i <= num; i++){

        if(i % 2 == 0){
            
            continue;

        }
        else if(i % 3 == 0){

            continue;

        }
        else if(i % 5 == 0){

            continue;
        
        }
        else if(i % 7 == 0){

            continue;

        }
        else{

            printf("%5d", i);
            count++;

            if(count == 10){

                printf("\n");

                count = 0;
            
            }

        }

    }

}

void ex_08(){

    int count=0;
    char ch;

    do{

        printf("알파벳 입력 : ");

        ch = getchar();

        while(getchar() != '\n');

    }while(ch < 'a' || 'z' < ch);

    for(char i = ch; i <='z'; i++){
        printf("%c ",toupper(i));
        count++;

        if(count == 5){
            printf("\n");
            count=0;
        }
    }

}

void ex_09(){

    char ch = 'a';

    do{

        printf("k이하의 알파벳입력(q는 종료, k이상은 다시 입력) : ");

        ch = getchar();

        while(getchar() != '\n');

    }while(ch > 'k');

    for(char i = 'a'; i <= ch; i++){

        printf("%c", i);

    }

}

void ex_10(){

    int sum = 0;
    char ch;

    do{

        printf("문자입력(알파벳과 숫자 이외의 문자 입력 시 종료) : ");

        ch = getchar();

        while(getchar() != '\n');

        if( 'a' <=ch && ch <='z'){
        
            printf("소문자입니다\n");
        
        }
        else if( 'A' <=ch && ch <='Z'){
            
            printf("대문자입니다\n");
        
        }
        else if( '1' <=ch && ch <='9'){
            
            sum += ch-'0';
            printf("숫자입니다. 지금까지 숫자들의 합 = %d\n", sum);
            
        }
        else{
        
            printf("종료합니다\n");
            break;
        
        }
        
    }while(1);
    

}

void ex_11(){

    int mid = 7;

    for(int i = 0; i <= mid; i++){
        for(int j = 0; j <= mid * 2;  j++){
            
            if(abs(j - mid) <= i){

                printf("%d", abs(j - mid));
            
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}

void ex_12(){

    int num, count = 0, temp = 1000;
    char ch, chtemp;

    do{

        printf("반복횟수입력 : ");
        scanf("%d", &num);

        while(getchar() != '\n');

    }while(0 > num || num > 9);


    for(int i = 0; i < num; i++){

        printf("문자 입력 : ");
        ch = getchar();

        while(getchar() != '\n');

        if(tolower(ch) == 'm'){

            temp = 0;
            chtemp = tolower(ch);

        }else if(tolower(ch) < 'm'){ //받은 문자가 m보다 작을때

            for(char m = tolower(ch); m < 'm'; m++){ //m까지 ch값을 증가시킴

                count++;//카운드 증가

            }

            if(count <= temp){ //count가 temp보다 작거나 같으면 저장

                temp = count;
                chtemp = tolower(ch);
                
                count = 0;

            }
            

        }else if(tolower(ch) > 'm'){ //받은 문자가 m보다 클때

            for(char m = tolower(ch); m > 'm'; m--){ //m까지 ch값을 감소시킴

                count++;//카운드 증가

            }

            if(count <= temp){ //count가 temp보다 작거나 같으면 저장

                temp = count;
                chtemp = tolower(ch);
                
                count = 0;

            }
        }
    }

    printf("m과 가장 가까운 문자는 = %c", chtemp);

}

int main(){
    
    //C언어 선택반복제어

    // ex_01();
    // ex_02();
    // ex_03();
    // ex_04();
    // ex_05(); // 중요!!!!!!!!
    // ex_06(); // 중요!!
    // ex_07(); // if사용해서 나머지 0나오면 나가버려
    // ex_08();
    // ex_09();
    // ex_10(); 
    // ex_11();
    ex_12();

    return 0;
}