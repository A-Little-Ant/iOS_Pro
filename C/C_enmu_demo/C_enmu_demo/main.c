//
//  main.c
//  C_enmu_demo
//
//  Created by Suyuping on 15/10/10.
//  Copyright (c) 2015年 Suyuping. All rights reserved.
//

#include <stdio.h>
typedef enum
{
    no,
    yes
}mybool;
int main(int argc, const char * argv[]) {
    mybool isend = yes;
    printf("isend = %d\n",isend);
    return 0;
}
