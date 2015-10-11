//
//  main.c
//  C_练习_数字拼凑_demo
//
//  Created by Suyuping on 15/10/10.
//  Copyright (c) 2015年 Suyuping. All rights reserved.
//

#include <stdio.h>
#define STR(a,b,c) a##b##c

int main(int argc, const char * argv[]) {
    
    printf("%d\n",STR(12,23,34));
    return 0;
}
