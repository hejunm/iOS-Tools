//
//  NSDate+Format.h
//  business
//
//  Created by C.Maverick on 15/6/7.
//  Copyright (c) 2015年 C.Maverick. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark -

#define SECOND	(1)
#define MINUTE	(60 * SECOND)
#define HOUR	(60 * MINUTE)
#define DAY		(24 * HOUR)
#define MONTH	(30 * DAY)
#define YEAR	(12 * MONTH)

#pragma mark -

@interface NSDate (Format)
//时间格式化
@property (nonatomic, readonly) NSInteger	year;
@property (nonatomic, readonly) NSInteger	month;
@property (nonatomic, readonly) NSInteger	day;
@property (nonatomic, readonly) NSInteger	hour;
@property (nonatomic, readonly) NSInteger	minute;
@property (nonatomic, readonly) NSInteger	second;
@property (nonatomic, readonly) NSInteger	weekday;

+ (NSDate*)dateFromStr:(NSString *)dateStr;
+ (long long)timeStamp;
+ (NSDate *)now;


- (NSString*)weekdayStr;
- (NSString *)timeAgo;
- (NSString *)timeAgo4Dialog;
- (NSString *)resultWithFormat:(NSString *)format;
- (NSString *)timeLeft;

/**今天凌晨时间*/
- (NSDate*)firstTime;
/**明天凌晨时间*/
- (NSDate*)lastTime;

@end
