//
//  BIDConstants.h
//  QuartzFun
//
//  Created by Mahaboobsab Nadaf on 03/06/16.
//  Copyright © 2016 com.NeoRays. All rights reserved.
//

#ifndef BIDConstants_h
#define BIDConstants_h


#ifndef QuartzFun_BIDConstants_h
#define QuartzFun_BIDConstants_h
typedef NS_ENUM(NSInteger, ShapeType) {
    kLineShape = 0,
    kRectShape,
    kEllipseShape,
    kImageShape
};
typedef NS_ENUM(NSInteger, ColorTabIndex) {
    kRedColorTab = 0,
    kBlueColorTab,
    kYellowColorTab,
    kGreenColorTab,
    kRandomColorTab
};
#define degreesToRadian(x) (M_PI * (x) / 180.0)
#endif
#endif
