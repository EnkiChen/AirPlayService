//
//  DeviceInfo.h
//  AirplayService
//
//  Created by 陈双龙 on 14-11-5.
//  Copyright (c) 2014年 CVTE. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DeviceInfo : NSObject

+ (NSString *)getSysInfoByName:(char *)typeSpecifier;
+ (NSString *)platform;
+ (NSData *)deviceId;
+ (NSString *)deviceIdString;
+ (NSString *)deviceIdWithSep:(NSString *)sep;

@end
