//
//  pt2.c
//  CL
//
//  Created by 조유빈 on 07/12/2018.
//  Copyright © 2018 조유빈. All rights reserved.
//

#include <stdio.h>

void multi2 (int*, int*, int*); // 함수 원형 설정 자료형만 써주면 됨!!

int main(void) // 메인 함수
{
    int a=0,b=0,c=0; // 변수 설정
    int* p1 = &a; // 포인터 정의
    int* p2 = &b;
    int* p3 = &c;
    
    printf("두 배 하고 싶은 숫자를 세 개 입력해주세요!\n");
    scanf("%d %d %d",&a,&b,&c); // 변수에 저장할 값 받기
    
    multi2(p1,p2,p3); // 함수 실행
    printf("%d %d %d\n",*p1, *p2, *p3);
    
    return 0;
}

void multi2 (int*x,int*y,int*z) // 함수에는 주소값을 넘겨줌.
{
    *x *=2;
    *y *=2;
    *z *=2;
}
