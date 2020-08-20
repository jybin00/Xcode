//
//  CL2.cpp
//  CL
//
//  Created by 조유빈 on 29/11/2018.
//  Copyright © 2018 조유빈. All rights reserved.
//

#include <stdio.h>

int main()
{
    int number;
    FILE *fp;
    FILE *fp2;
    
    fp = fopen("input.txt", "w");
    
    for(int i = 0; i <= 5000; i++)
    {
        fprintf(fp, "%d\n", 2*i);
    }
    fclose(fp);
    
    fp = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");
    
    for(int i = 0; i < 5001; i++)
    {
        fscanf(fp, "%d", &number);
        if(number % 3 == 0)
        {
            fprintf(fp2, "%d %d \n", number, number + 1);
        }
    }
    
    fclose(fp);
    fclose(fp2);
    
    return 0;
    
    
}
