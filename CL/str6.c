//
//  str6.c
//  CL
//
//  Created by 조유빈 on 06/12/2018.
//  Copyright © 2018 조유빈. All rights reserved.
//5명의 이름과 키를 입력받아 키가 가장 작은 사람의 이름과 키를 출력하는 프로그램을 작성하시오.

#include <stdio.h>
// (((a) < (b)) ? ((a) : (b)))
// 삼항 연산자. 앞에는 참 거짓을 판단한 명제, 뒤에는 참 : 거짓 <- 참일 때 들어가는게 왼쪽!!

struct info
{
    char name [20];
    int key;
};

int main(void)
{
    int a = 0; // 가장 작은 키를 가지고 있는 구조체의 인덱스를 저장하는 변수
    int i = 0;
    int j [5]; // 가장 작은 키는 4에 들어간다.
    
    struct info s[5]; // 구조체 배열 선언
    
    for( i = 0; i < 5; i++) // for 문으로 5개의 정보 입력받기
    {
        scanf("%s %d", s[i].name, &s[i].key);
    }
    
    j[0] = s[0].key; // 처음 비교 시작 대상
    
    for(i = 1; i < 5; i++) // for 문으로 키 비교
    {
        j[i] = j[i-1] < s[i].key ? j[i-1] : s[i].key; // 가장 작은 키는 j[4]에 저장됨.
        if(j[i-1] > s[i].key ? 1 : 0)
            // 가장 작은 키의 구조체 번호를 어떻게 알 수 있을까? , if () 안에 1이면 참 0이면 거짓!!!!!!
        {
            a= i;
        }
    }
    
    printf("%s %d\n",s[a].name,j[4]);
    
    return 0;
}
//Park 175
//Lee 180
//Choo 185
//Son 193
//Kim 188
