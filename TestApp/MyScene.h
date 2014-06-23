//
//  MyScene.h
//  TestApp
//

//  Copyright (c) 2014 Project Umbrella. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface MyScene : SKScene

@property (nonatomic) PBParallaxBackgroundDirection direction;

-(id)initWithSize:(CGSize)size andDirection: (PBParallaxBackgroundDirection) direction;

@end
