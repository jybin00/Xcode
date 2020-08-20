//
//  max_subsequence_sum_03.cpp
//  CL
//
//  Created by 조유빈 on 26/09/2019.
//  Copyright © 2019 조유빈. All rights reserved.
//

#include <stdio.h>
int point_l[3] = {};
int point_r[3] = {};

int Max(int A, int B, int C)
{
    if(A>B && A>C)
        return A;
    else if(B>A && B>C)
        return B;
    else
        return C;
}

int MaxSubSum( const int A[][30], int Left, int Right, int K)
{
    //int MaxLeftSum, MaxRightSum;
    int MaxLeftBorderSum, MaxRigthBorderSum;
    int LeftBorderSum, RigthBorderSum;
    int Center, i;
    
    if( Left == Right) // Base Case
    {
        if( A[K][Left] > 0)
        {
            return A[K][Left];
            point_l[2] = point_r[2] = 0;
        }
        else
            return 0;
    }
    
    if( (Left + Right)%2 == 0) // 홀수개
        Center = ( Left + Right ) / 2;
    else // 짝수개
        Center = (( Left + Right )-1)/2;
    
    printf("center : %d\n",Center);
    
    //MaxLeftSum = MaxSubSum(A, Left, Center);
    //MaxRightSum = MaxSubSum(A, Center + 1, Right);
    
    MaxLeftBorderSum = 0; LeftBorderSum = 0;
    for(i = Center; i >= Left; i--)
    {
        LeftBorderSum += A[K][i];
        if (LeftBorderSum >= MaxLeftBorderSum)
        {   MaxLeftBorderSum = LeftBorderSum;
            point_l[0] = i;
            point_r[0] = Center;
        }
    }
    MaxRigthBorderSum = 0; RigthBorderSum = 0;
    for(i = Center + 1; i <= Right; i++)
    {
        RigthBorderSum += A[K][i];
        if(RigthBorderSum >= MaxRigthBorderSum)
        {   MaxRigthBorderSum = RigthBorderSum;
            point_l[1] = Center+1;
            point_r[1] = i;
        }
    }
    
    if( Max( MaxLeftBorderSum, MaxRigthBorderSum, MaxLeftBorderSum + MaxRigthBorderSum) == MaxLeftBorderSum)
    {
        point_l[2] = point_l[0];
        point_r[2] = point_r[0];
    }
    else if (Max( MaxLeftBorderSum, MaxRigthBorderSum, MaxLeftBorderSum + MaxRigthBorderSum) == MaxRigthBorderSum)
    {
        point_l[2] = point_l[1];
        point_r[2] = point_r[1];
    }
    else
    {
        point_l[2] = point_l[0];
        point_r[2] = point_r[1];
    }
    
    
    return Max( MaxLeftBorderSum, MaxRigthBorderSum, MaxLeftBorderSum + MaxRigthBorderSum);
}

int MaxSubsequenceSum(const int A[][30], int N, int K)
{
    return MaxSubSum(A, 0, N-1, K);
}

int main()
{
    int numArray[5][30] = {
        {-19, -17, 23, -12, 28, -4, 27, 53, 4, 29, 10, 2, 24, 6, 55, 59, 37, -9, 0, 33, 31, 25, -5, -14, 36, 35, -9, 3, -3, -1, },
        {-19, 55, -8, 16, 56, 30, 15, 7, 39, 2, 48, -9, -20, 3, -8, 52, 60, -17, 21, 11, 3, -3, 7, 25, 3, 17, -12, 51, -11, -10,},
        {23, 37, 38, -17, -12, 52, 54, 41, -8, 46, 23, 24, 13, -2, 55, 37, 34, 9, 48, 7, 7, -5, -9, -6, 26, 58, 18, -18, 52, -3,},
        {-15, 56, -10, 11, 16, 5, 42, -5, 27, 19, -20, -4, 50, 12, 56, 47, 57, 1, -12, 2, 43, 48, 3, 16, 10, 40, -2, 30, 32, 1,},
        {32, 3, 17, 40, 22, 23, 53, 58, 30, 2, 31, 5, 2, 30, 54, 18, 52, 39, 59, 54, 44, 51, 56, 33, 50, 26, 27, 38, 41, 46, }
    };
    
    for(int k = 0; k<5; k++)
    {
        int result = MaxSubsequenceSum (numArray, 30, k);
        
        printf("Test %d\n",k+1);
        printf("Input seq : ");
        for(int i = 0; i<30; i++)
        {
            printf("%d ",numArray[k][i]);
        }
        printf("\n");
        printf("Max. Sub. Sum: %d\n",result);
        printf("Max. Sub: ");
        for(int j = point_l[2]; j<=point_r[2]; j++)
        {
            printf("%d ",numArray[k][j]);
        }
        printf("\n\n");
        
    }
}

