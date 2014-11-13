//
//  AirPlayService.h
//  AirplayService
//
//  Created by 陈双龙 on 14-11-5.
//  Copyright (c) 2014年 CVTE. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol AirTunesMetadataDelegate

- (void)setMetadata:(NSDictionary *)metadata;

@end

@protocol AirTunesCoverDelegate

- (void)setCoverData:(NSData *)cover;

@end

@interface AirPlayService : NSObject

@property (nonatomic, assign) id<AirTunesMetadataDelegate> metadataDelegate;
@property (nonatomic, assign) id<AirTunesCoverDelegate> coverDelegate;

- (void) publishAirPlay:(NSString*) serviceName;

@end
