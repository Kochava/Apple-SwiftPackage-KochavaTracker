//
//  KochavaTracker.h
//  KochavaTracker
//
//  Created by John Bushnell on 10/20/17.
//  Copyright © 2013 - 2022 Kochava, Inc.  All rights reserved.
//



#ifndef KochavaTracker_h
#define KochavaTracker_h



#pragma mark - DEFINE



#define KOCHAVA_FRAMEWORK



#pragma mark - IMPORT



#pragma mark System
#import <Foundation/Foundation.h>

#pragma mark KochavaCore
@import KochavaCore;

#pragma mark KochavaTracker
#import <KochavaTracker/KVAAdNetwork.h>
#import <KochavaTracker/KVAAdNetworkConversion.h>
#import <KochavaTracker/KVADeeplink.h>



#pragma mark - EXPORT



//! Project version number for KochavaTracker.
FOUNDATION_EXPORT double KochavaTrackerVersionNumber;

//! Project version string for KochavaTracker.
FOUNDATION_EXPORT const unsigned char KochavaTrackerVersionString[];



#endif



