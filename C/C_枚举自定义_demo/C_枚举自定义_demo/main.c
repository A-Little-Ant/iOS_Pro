//
//  main.c
//  C_枚举自定义_demo
//
//  Created by Suyuping on 15/10/10.
//  Copyright (c) 2015年 Suyuping. All rights reserved.
//

#include <stdio.h>
typedef enum
{
    nscartypeBMW,
    nscartypeAudi,
    nscartypeBenzi,
    nscartypetoyota
}nscartype;

typedef enum
{
    Red,
    Blue,
    White,
    Pink
}color;

typedef enum
{
    zombfly,
    zombeat,
    zombjump,
    zombsleep
}zomb;

int main(int argc, const char * argv[]) {
    nscartype type = nscartypeAudi;
    zomb a = zombjump;
    color p = Pink;
    printf("%d\n",type);
    printf("%d\n",a);
    printf("%d\n",p);
    return 0;
}
