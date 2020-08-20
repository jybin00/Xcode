//
//  project1.cpp
//  CL
//
//  Created by 조유빈 on 02/04/2019.
//  Copyright © 2019 조유빈. All rights reserved.
//

#include "stdio.h" // 표준입출력 라이브러리
#include "stdlib.h" // rand(), srand() 함수를 사용하기 위한 헤더
#include "time.h" // time() 함수를 사용하기 위한 헤더
//uniform distribution random number generator
//random number is normalized [0,1]
int main(void)
{
    FILE*file;
    file=fopen("rand1.txt","w");
    // an variable for random number
    float random, random1; // float 변수 2개 생성
    
    /* Seed the random-number generator with current time so that
     the numbers will be different every time we run.
     */
    srand((unsigned)time(NULL)); // rand()함수에서 발생하는 난수값을 시간을 매개 변수로 초기화
    int N = 600;
    
    random1 = 0;
    
    //generate random numbers 10 times
        for(int j = 0; j<N; j++)
        {
            //rand() can generate a random number from 0 to RAND_MAX
            //we can normalize the result [0,1]
            random = 1.0*rand()/RAND_MAX; // rand() 난수를 생성하는 함수 0~RNAD_MAX
            //random1 = random1 + random;
            fprintf(file,"%10f\n",random);
        }
        //printf("%10f\n",random1*2/N);
        //random1 = 0;
    fclose(file);
}
