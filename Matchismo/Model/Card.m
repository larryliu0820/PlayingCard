//
//  Card.m
//  Matchismo
//
//  Created by Larry Liu on 9/14/14.
//  Copyright (c) 2014 Larry Liu. All rights reserved.
//

#import "Card.h"

@implementation Card

- (int)match:(NSArray *)otherCards {
    int score = 0;
    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }
    return score;
}
@end
