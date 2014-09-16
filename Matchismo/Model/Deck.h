//
//  Deck.h
//  Matchismo
//
//  Created by Larry Liu on 9/14/14.
//  Copyright (c) 2014 Larry Liu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
