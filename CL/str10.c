//
//  str10.c
//  CL
//
//  Created by 조유빈 on 06/12/2018.
//  Copyright © 2018 조유빈. All rights reserved.
//  어떤 학생의 키는 아버지와 어머니의 키의 평균보다 5cm 크고 몸무게는 아버지와 어머니의 몸무게의 평균보다 4.5kg 가볍다고 한다. 키와 몸무게를 멤버변수로 갖는 구조체를 정의하고 아버지와 어머니의 키와 몸무게를 입력받아 학생의 키와 몸무게를 출력하는 프로그램을 작성하시오. 키는 정수미만 버림하고 몸무게는 반올림하여 소수 첫째자리까지 나타낸다.

#include <stdio.h>

struct roll // 구조체 정의
{
    float key;
    float weight;
};

int main(void)
{
    struct roll Mom,Dad;  // 구조체 선언
    int Ikey = 0; // 아이 키 저장 변수
    float Iweight = 0;  // 아이 몸무게 저장 변수
    
    scanf("%f %f", &Mom.key,&Mom.weight); // 엄마 아빠 정보 받기
    scanf("%f %f", &Dad.key,&Dad.weight);
    
    Ikey = (Mom.key+Dad.key)/2 + 5; // 문제 조건
    Iweight = (Mom.weight+Dad.weight)/2 - 4.5; // 문제 조건
    
    printf("height : %dcm\n", Ikey);
    printf("weight : %.1fkg\n", Iweight);
    
    return 0;
}


