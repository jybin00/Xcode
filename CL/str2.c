//
//  str2.c
//  CL
//
//  Created by 조유빈 on 06/12/2018.
//  Copyright © 2018 조유빈. All rights reserved.
//

#include <stdio.h>

struct roll
{
    char school [20];
    int grade;
};

int main(void)
{
    struct roll a = {"Jejuelementary", 6};
    struct roll b;
    
    scanf("%s %d", b.school, &b.grade );
    
    printf("%d grade in %s School\n", a.grade, a.school );
    printf("%d grade in %s School\n", b.grade, b.school );
    
    return 0;
    
}
