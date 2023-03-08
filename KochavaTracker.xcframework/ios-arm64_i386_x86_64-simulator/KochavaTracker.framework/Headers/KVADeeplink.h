//
//  KVADeeplink.h
//  KochavaTracker
//
//  Created by John Bushnell on 10/14/19.
//  Copyright © 2019 - 2022 Kochava, Inc. All rights reserved.
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
);



#endif



