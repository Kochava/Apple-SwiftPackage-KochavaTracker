//
//  KochavaTracker.h
//  KochavaTracker
//
//  Created by John Bushnell on 10/20/17.
//  Copyright © 2013 - 2021 Kochava, Inc.  All rights reserved.
//



#ifndef KochavaTracker_h
#define KochavaTracker_h



#pragma mark - DEFINE



#define KOCHAVA_FRAMEWORK



#pragma mark - IMPORT



#pragma mark System
#import <Foundation/Foundation.h>

#pragma mark KochavaCore
#import <KochavaCore/KochavaCore.h>

#pragma mark KochavaTracker
#import <KochavaTracker/KVAAppTrackingTransparency.h>
#import <KochavaTracker/KVAAttribution.h>
#import <KochavaTracker/KVAAttributionResult.h>
#import <KochavaTracker/KVACustomIdentifiers.h>
#import <KochavaTracker/KVADeeplink.h>
#import <KochavaTracker/KVADeeplinks.h>
#import <KochavaTracker/KVAEvent+Standard.h>
#import <KochavaTracker/KVAEvents.h>
#import <KochavaTracker/KVAIdentityLink.h>
#import <KochavaTracker/KVAPrivacy.h>
#import <KochavaTracker/KVAPrivacyProfile.h>
#import <KochavaTracker/KVAPushNotifications.h>
#import <KochavaTracker/KVAPushNotificationsToken.h>
#import <KochavaTracker/KVATracker.h>
#import <KochavaTracker/KVATrackerProduct.h>



#pragma mark - EXPORT



//! Project version number for KochavaTracker.
FOUNDATION_EXPORT double KochavaTrackerVersionNumber;

//! Project version string for KochavaTracker.
FOUNDATION_EXPORT const unsigned char KochavaTrackerVersionString[];



#endif



