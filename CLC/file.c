//
//  file.c
//  CL
//
//  Created by 조유빈 on 06/12/2018.
//  Copyright © 2018 조유빈. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main (void) // 메인함수
{
    int a = 0;
    int count = 0; // 몫을 위한 변수
    int *p = &a;  // 정수형 포인터
    
    printf("몫과 나머지를 알고 싶은 값을 입력해주세요!\n");
    scanf("%d",&a); // a값 입력받기
    
    for(int i = 1; i<100000; i++) // int는 21억까지~
    {
        if((*p)-10*i < 10 && (*p)-10*i >0)
        {
            count=i;
        }
    }
    
    printf("%d...%d\n",count,(*p%10));
    
    
    return 0;
}
