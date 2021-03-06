//
//  NYTimesBestSeller.h
//  NYTimesWrapper
//
//  Created by Dustin Eichler on 12/5/11.
//  Copyright (c) 2011. All rights reserved.
//

#import "NYTimesWrapperBase.h"
#import "NYTimesWrapper.h"

@interface NYTimesBestSeller : NYTimesWrapperBase
{
    NSString *tag;
}

@property (nonatomic, retain) NSString *tag;

+ (void)asyncRequest:(NSObject *)obj 
             success:(NYTimesNSURLConnectionSuccessBlock)successBlock_ 
             failure:(NYTImesErrorBlock)failureBlock_ 
                 tag:(NSString *)t;

@end
