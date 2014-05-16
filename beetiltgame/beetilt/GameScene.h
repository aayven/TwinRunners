//
//  GameScene.h
//  beetilt
//
//  Created by Ivan Borsa on 22/04/14.
//  Copyright (c) 2014 Weloux. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import "ContactManager.h"

@interface GameScene : SKScene<ContactManagerDelegate>

-(void)initEnvironment;

@end