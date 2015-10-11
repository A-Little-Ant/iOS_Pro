//
//  main.c
//  C_单链表_demo
//
//  Created by Suyuping on 15/10/11.
//  Copyright (c) 2015年 Suyuping. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//声明一个结构体
typedef struct Student
{
    int No;
    char name[20];
    struct Student *next;
}Stu;

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
