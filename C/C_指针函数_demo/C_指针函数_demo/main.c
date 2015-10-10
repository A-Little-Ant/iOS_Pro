//
//  main.c
//  C_指针函数_demo
//
//  Created by Suyuping on 15/10/5.
//  Copyright (c) 2015年 Suyuping. All rights reserved.
//

#include <stdio.h>
char name[20]="hello world";
char *string(void);
char *string(void)
{
    return name;
}

int main(int argc, const char * argv[]) {
    printf("%s\n",string());
    return 0;
}
