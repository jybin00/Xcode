//
//  str11.c
//  CL
//
//  Created by 조유빈 on 06/12/2018.
//  Copyright © 2018 조유빈. All rights reserved.
//  10 이하의 정수 n을 입력받은 후 n명의 이름(영문자 20자 이하)과 세 과목의 점수를 입력받아 총점이 높은 순으로 정렬하여 출력하는 프로그램을 작성하시오.
//  3
//  Chung 50 65 89
//  Nolbu 100 38 99
//  Hungbu 85 95 77

#include <stdio.h>


struct roll // 구조체 정의
{
    char name[20]; // 이름 배열
    int score1;
    int score2;
    int score3;
    int total;
};

int main(void)
{
    struct roll s[10]; // 소스 코드 내부에서 구조체 선언
    int n = 0;  // for문의 반복 횟수 지정을 위한 변수
    int i,j = 0; // for문의 index
    char tname[20]; // 이름 변경을 위한 변수
    
    printf("입력해주세요!\n");
    
    scanf("%d",&n); // 반복 횟수 입력 받기
    
    for(i = 0; i<n; i++)
    {
        scanf("%s %d %d %d", s[i].name, &s[i].score1, &s[i].score2, &s[i].score3);
        s[i].total = s[i].score1 + s[i].score2 + s[i].score3;
    }
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            int temp,temp1,temp2,temp3 = 0; // 교환을 위한 임시 변수
            if(s[i].total > s[j].total ? 1 : 0)
            {
                temp = s[i].total;
                s[i].total = s[j].total;
                s[j].total = temp;
                
                temp1 = s[i].score1;
                s[i].score1 = s[j].score1;
                s[j].score1 = temp1;
                
                temp2 = s[i].score2;
                s[i].score2 = s[j].score2;
                s[j].score2 = temp2;
                
                temp3 = s[i].score3;
                s[i].score3 = s[j].score3;
                s[j].score3 = temp3;
                
                strcpy(tname, s[i].name);
                strcpy(s[i].name, s[j].name);
                strcpy(s[j].name, tname);
            }
        }
    }
    for(i=0; i<n; i++)
        printf("%s %d %d %d %d\n",s[i].name, s[i].score1, s[i].score2, s[i].score3, s[i].total);
    
    
    return 0;
}
