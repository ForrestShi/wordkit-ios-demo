/*
 * Copyright Wordnik, Inc. 2010. All rights reserved.
 */


#import <Foundation/Foundation.h>
#import <Wordnik/WNRelatedWordType.h>

@interface WNRelatedWord : NSObject {
@private
    /** The word's string value. */
    NSString *_wordString;

    /** The word's relation type. */
    WNRelatedWordType *_relationType;
}

+ (id) relatedWordWithWordString: (NSString *) wordString relationType: (WNRelatedWordType *) relationType;
- (id) initWithWordString: (NSString *) wordString relationType: (WNRelatedWordType *) relationType;

/** The word's string value. */
@property(nonatomic, readonly) NSString *wordString;

/** The word's relation to the original word. */
@property(nonatomic, readonly) WNRelatedWordType *relationType;

@end
