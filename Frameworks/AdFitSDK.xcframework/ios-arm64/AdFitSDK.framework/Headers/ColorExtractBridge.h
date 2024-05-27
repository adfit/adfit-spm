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
#import <UIKit/UIKit.h>
#include "SFColor.h"

@interface ColorExtractBridge : NSObject

- (NSArray<NSValue *> *)getColorsFromImage:(UIImage *)image;

@end

#endif /* ColorExtractBridge_h */
