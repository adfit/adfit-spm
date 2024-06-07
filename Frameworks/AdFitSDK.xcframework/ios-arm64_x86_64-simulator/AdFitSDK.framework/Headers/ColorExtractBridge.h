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

#if TARGET_OS_IPHONE
- (NSArray<NSValue *> *)getColorsFromImage:(UIImage *)image;
#else
- (NSArray<NSValue *> *)getColorsFromImage:(NSImage *)image;
#endif



@end

#endif /* ColorExtractBridge_h */
