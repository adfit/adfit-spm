//
//  ColorExtractBridge.h
//  AdFitSDK
//
//  Created by kyle on 5/18/24.
//  Copyright © 2024 Kakao Corp. All rights reserved.
//

#ifndef ColorExtractBridge_h
#define ColorExtractBridge_h

#import <Foundation/Foundation.h>
#include "CFColor.h"

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#else
#import <AppKit/AppKit.h>
#endif


@interface ColorExtractBridge : NSObject

- (NSArray<NSValue *> *)getColorsFromImage:(CGImageRef)image
                                      minS:(int)minS
                                      maxS:(int)maxS
                                      minV:(int)minV
                                      maxV:(int)maxV
                                      minAreaRatio:(double)minAreaRatio
                                      inspectPixelsBy:(int)inspectPixelsBy
                                      maxOutputSize:(int)maxOutputSize
                                      fill:(BOOL)fill
                                    adjust:(BOOL)adjust;

@end

#endif /* ColorExtractBridge_h */
