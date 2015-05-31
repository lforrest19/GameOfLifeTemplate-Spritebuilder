//
//  CCSprite+Grid.h
//  GameOfLife
//
//  Created by Leslie Forrest on 31/05/2015.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface CCSprite (Grid)

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

@end