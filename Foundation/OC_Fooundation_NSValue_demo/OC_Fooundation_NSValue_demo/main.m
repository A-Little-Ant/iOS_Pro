//
//  main.m
//  OC_Fooundation_NSValue_demo
//
//  Created by Suyuping on 15/10/15.
//  Copyright (c) 2015年 Suyuping. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef struct _SYPPoint
{
    CGFloat x;
    CGFloat y;
} SYPPoint;

void testNSValue() {
    SYPPoint point = {10, 20};
    NSValue *value = [[NSValue alloc]initWithBytes:&point objCType:@encode(SYPPoint)];
    
    SYPPoint newPoint = {};
    [value getValue:&newPoint];
    NSLog(@"newPoint:(%.0lf, %.0lf)",newPoint.x, newPoint.y);
}
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        testNSValue();
    }
    return 0;
}
