//
//  main.m
//  OC_Foundation_NSNumber_demo
//
//  Created by Suyuping on 15/10/16.
//  Copyright (c) 2015年 Suyuping. All rights reserved.
//

#import <Foundation/Foundation.h>

void testNSNumber()
{
    int x;//x-->对象
    NSNumber *num = [NSNumber numberWithInt:x];//对象 --> int
    int y = [num intValue];
    NSLog(@"y=%d",y);
    NSInteger a = 100;
    NSNumber *num2 = [NSNumber numberWithInteger:a];
    NSInteger b = [num2 integerValue];
    NSLog(@"b=%ld",b);
    
    //------------------------------------//
    
    NSNumber *n1 = @100;
    int n2 = [n1 intValue];
}
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        testNSNumber();
    }
    return 0;
}
