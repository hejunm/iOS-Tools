//
//  UIView+HJMTools.h
//
//
#import <UIKit/UIKit.h>

@interface UIView (HJMTools)

@property (nonatomic, assign) CGFloat hjm_x;
@property (nonatomic, assign) CGFloat hjm_y;
@property (nonatomic, assign) CGFloat hjm_centerX;
@property (nonatomic, assign) CGFloat hjm_centerY;
@property (nonatomic, assign) CGFloat hjm_width;
@property (nonatomic, assign) CGFloat hjm_height;
@property (nonatomic, assign) CGSize  hjm_size;
@property (nonatomic, assign) CGPoint hjm_orign;

/**
 左边的x值,self.hjm_x
 */
@property (nonatomic, assign, readonly) CGFloat hjm_left;

/**
 右边边的x值,self.hjm_x + self.hjm_w
 */
@property (nonatomic, assign, readonly) CGFloat hjm_right;

/**
 上边的y值,self.hm_y
 */
@property (nonatomic, assign, readonly) CGFloat hjm_top;

/**
 下边的y值,self.hjm_y + self.hjm_h
 */
@property (nonatomic, assign, readonly) CGFloat hjm_bottom;

@end

CG_INLINE CGSize
hjm_CGSizeGetRightHeight(NSString *string, UIFont *font, CGFloat width)
{
    UILabel *label      = [[UILabel alloc] init];
    label.text          = string;
    label.numberOfLines = 0;
    label.font          = font;
    label.hjm_width         = width;
    [label sizeToFit];
    label.hjm_width = width;
    return label.hjm_size;
}

CG_INLINE CGSize
hjm_CGSizeGetRightWidth(NSString *string, UIFont *font, CGFloat width)
{
    UILabel *label      = [[UILabel alloc] init];
    label.text          = string;
    label.numberOfLines = 0;
    label.font          = font;
    label.hjm_width         = CGFLOAT_MAX;
    [label sizeToFit];
    
    label.hjm_width = label.hjm_width < width?label.hjm_width:width;
    return label.hjm_size;
}
