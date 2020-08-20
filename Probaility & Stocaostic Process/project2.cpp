//
//  project2.cpp
//  CL
//
//  Created by 조유빈 on 28/04/2019.
//  Copyright © 2019 조유빈. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <float.h>
#include <math.h>

#define PI 3.141592

// Gaussian Distribution with mean = 5, variance = 3
double Gaussian(){
    
    int mean = 5;
    int var = 3;
    float U1,U2;
    float x;    // Gaussian Random Number
    
    U1 = (float)rand()/RAND_MAX; // Uniform Distribution Random Number [0,1]
    U2 = (float)rand()/RAND_MAX; // Uniform Distribution Random Number [0,1]
    
            // Gaussian Rnadom Number by Box-Muller transformation
            //It allows us to transform uniformly distributed random variables,
            //to a new set of random variables with a Gaussian (or Normal) distribution.
    x = sqrt(-2*var*log(1-U1))*cos(2*PI*U2) + mean;
    
    return x;
}

int main()
{
    int i;
    float x;
    FILE* gauss; // 파일 포인터 설정
    
    gauss = fopen("gauss(5,root(3)^2).txt","w"); // 파일 포인터 오픈
    
    /* Seed the random-number generator with current time so that the
     numbers will be different every time we run.
     */
    srand((unsigned)time(NULL));
    
    //10000개의 랜덤 넘버 발생
    for(i = 0; i < 10000; i++)
    {
        x = Gaussian();
        if(isnan(x) != 0)
            continue;
        else
        fprintf(gauss,"%10f\n",x); // 파일 프린트
        
    }
    fclose(gauss); // 파일 포인터 종료
}
