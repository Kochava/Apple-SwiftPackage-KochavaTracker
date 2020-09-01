//
//  KVAAppTrackingTransparency.h
//
//  Created by John Bushnell on 7/13/20.
//  Copyright © 2020 Kochava, Inc.  All rights reserved.
//



#ifndef KVAAppTrackingTransparency_h
#define KVAAppTrackingTransparency_h



#pragma mark - IMPORT



#if !TARGET_OS_WATCH
#import <AppTrackingTransparency/AppTrackingTransparency.h>
#endif

#ifdef KOCHAVA_FRAMEWORK
#import <KochavaCore/KochavaCore.h>
#else
#import "KVAAsForContextObjectProtocol.h"
#import "KVAConfigureWithObjectProtocol.h"
#import "KVAFromObjectProtocol.h"
#endif



#pragma mark - INTERFACE



/*!
 @class KVAAppTrackingTransparency
 
 @brief A controller for working with appTrackingTransparency.
 
 @author John Bushnell
 
 @copyright 2016 - 2020 Kochava, Inc.
 */
@interface KVAAppTrackingTransparency : NSObject <KVAAsForContextObjectProtocol, KVAConfigureWithObjectProtocol, KVAFromObjectProtocol>



#pragma mark - PARAMETERS



/*!
 @property authorizationStatusWaitTimeInterval
 
 @brief A time interval to wait for the request for tracking authorization before proceeding to send the install.
 
 @discussion This provides time to wait to obtain the authorization necessary to collect the IDFA.
 */
@property (readwrite) NSTimeInterval authorizationStatusWaitTimeInterval;



#pragma mark - GENERAL



/*!
 @method - authorizationDidComplete
 
 @brief Notifies that a request for tracking authorization did complete.
 */
- (void)authorizationDidComplete NS_SWIFT_NAME(authorizationDidComplete());



#if !TARGET_OS_WATCH

/*!
 @method - authorizationDidCompleteWithStatus:
 
 @brief Notifies that a request for tracking authorization did complete.
 
 @param authorizationStatus The provided authorization status.
 */
- (void)authorizationDidCompleteWithStatus:(ATTrackingManagerAuthorizationStatus)authorizationStatus API_AVAILABLE(ios(14.0), macos(11.0), macCatalyst(14.0), tvos(14.0)) NS_SWIFT_NAME(authorizationDidComplete(withStatus:));

#endif



@end



#endif



