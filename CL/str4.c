//
//  str4.c
//  CL
//
//  Created by 조유빈 on 06/12/2018.
//  Copyright © 2018 조유빈. All rights reserved.
//

#include <stdio.h>

struct inf // 구조체 선언
{
    char name [20];  // 이름 저장하는 변수
    int score1;   // 점수 저장 변수
    int score2;
}; // 세미콜론 꼭 붙이기

int main(void) // 메인 함수
{
    int c,d = 0;  // 점수 평균 저장 변수
    struct inf a,b;  // 소스 코드 내부에서 구조체 선언
    
    printf("이름 점수1 점수2를 입력해주세요\n");
    
    scanf("%s %d %d", a.name, &a.score1, &a.score2); // 입력 받기
    scanf("%s %d %d", b.name, &b.score1, &b.score2);
    
    c = (a.score1 + b.score1) / 2; // 평균 계산
    d = (a.score2 + b.score2) / 2;
    
    printf("%s %d %d\n", a.name, a.score1, a.score2);  // 출력 하기
    printf("%s %d %d\n", b.name, b.score1, b.score2);
    printf("avg %d %d\n", c, d);
    
    return 0;
    
}
