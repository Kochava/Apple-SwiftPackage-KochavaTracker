//
//  KVAAdNetworkConversion.h
//  KochavaTracker
//
//  Created by John Bushnell on 8/20/20.
//  Copyright © 2020 - 2023 Kochava, Inc.  All rights reserved.
//



#ifndef KVAAdNetworkConversion_h
#define KVAAdNetworkConversion_h



#pragma mark - CLASS



@class KVAAdNetworkConversion;
@class KVAAdNetworkConversionResult;



#pragma mark - Typealiases



/*!
 @typedef KVAAdNetworkConversionDidUpdateValueBlock
 
 @brief A closure which is called when the SKAdNetwork updatePostbackConversionValue API has been called.

 @discussion Your code should assume that if some action needs to be performed on the main queue that it should first dispatch asynchronously to it.
 */
typedef void (^ KVAAdNetworkConversionDidUpdateValueBlock)
(
    KVAAdNetworkConversion * _Nonnull conversion,
    KVAAdNetworkConversionResult * _Nonnull result
 ) DEPRECATED_MSG_ATTRIBUTE("renamed to 'KVAAdNetworkConversion.Closure_DidUpdatePostbackValue'.  Use 'KVAAdNetworkConversion.Closure_DidUpdatePostbackValue' instead.  If in Objective-C then describe the closure through its low-level format instead.  Example: void (^closure_didUpdatePostbackValue)(KVAAdNetworkConversion * _Nonnull conversion, KVAAdNetworkConversionResult * _Nonnull result) = ^(KVAAdNetworkConversion * _Nonnull conversion, KVAAdNetworkConversionResult * _Nonnull result) { /* ... */ };");



#endif



