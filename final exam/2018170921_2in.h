//
//  2018170921_2.h
//  CL
//
//  Created by 조유빈 on 07/12/2018.
//  Copyright © 2018 조유빈. All rights reserved.
//

#ifndef _018170921_2_h
#define _018170921_2_h

#include <stdio.h>

#endif /* _018170921_2_h */

void fp357(void)
{

// 파일 포인터 정의
FILE *fp357; // 357 파일을 다룰 포인터
//FILE *fp3;
//FILE *fp5;
//FILE *fp7;
int i,j = 0;
//int number = 0; // 파일 쓰기를 위한 변수


fp357 = fopen("357.txt", "w"); // 파일을 입력으로 열기

for(i = 0; i < 14286; i++) // 반복문 100,000을 7로 나누었음.
{
    int flag =0,flag2 = 0; //3의 배수 탈출을 위한 변수
    int array[7] = {1+7*i,2+7*i,3+7*i,4+7*i,5+7*i,6+7*i,7+7*i}; // 배수 판단을 위한 어레이
    for(j = 0; j<7; j++) // 7단위로 숫자 체크
    {
        if(flag == 0)
        {
            if(array[j] % 3 ==0)
            {
                flag ++;
                fprintf(fp357, "%d ", array[j]);
            }
        }
        if(flag2 == 0)
        {
            if(array[j] % 5 ==0)
            {
                flag2 ++;
                fprintf(fp357, "%d ", array[j]);
            }
        }
        if (array[j] % 7 == 0)
            fprintf(fp357, "%d\n", array[j]);
            
            }
}

fclose(fp357); // 파일 종료
    
}
