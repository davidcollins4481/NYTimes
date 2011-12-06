//
//  NYTimesWrapper.h
//  NYTimesWrapper
//
//  Created by Dustin Eichler on 12/2/11.
//  Copyright (c) 2011. All rights reserved.
//

#import <Foundation/Foundation.h>

struct _ArticleStruct {
    NSString *format;
    NSString *query;
    NSString *facets;
    NSString *fields;
    NSString *offset;
    NSString *rank;
    NSString *startDate;
    NSString *endDate;
};

struct _BestSellerStruct {
    NSString *listName;
    NSString *date;
    NSString *offset;
    NSString *sortBy;
    NSString *sortOrder;
    NSString *format;
};

@interface NYTimesWrapper : NSObject
{
    NSString *apiKey;
    struct _ArticleStruct article;
    struct _BestSellerStruct bestSeller;
}

@property (nonatomic) struct _ArticleStruct article;
@property struct _BestSellerStruct bestSeller;

@property (nonatomic, retain) NSString *apiKey;

- (id)initWithAPIKey:(NSString *)key;
- (void)setFormat:(NSString *)string;

@end
