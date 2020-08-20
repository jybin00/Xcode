//
//  ㄹㄹ.cpp
//  CL
//
//  Created by 조유빈 on 29/04/2019.
//  Copyright © 2019 조유빈. All rights reserved.
//

//#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <float.h>
#include <math.h>

#define PI 3.141592

double Gaussian(){
    
    int mean = 1;
    int var = 2;
    float U1,U2;
    float x;
    
    U1 = (float)rand()/RAND_MAX;
    U2 = (float)rand()/RAND_MAX;
    
    x = sqrt(-2*var*log(1-U1))*cos(2*PI*U2) + mean;
    
    return x;
}

int main()
{
    int i;
    float x;
    
    srand((unsigned)time(NULL));
    
    for(i = 0; i < 1000; i++)
    {
        x = Gaussian();
        if(isnan(x) != 0)
            continue;
        else
            printf("%10f\n" ,x);
                   
                   }
                   }
