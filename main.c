#include <stdio.h>

struct contact {
    char name[20];
    char phone[20];
};

struct contact contact_list[100];

int contact_index = 0;

enum menu

void print_menu() {
    printf("1. 연락처 입력\n");
    
}

// Function: main
// Description: Main function
// Input: None
// Output: None

int main() {

    int menu;

    while(1){
        //메뉴 출력
        print_menu();
        //메뉴 입력
        printf("메뉴를 선택하세요: ");
        scanf("%d", $menu);

    }


    return 0;
}