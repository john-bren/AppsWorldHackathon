//
//  Device.h
//  Mojio
//
//  Created by Flynn Howling on 11/14/2013.
//  Copyright (c) 2013 team31. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Device : NSObject

@property (strong, nonatomic) NSString *idNumber, *nickname;
@property (assign) BOOL onOff;
@property int speedLimit;

@property NSDictionary *mojioData;

- (Boolean)setDeviceData;

// creates a dictionary containing the Mojio <nickname>, <speedLimit> and speed limit <onOff> status
- (NSMutableDictionary*)createMojioDictionary;

@end
