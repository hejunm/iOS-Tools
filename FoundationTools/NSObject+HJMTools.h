//
//  NSObject+HJMTools.h
//

#import <Foundation/Foundation.h>

@interface NSObject (HJMTools)

/// 互换实现的工具类
+ (void)hjm_swizzleWithClass:(Class)processedClass originalSelector:(SEL)originSelector swizzleSelector:(SEL)swizzlSelector;


- (BOOL)hjm_isValid;

@end
