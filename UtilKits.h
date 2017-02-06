//
//  UtilKits.h
//  DashunClient
//
//  Created by lottak_mac2 on 16/9/27.
//  Copyright © 2016年 com.lottak. All rights reserved.
//

#ifndef UtilKits_h
#define UtilKits_h

#import "NSObject+Tips.h"//消息提示框
#import "NSString+StringSize.h"//字符串高度/长度计算
#import "NSDate+Format.h"//时间分类
#import "NSObject+data.h"//运行时添加data属性
#import "NSString+isBlank.h"//字符串是否为空
#import "UIImage+scale.h"//图片压缩
#import "UIColor+FlatUI.h"//颜色分类 应用中的主要颜色
#import "NSString+firstChar.h"//字符串首字母，用于索引



#define WS(weakSelf)  __weak __typeof(&*self)weakSelf = self;
#define HJMMethodNotImplemented() \
    @throw [NSException exceptionWithName:NSInternalInconsistencyException \
                                   reason:[NSString stringWithFormat:@"You must override %@ in a subclass.", NSStringFromSelector(_cmd)] \
                                 userInfo:nil]
#endif /* UtilKits_h */
