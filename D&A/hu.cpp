//
//  hu.cpp
//  CL
//
//  Created by 조유빈 on 28/09/2019.
//  Copyright © 2019 조유빈. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define MAX 30
int A[30] = {};
int MaxSum = 0;
int MaxSubsequenceSum(int A[], int N);

int main()
{
    int index = 0;
    printf("input seq=");
    srand(time(NULL));
    for (index = 0; index < MAX; index++)
    {
        int random = (rand() % 80) - 20;
        A[index] = random;
        printf("%4d", random);
    }
    printf("\n");
    MaxSum = MaxSubsequenceSum(A,30);

    printf("Max. Sub. Sum= %d \n", MaxSum);
}
    
    
int MaxSubsequenceSum(int A[], int N)
{
    int ThisSum, MaxSum, i, j, k;
    
    MaxSum = 0;
    for (i = 0; i < N; i++)
        
        for (j = i; j < N; j++)
        {
            ThisSum = 0;
            for (k = i; k <= j; k++)
                ThisSum += A[k];
            
            if (ThisSum > MaxSum)
                MaxSum = ThisSum;
        }
    
    return MaxSum;
}
