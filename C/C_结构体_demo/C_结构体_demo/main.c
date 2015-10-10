//
//  main.c
//  C_结构体_demo
//
//  Created by Suyuping on 15/10/10.
//  Copyright (c) 2015年 Suyuping. All rights reserved.
//

#include <stdio.h>

struct student //声明结构体类型
{
    int No;
    char name[20];
    int age;
    char sex[20];
    double score;
};

int main(int argc, const char * argv[]) {
    struct student Huiqi ={1200210504, "惠祺",22,"女",94};
    
    //通过  .   来访问成员变量
    printf("学号：%d\n",Huiqi.No);
    printf("姓名：%s\n",Huiqi.name);
    printf("年龄：%d\n",Huiqi.age);
    printf("性别：%s\n",Huiqi.sex);
    printf("成绩：%.2lf\n",Huiqi.score);
    
    return 0;
}
