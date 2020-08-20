//
//  max_subsequence_sum_01.cpp
//  CL
//
//  Created by 조유빈 on 26/09/2019.
//  Copyright © 2019 조유빈. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(NULL));
    FILE *fp ;
    
    int index;
    
    int data;
    
    
    
    fp = fopen("데구알 랜덤 넘버1", "w");
    
    for(index = 0 ; index < 30 ; index++){
        
        fprintf(fp, "%d, ", (rand()%81)-20);
        
    }
    
}




