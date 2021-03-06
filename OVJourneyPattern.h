//
//  OVRoute.h
//  OpenOVDemo
//
//  Created by Berend Schotanus on 15-11-13.
//  Copyright (c) 2013 First Flamingo Enterprise B.V. All rights reserved.
//

#import "OVObject.h"

typedef NS_OPTIONS(uint8_t, OVStopActOptions) {
    stopActNoOptions = 0,
    stopActWaitsIfEarly = 1 << 0,
    stopActAllowsBoarding = 1 << 1,
    stopActAllowsAlighting = 1 << 2,
};

@class OVStop, OVVehicleJourney;

@interface OVJourneyPattern : OVObject

@property (nonatomic, readonly) journey_pattern_t pattern;
@property (nonatomic, readonly) NSString *lineCode;
@property (nonatomic, readonly) NSString *headsign;

// Stops

@property (nonatomic, readonly) NSUInteger nrOfStops;
@property (nonatomic, strong) NSArray *stops;

- (int32_t)stopIndexAtIndex:(int32_t)index;
- (OVStop *)stopAtIndex:(int32_t)index;
- (OVStopActOptions)stopActOptionsAtIndex:(int32_t)index;

// VehicleJourneys

@property (nonatomic, readonly) NSUInteger nrOfVehicleJourneys;
@property (nonatomic, strong) NSArray *vjs;

@end
