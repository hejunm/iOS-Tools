//
//  NSObject+HJMTools.m
//

#import "NSObject+HJMTools.h"
#import <objc/runtime.h>

@implementation NSObject (HJMTools)

+ (void)HJM_swizzleWithClass:(Class)processedClass originalSelector:(SEL)originSelector swizzleSelector:(SEL)swizzlSelector{
    
    Method originMethod = class_getInstanceMethod(processedClass, originSelector);
    Method swizzleMethod = class_getInstanceMethod(processedClass, swizzlSelector);
    
    BOOL didAddMethod = class_addMethod(processedClass, originSelector, method_getImplementation(swizzleMethod), method_getTypeEncoding(swizzleMethod));
    
    if (didAddMethod) {
        class_replaceMethod(processedClass, swizzlSelector, method_getImplementation(originMethod), method_getTypeEncoding(originMethod));
    }else{
        method_exchangeImplementations(originMethod, swizzleMethod);
    }
}

/**
 *  对象是否可用， 不是nil,也不是null
 *
 */
- (BOOL)hjm_isValid{
    return !(self == nil || [self isKindOfClass:[NSNull class]]);
}


@end
