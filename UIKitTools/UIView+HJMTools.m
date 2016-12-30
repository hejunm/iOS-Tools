//
//  UIView+HJMTools.m
//
//

#import "UIView+HJMTools.h"

@implementation UIView (HJMTools)

- (void)setHjm_x:(CGFloat)hjm_x{
    CGRect frame = self.frame;
    frame.origin.x = hjm_x;
    self.frame = frame;
}

- (CGFloat)hjm_x {
    return self.frame.origin.x;
}

- (void)setHjm_y:(CGFloat)y {
    CGRect frame = self.frame;
    frame.origin.y = y;
    self.frame = frame;
}

- (CGFloat)hjm_y {
    return self.frame.origin.y;
}

- (void)setHjm_centerX:(CGFloat)centerX {
    CGPoint center = self.center;
    center.x = centerX;
    self.center = center;
}

- (CGFloat)hjm_centerX {
    return self.center.x;
}

- (void)setHjm_centerY:(CGFloat)centerY {
    CGPoint center = self.center;
    center.y = centerY;
    self.center = center;
}

- (CGFloat)hjm_centerY {
    return self.center.y;
}

- (void)setHjm_width:(CGFloat)width {
    CGRect frame = self.frame;
    frame.size.width = width;
    self.frame = frame;
}

- (CGFloat)hjm_width {
    return self.frame.size.width;
}

- (void)setHjm_height:(CGFloat)height {
    CGRect frame = self.frame;
    frame.size.height = height;
    self.frame = frame;
}

- (CGFloat)hjm_height {
    return self.frame.size.height;
}

- (void)setHjm_size:(CGSize)size {
    CGRect frame = self.frame;
    frame.size = size;
    self.frame = frame;
}

- (CGSize)hjm_size {
    return self.frame.size;
}

- (void)setHjm_orign:(CGPoint)orign {
    CGRect frame = self.frame;
    frame.origin = orign;
    self.frame = frame;
}

- (CGPoint)hjm_orign {
    return self.frame.origin;
}

- (CGFloat)hjm_left {
    return self.hjm_x;
}

- (CGFloat)hjm_right {
    return self.hjm_x + self.hjm_width;
}

- (CGFloat)hjm_top {
    return self.hjm_y;
}

- (CGFloat)hjm_bottom {
    return self.hjm_y + self.hjm_height;
}

@end
