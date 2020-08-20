//
//  pt5.c
//  CL
//
//  Created by 조유빈 on 07/12/2018.
//  Copyright © 2018 조유빈. All rights reserved.
//

#include <stdio.h>

void print_array(int array[]); // 함수 원형 설정 자료형만 써주자!!!
void total_array(int array[][4]);

int main (void)
{
    
    int m[10]= {1,2,3,4,5,6,7,8,9,0};
    int k[3][4] = {{1,45,6,7},{1,3,5,7},{2,3,45,5}};
    
    print_array(m);
    total_array(k);
    
    return 0;
}

void print_array(int array[])
{
    int a = 0;
    for(a = 0; a < 10; a++)
    {
        printf("array[%d] = %d\n",a,array[a]);
    }
    printf("\n");
}

void total_array(int (array[])[4])
{
    int i,j,sum = 0;
    for(i = 0; i<3; i++)
    {
        for(j = 0; j<4; j++)
        {
            sum += array[i][j];
        }
    }
    printf("2차원 배열의 총합 : %d\n",sum);
}
