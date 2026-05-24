#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct MyStatus{

    char name[100];
    int HP;
    float Power;
    int clear;

};

struct GameSetting{

    int sound;

};

typedef struct MyStatus MyStatus;
typedef struct GameSetting GameSetting;

void StartSetting(MyStatus *MS, GameSetting *GS){

    MS -> HP = 100;
    MS -> Power = 5.0;

    GS -> sound = 50;

    char Start;

    printf("게임을 처음 시작하나요? (Y/N) : ");
    Start = getchar();

    while(getchar() != '\n');
    
    while(1){

        if(Start == 'Y' || Start == 'y'){
            
            printf("이름을 입력하세요 : ");
            fgets(MS -> name, sizeof(MS -> name), stdin);
            
            if((MS -> name[strlen(MS -> name) - 1] == '\n')) (MS -> name[strlen(MS -> name) - 1] = '\0');

            break;

        }else{
            
            printf("아직 구현 중 입니다.\n");
            puts("");

            break;
            
        }
        
        }
    }
    
void Setting(GameSetting *GS){

    char chose;

    printf("┌-----------------------------------┐\n");
    printf("|                                   |\n");
    printf("|             소리 : %d             |\n", GS -> sound);
    printf("|                                   |\n");
    printf("|                                   |\n");
    printf("|                                   |\n");
    printf("|      이후 기능 구현 할 공간       │\n");
    printf("|                                   |\n");
    printf("└-----------------------------------┘\n");
    puts("");

    printf("소리 조절을 할껀가요? (Y/N) : ");

    chose = getchar();

    while(getchar() != '\n');

    if(chose == 'Y' || chose == 'y'){

        printf("소리 조절 : ");
        scanf("%d", &GS -> sound);
        puts("");

    }else {
        puts ("");
        return;
    }

}

void Status(MyStatus *MS){

    printf("┌-----------------------------------┐\n");
    printf("|                                   |\n");
    printf("|           이름 : %s         |\n", MS -> name);
    printf("|           체력 : %d              |\n", MS -> HP);
    printf("|           공격력 : %.2f           |\n", MS -> Power);
    printf("|                                   |\n");
    printf("|      이후 기능 구현 할 공간       │\n");
    printf("|                                   |\n");
    printf("└-----------------------------------┘\n");
    puts("");

}

void Fight(MyStatus *MS){

    printf("아직 구현 중 입니다");
    puts("");

}

int main(int argc, char *argv[]){

    MyStatus *MS, ms;
    GameSetting *GS, gs;

    MS = &ms;
    GS = &gs;

    printf("게임 시작!\n");

    puts("");

    StartSetting(MS, GS);

    while(1){

        int *s, select = 0;

        s = &select;

        printf("아래를 보고 입력하세요\n");
        puts("");
        printf("1 : 설정 \n2 : 상태창 \n3 : 전투시작 \n0 : 게임 종료\n");

        scanf("%d", s);

        while(getchar() != '\n');

        puts("");

        switch(*s){

            case 0:
                printf("게임을 종료합니다.");
                exit(0);

            case 1:
                Setting(GS);
                break;
            
            case 2:
                Status(MS);
                break;

            case 3:
                Fight(MS);
                break;

            default:
                continue;

        }
    }

    return 0;

}