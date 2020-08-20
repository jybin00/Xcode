//
//  str8.c
//  CL
//
//  Created by 조유빈 on 06/12/2018.
//  Copyright © 2018 조유빈. All rights reserved.
//  이름과 전화번호, 주소를 멤버로하는 구조체를 정의하고 3명의 자료를 입력받은 후 사전순으로 이름이 가장 빠른 사람의 자료를 출력하는 프로그램을 작성하시오.
//  Lim 1234-5678 Seoul
//  Hong 2345-6789 Gangwon
//  Sung 3456-7890 Gyeonggi

#include <stdio.h>


struct roll
{
    char name[20];
    char number[20];
    char address[20];
};

int main(void)
{
    int i,j=0; // 반복문을 위한 인덱스
    struct roll a[3]; // 소스 코드 내부에서 구조체 선언
    char temp[20]; // 이름 교환을 위한 임시 저장소
    char temp1[20], temp2[20]; // 전화 번호, 주소 변경을 위한 임시 저장소
    
    printf("입력해주세요!\n");
    
    for( i =0 ; i<3; i++) // for문으로 세 번 입력 받기
    {
        scanf("%s %s %s", a[i].name, a[i].number, a[i].address);
    }
    
    for(i = 0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(strcmp(a[i].name,a[j].name) >0) // 앞에 이름이 뒤에 이름의 값보다 크면
            {
                strcpy(temp, a[i].name); // 이름 바꾸기
                strcpy(a[i].name, a[j].name);
                strcpy(a[j].name,temp);
                
                strcpy(temp1, a[i].address); // 주소 바꾸기
                strcpy(a[i].address, a[j].address);
                strcpy(a[j].address,temp1);
                
                strcpy(temp2, a[i].number); // 전화 번호 바꾸기
                strcpy(a[i].number, a[j].number);
                strcpy(a[j].number,temp2);
            }
        }
    }
    
    printf("name : %s\n", a[0].name);
    printf("tel : %s\n", a[0].number);
    printf("addr : %s\n", a[0].address);
    
    return 0;
}
