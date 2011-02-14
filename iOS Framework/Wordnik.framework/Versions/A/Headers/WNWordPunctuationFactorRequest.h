/*
 * Copyright Wordnik, Inc. 2010. All rights reserved.
 */

#import <Foundation/Foundation.h>

#import <Wordnik/WNWordElementRequest.h>

@interface WNWordPunctuationFactorRequest : NSObject <WNWordElementRequest> {
@private
}

+ (id) request;
- (id) init;

@end
