//
//  BackgroundScroll.h
//  TestApp
//
//  Created by Tah Tatsumoto on 6/21/14.
//  Copyright (c) 2014 Project Umbrella. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BackgroundScroll : NSObject

/** The array containing the set of SKSpriteNode nodes representing the different backgrounds */
@property (nonatomic, strong) NSArray * backgrounds;

/** The array containing the set of duplicated background nodes that will appear when the background starts sliding out of the screen */
@property (nonatomic, strong) NSArray * clonedBackgrounds;

/** The array of speeds for every background */
@property (nonatomic, strong) NSArray * speeds;

/** Number of backgrounds in this parallax background set */
@property (nonatomic) NSUInteger numberOfBackgrounds;

/** The movement direction of the parallax backgrounds */
@property (nonatomic) PBParallaxBackgroundDirection direction;

/** The size of the parallax background set */
@property (nonatomic) CGSize size;

@end
