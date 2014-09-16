//
//  PlayingCard.h
//  Matchismo
//
//  Created by Larry Liu on 9/14/14.
//  Copyright (c) 2014 Larry Liu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card
@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;
@end
