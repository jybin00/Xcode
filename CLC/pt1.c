//
//  pt1.c
//  CL
//
//  Created by 조유빈 on 07/12/2018.
//  Copyright © 2018 조유빈. All rights reserved.
//

#include <stdio.h>

void swap(int, int, int*, int*); // 바꾸는 함수

int main (void) // 메인 함수
{
    int a = 10, b = 20;
    int c = 100, d = 200;
    
    printf("%d %d %d %d\n",a,b,c,d);
    
    swap(a,b,&c,&d); // 바꾸자!!
    
    printf("%d %d %d %d\n", a,b,c,d); // 바뀌었는지 안 바뀌었는지 출력
    
    return 0;
}

void swap(int x, int y, int*px, int*py)
{
    int temp = 0; // 임시 저장 공간
    
    // 일반 변수의 swap
    temp = x;
    x = y;
    y = temp;
    
    // 포인터 변수의 swap
    temp = *px;
    *px = *py;
    *py = temp;
}
