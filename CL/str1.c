//
//  str1.c
//  CL
//
//  Created by 조유빈 on 05/12/2018.
//  Copyright © 2018 조유빈. All rights reserved.
//

#include <stdio.h>

struct roll  // 미리 선언해주어야 함.
{
    char name [20]; // 배열을 선언하면 포인터가 됨.
    char school [20]; // 얘도 포인터
    int grade; // 얜 그냥 정수형
};

int main (void) // 메인함수
{
    struct roll s; // 소스 코드 내에서 구조체 선언
    
    scanf("%s %s %d", s.name, s.school, &s.grade);
    
    printf("Name : %s\n", s.name);
    printf("School : %s\n", s.school);
    printf("Grade : %d\n", s.grade);
    
    
    return 0;
}
