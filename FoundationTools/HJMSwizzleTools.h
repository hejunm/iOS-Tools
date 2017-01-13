//
//  HJMSwizzleTools.h
//

#import <Foundation/Foundation.h>

@interface HJMSwizzleTools:NSObject

/// 互换实现的工具类
+ (void)hjm_swizzleWithClass:(Class)processedClass originalSelector:(SEL)originSelector swizzleSelector:(SEL)swizzlSelector;


- (BOOL)hjm_isValid;

@end
