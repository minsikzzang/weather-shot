//
//  WeatherService.h
//  weather-shot
//
//  Created by Min Kim on 4/9/13.
//  Copyright (c) 2013 min kim. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Weather;

@interface WeatherService : NSObject

- (void)getWeatherByGoordinate:(double)latitude
                     longitude:(double)longitude
                       success:(void (^)(Weather *weather))success
                       failure:(void (^)(NSError *error))failure;

@end