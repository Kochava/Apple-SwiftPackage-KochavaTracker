//
//  KVAAdNetwork.h
//  KochavaTracker
//
//  Created by John Bushnell on 8/20/20.
//  Copyright © 2020 - 2023 Kochava, Inc.  All rights reserved.
//



#ifndef KVAAdNetwork_h
#define KVAAdNetwork_h



#pragma mark - CLASS



@class KVAAdNetwork;



#pragma mark - Typealiases



/*!
 @brief A closure which is called when the SKAdNetwork registerAppForAdNetworkAttribution API has been called.

 @discussion Your code should assume that if some action needs to be performed on the main queue that it should first dispatch asynchronously to it.
 */
typedef void (^ KVAAdNetworkDidRegisterAppForAttributionBlock)
(
    KVAAdNetwork * _Nonnull adNetwork
 ) DEPRECATED_MSG_ATTRIBUTE("renamed to 'KVAAdNetwork.Closure_DidRegisterAppForAttribution'.  Use 'KVAAdNetwork.Closure_DidRegisterAppForAttribution' instead.  If in Objective-C then describe the closure through its low-level format instead.  Example: void (^closure_didRegisterAppForAttribution)(KVAAdNetwork * _Nonnull adNetwork) = ^(KVAAdNetwork * _Nonnull adNetwork) { /* ... */ };");



#endif



