//
//  str5.c
//  CL
//
//  Created by 조유빈 on 06/12/2018.
//  Copyright © 2018 조유빈. All rights reserved.
// 삼각형의 세 꼭지점의 좌표를 입력받아 삼각형의 무게중심의 좌표를 구하여 소수 첫째자리까지 출력하는 프로그램을 작성하시오.

#include <stdio.h>

struct tri // 구조체 만들기
{
    float p1;
    float p2;
    float p3;
}; // 세미콜론 꼭 붙이기

int main(void) // 메인함수
{
    float x,y; // 무게중심의 x,y 값을 저장할 변수
    struct tri trix,triy; // 소스 코드 내부에서 선언
    
    scanf("%f %f %f %f %f %f", &trix.p1, &triy.p1,&trix.p2, &triy.p2,&trix.p3, &triy.p3);
    
    x = (trix.p1 + trix.p2 + trix.p3) / 3; // x의 평균
    y = (triy.p1 + triy.p2 + triy.p3) / 3; // y의 평균
    
    printf("(%.1f, %.1f)\n", x, y);  // %.4f 이면 소수점 네 자리까지 출력하라는 뜻!!!
    
    return 0;
}
