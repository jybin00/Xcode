//
//  ascii.c
//  CL
//
//  Created by 조유빈 on 06/12/2018.
//  Copyright © 2018 조유빈. All rights reserved.
//  5명의 이름과 키, 몸무게를 입력받아 이름순으로 정렬하여 출력하고,
//  몸무게가 무거운 순으로 정렬하여 출력하는 프로그램을 작성하시오.
//  몸무게는 소수점이하 1자리까지 출력한다.
/* Lee 150 35.6
 Kim 155 28.9
 Sin 148 32.7
 Jung 160 41.2
 Park 165 38.7
 */

#include <stdio.h>
#include <stdlib.h>

struct info
{
    char name [20];
    int key;
    float weight;
};

int main (void)
{
    printf("입력해주세요!\n");
    int i,j = 0; // for문 인덱스
    int temp = 0; // 비교를 위한 임시 변수
    float temp2 = 0; // 비교를 위한 임시 변수
    
    struct info s[5];  // 소스 코드 내부에서 구조체 배열 선언
    char tname [20];
    
    for( i = 0; i < 5; i++) // 5개의 데이터를 받는 for 문
    {
        scanf("%s %d %f",s[i].name, &s[i].key, &s[i].weight );
    }
    
    for(i = 0; i < 5; i++) // 이름 정렬을 위한 반복문
    {
        for(j=i; j < 5; j++) // 이중 for 문
        {
            if(strcmp(s[i].name, s[j].name) > 0 ) // 앞에 이름과 뒤에 이름 비교 1보다 크면 뒤에 이름이 뒤에 있다는 뜻
               {
                   strcpy(tname,s[i].name); // 만약 앞에 strcmp가 1보다 크다면 바꿔야겠죠?
                   strcpy(s[i].name, s[j].name); // 뒤에 이름을 앞에 넣는다.
                   strcpy(s[j].name, tname); // 임시 변수에 있는 이름을 뒤에 넣는다.
                   
                   temp = s[i].key; // 숫자도 똑같이!!
                   s[i].key = s[j].key;
                   s[j].key = temp;
                   
                   temp2 = s[i].weight; // 숫자도 똑같이 !!
                   s[i].weight = s[j].weight;
                   s[j].weight = temp2;
               }
        }
    }
    printf("name\n");
    for(i = 0; i<5; i++)
    {
        printf("%s %d %.1f\n", s[i].name, s[i].key, s[i].weight);
    }
    printf("\n");
    
    for(i = 0; i < 5; i++) // 몸무게 정렬을 위한 반복문
    {
        for(j=i; j < 5; j++) // 이중 for 문
        {
            if( s[i].weight < s[j].weight ? 1 : 0 ) // 앞에 몸무게와 뒤 몸무게를 비교해서 작으면 바꾸자
            {
                strcpy(tname,s[i].name); // 몸무게가 내림차순이어야 하니까 바꿔야겠죠?
                strcpy(s[i].name, s[j].name); // 뒤에 이름을 앞에 넣는다.
                strcpy(s[j].name, tname); // 임시 변수에 있는 이름을 뒤에 넣는다.
                
                temp = s[i].key; // 숫자도 똑같이!!
                s[i].key = s[j].key;
                s[j].key = temp;
                
                temp2 = s[i].weight; // 숫자도 똑같이 !!
                s[i].weight = s[j].weight;
                s[j].weight = temp2;
            }
        }
    }
    printf("weight\n");
    for(i = 0; i<5; i++)
    {
        printf("%s %d %.1f\n", s[i].name, s[i].key, s[i].weight);
    }
    
    return 0;
}


