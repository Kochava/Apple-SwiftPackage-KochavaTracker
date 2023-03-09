//
//  KVADeeplink.h
//  KochavaTracker
//
//  Created by John Bushnell on 10/14/19.
//  Copyright © 2019 - 2023 Kochava, Inc.  All rights reserved.
//



#ifndef KVADeeplink_h
#define KVADeeplink_h



#pragma mark - CLASS



@class KVADeeplink;



#pragma mark - Typealiases



/*!
 @typedef KVADeeplinkProcessCompletionHandler
 
 @brief A closure to be called when processing is complete.
 */
typedef void (^ KVADeeplinkProcessCompletionHandler)
(
    KVADeeplink * _Nonnull deeplink
) DEPRECATED_MSG_ATTRIBUTE("renamed to 'KVADeeplink.Closure_Process_DidComplete'.  Use 'KVADeeplink.Closure_Process_DidComplete' instead.  If in Objective-C then describe the closure through its low-level format instead.  Example: void (^closure_process_didComplete)(KVADeeplink * _Nonnull deeplink) = ^(KVADeeplink * _Nonnull deeplink) { /* ... */ };");



#endif



