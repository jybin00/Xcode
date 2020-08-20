//
//  2018170921_3.c
//  CL
//
//  Created by 조유빈 on 07/12/2018.
//  Copyright © 2018 조유빈. All rights reserved.
//

#include <stdio.h>
#include <math.h> // 수학 관련 라이브러리

// 함수 원형 선언
float plus(float, float);
float minus(float, float);
float multi(float, float);
float divide(float, float);
float power(float, float);

int main(void)
{
    float(*funcP[5])(float, float); // 함수 포인터 배열 선언
    //int mode = 0; // 함수 모드 전용 변수
    float ans = 0; // 답
    float a,b; // 입력 받을 변수
    int i = 0; // 반복문을 위한 변수
    
    /*printf("사용하고 싶은 모드를 선택하세요! 1: 더하기, 2: 빼기, 3: 곱하기, 4: 나누기\ 5: x^yn");
    scanf("%d",&mode); // 모드 입력 받기
    
    if(mode > 5 || mode < 1)
        printf("모드를 잘못입력 하셨습니다!\n"); */
    
    //else
    //{
    printf("두 수를 입력하세요!\n"); // 입력 요청
    scanf("%f %f",&a, &b); // 계산할 두 수 입력 받기
    
    // 포인터 배열에 함수 지정
    funcP[0] = plus;
    funcP[1] = minus;
    funcP[2] = multi;
    funcP[3] = divide;
    funcP[4] = power;
    
    
    for( i = 0; i <5; i++) // 반복문으로 함수 출력하기
    {
        ans = funcP[i](a,b);
        printf("answer is %f\n",ans);
    }
    
    
    
    return 0;
}

float plus (float x, float y) // 더하기 함수
{
    return x + y;
}
float minus (float x, float y) // 빼기 함수
{
    return x - y;
}
float multi (float x, float y) // 곱하기 함수
{
    return x * y;
}
float divide (float x, float y) // 나누기 함수
{
    return x / y;
}
float power (float x, float y) // 지수 함수
{
    return pow(x,y);
}
