//
//  str9.c
//  CL
//
//  Created by 조유빈 on 06/12/2018.
//  Copyright © 2018 조유빈. All rights reserved.
//  직사각형의 왼쪽 아래의 좌표(x, y)와 오른쪽 위의 좌표(x2, y2)를 저장할 수 있는 구조체 자료형을 만들고 두 개의 직사각형 자료를 입력받아 두 직사각형을 포함하는 최소의 직사각형 자료를 구하여 구조체 변수에 저장하고 출력하는 프로그램을 작성하시오. 단, 모든 입력값은 100을 넘지 않는다.
//1 1 6 5
//2 0 7 3

#include <stdio.h>

struct roll // 구조체 선언
{
    int px[2];
    int py[2];
};

int main (void)
{
    int i = 0; // 반복문 인덱스
    struct roll a[2]; // 소스 코드 내에서 구조체 선언
    int rx1,ry1,rx2,ry2 = 0;
    
    for( i = 0; i<2; i++) // 반복문 선언
        scanf("%d %d %d %d", &a[i].px[0], &a[i].py[0], &a[i].px[1], &a[i].py[1]); // 데이터 입력 받기
    
    rx1 = a[0].px[0] < a[1].px[0] ? a[0].px[0] : a[1].px[0];
    rx2 = a[0].px[1] > a[1].px[1] ? a[0].px[1] : a[1].px[1];
    ry1 = a[0].py[0] < a[1].py[0] ? a[0].py[0] : a[1].py[0];
    ry2 = a[0].py[1] > a[1].py[1] ? a[0].py[1] : a[1].py[1];
    
    printf("%d %d %d %d\n", rx1, ry1, rx2, ry2);
    
    
    return 0;
}
