//
//  KVAAdNetwork.h
//  KochavaAdNetwork
//
//  Created by John Bushnell on 8/20/20.
//  Copyright © 2020 - 2022 Kochava, Inc.  All rights reserved.
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
);



#endif



