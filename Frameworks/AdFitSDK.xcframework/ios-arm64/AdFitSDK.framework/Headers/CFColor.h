//
//  SFColor.h
//  AdFitSDK
//
//  Created by kyle on 5/18/24.
//  Copyright © 2024 Kakao Corp. All rights reserved.
//

#ifndef SFColor_h
#define SFColor_h

#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint8_t r;
    uint8_t g;
    uint8_t b;
} CFColor;

void getHSV(CFColor color, double* h, double* s, double* v);
CFColor hsvToRGB(double h, double s, double v);

#endif /* SFColor_h */
