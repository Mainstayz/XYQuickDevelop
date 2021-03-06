//
//  UIColor+XY.h
//  JoinShow
//
//  Created by Heaven on 14-2-14.
//  Copyright (c) 2014年 Heaven. All rights reserved.
//

#import <UIKit/UIKit.h>

/**************************************************************/
//  RGB颜色
#define XY_UIColorFromRGBA(r, g, b, a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define XY_UIColorFromHEXWithAlpha(__hex, __alpha) [UIColor colorFromHex:__hex alpha:__alpha]

@interface UIColor (XY)

// 根据自己的颜色,返回黑色或者白色
- (instancetype)blackOrWhiteContrastingColor;

// 返回一个十六进制表示的颜色: @"FF0000" or @"#FF0000"
+ (instancetype)colorFromHexString:(NSString *)hexString;

// 返回一个十六进制表示的颜色: 0xFF0000
+ (instancetype)colorFromHex:(NSInteger)hex alpha:(CGFloat)alpha;

// 返回颜色的十六进制string
- (NSString *)hexString;

/**
 Creates an array of 4 NSNumbers representing the float values of r, g, b, a in that order.
 @return    NSArray
 */
- (NSArray *)rgbaArray;

@end



