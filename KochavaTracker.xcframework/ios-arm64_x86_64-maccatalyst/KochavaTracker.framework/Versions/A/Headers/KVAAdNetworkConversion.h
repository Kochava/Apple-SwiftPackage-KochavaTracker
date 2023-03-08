//
//  KVAAdNetworkConversion.h
//  KochavaAdNetwork
//
//  Created by John Bushnell on 8/20/20.
//  Copyright © 2020 - 2022 Kochava, Inc. All rights reserved.
//



#ifndef KVAAdNetworkConversion_h
#define KVAAdNetworkConversion_h



#pragma mark - CLASS



@class KVAAdNetworkConversion;
@class KVAAdNetworkConversionResult;



#pragma mark - Typealiases



/*!
 @typedef KVAAdNetworkConversionDidUpdateValueBlock
 
 @brief A closure which is called when the SKAdNetwork updateConversionValue API has been called.

 @discussion Your code should assume that if some action needs to be performed on the main queue that it should first dispatch asynchronously to it.
 */
typedef void (^ KVAAdNetworkConversionDidUpdateValueBlock)
(
    KVAAdNetworkConversion * _Nonnull conversion,
    KVAAdNetworkConversionResult * _Nonnull result
);



#endif



