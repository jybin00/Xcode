//
//  Header.h
//  CL
//
//  Created by 조유빈 on 07/12/2018.
//  Copyright © 2018 조유빈. All rights reserved.
//

#ifndef Header_h
#define Header_h


#endif /* Header_h */
#include <stdio.h>

int fp3_5_7(void)
{
    // 파일 포인터 정의
    FILE *fp357; // 357 파일을 다룰 포인터
    FILE *fp3;
    FILE *fp5;
    FILE *fp7;
    //int i,j = 0;
    int number = 0; // 파일 쓰기를 위한 변수
    
    // 파일 접근을 위한 설정
    fp357 = fopen("357.txt", "r");
    fp3 = fopen("3.txt", "w");
    fp5 = fopen("5.txt", "w");
    fp7 = fopen("7.txt", "w");
    
    // 반복문으로 값 읽어오기.
    for(int i = 0; i < 14286; i++)
    {
        fscanf(fp357,"%d", &number);
        {
            fprintf(fp3, "%d\n", number);
        }
        fscanf(fp357,"  %d", &number);
        {
            fprintf(fp5, "%d\n", number);
        }
        fscanf(fp357,"    %d", &number);
        {
            fprintf(fp7, "%d\n", number);
        }
    }
    
    fclose(fp357);
    fclose(fp3);
    fclose(fp5);
    fclose(fp7);
    
    return 0;
}
