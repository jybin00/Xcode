//
//  str7.c
//  CL
//
//  Created by 조유빈 on 06/12/2018.
//  Copyright © 2018 조유빈. All rights reserved.
//  이름과 전화번호, 주소를 멤버로하는 구조체를 정의하여 1개의 자료를 입력받고 출력하는 프로그램을 작성하시오. 각각의 길이는 100자 이하다.


#include <stdio.h>

struct info
{
    char name[100];
    char number[100];
    char address[100];
};

int main(void)
{
    struct info s;
    printf("입력해주세요\n");
    
    scanf("%s %s %s", s.name, s. number, s.address);
    
    printf("Name : %s\n",s.name);
    printf("tel : %s\n", s.number);
    printf("addr : %s\n", s.address);
    
    return 0;
}
