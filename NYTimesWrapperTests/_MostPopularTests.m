//
//  _MostPopularTests.m
//  NYTimesWrapper
//
//  Created by Dustin Eichler on 1/6/12.
//  Copyright (c) 2012. All rights reserved.
//

#import "_MostPopularTests.h"
#import "NYTimesMostPopular.h"
#import <UIKit/UIKit.h>

@implementation _MostPopularTests
@synthesize articles;

- (void)setUp
{
    [super setUp];
    articles = [[NYTimesWrapper alloc] initWithAPIKey:@"API-KEY"];
}

- (void)testMostPopular
{
    [articles.mostPopular setBaseResourceType:@"MOSTEMAILED"];
    NSString *baseResourceType = articles.mostPopular.baseResourceType;
    STAssertEqualObjects(@"mostemailed", baseResourceType, @"Should be either (mostemailed|mostshared|mostviewed)");
    
    [articles.mostPopular setBaseSection:@"ALL SECTIONS"];
    NSString *baseSection = articles.mostPopular.baseSection;
    STAssertEqualObjects(@"all-sections", baseSection, @"Should be either (all-sections| One or more section names, separated by semicolons)");
    
    [articles.mostPopular setBaseTimePeriod:@"7"];
    NSString *baseTimePeriod = articles.mostPopular.baseTimePeriod;
    STAssertEqualObjects(@"7", baseTimePeriod, @"Should be either (1 | 7 | 30), Corresponds to a day, a week or a month of content");
    
    [articles.mostPopular setBaseResourceType:@"MOSTSHARED"];
    [articles.mostPopular setBaseShareTypes:@"DIGG"];
    NSString *baseShareTypes = articles.mostPopular.baseShareTypes;
    STAssertEqualObjects(@"digg", baseShareTypes, @"Should be either (digg|email|facebook|mixx|myspace|permalink|timespeople|twitter|yahoobuzz)");
    
    [articles.mostPopular setBaseOffSet:@"40"];
    NSString *baseOffSet = articles.mostPopular.baseOffSet;
    STAssertEqualObjects(@"40", baseOffSet, @"Should be either (mostemailed|mostshared|mostviewed)");
    
    [articles.mostPopular setBaseFormat:@"JSON"];
    NSString *baseFormat = articles.mostPopular.baseFormat;
    STAssertEqualObjects(@"json", baseFormat, @"Should be either JSON or XML");
    
    [articles.mostPopular setBaseApiKey:@"API-KEY"];
    NSString *baseApiKey = articles.mostPopular.baseApiKey;
    STAssertEqualObjects(@"API-KEY", baseApiKey, @"Should be alphanumeric string");
}

- (void)testMostPopularConnection
{
    /**
        Main Request
     */
    
    NYTimesWrapper *nytimes = [[NYTimesWrapper alloc] initWithAPIKey:@"API-KEY"];
    /**
     Required
     */
    [nytimes.mostPopular setBaseSection:@"ALL SECTIONS"];
    [nytimes.mostPopular setBaseTimePeriod:@"7"];
    [nytimes.mostPopular setBaseApiKey:@"API-KEY"];
    /**
     Optional
     */
    [nytimes.mostPopular setBaseResourceType:@"MOSTEMAILED"];
    [nytimes.mostPopular setBaseShareTypes:@"DIGG"];
    [nytimes.mostPopular setBaseOffSet:@"40"];
    [nytimes.mostPopular setBaseFormat:@"JSON"];
    
    [NYTimesMostPopular asyncRequest:nytimes
                             success:^(NSData *data, NSURLResponse *response){
                                 
                                 NSString *string = [response.URL absoluteString];
                                 
                                 NSInteger timePeriod = [string rangeOfString:@"7"].location == NSNotFound;
                                 NSString *_timePeriod = [NSString stringWithFormat:@"%@", timePeriod ? @"NO" : @"YES"]; 
                                 STAssertEqualObjects(@"YES", _timePeriod, @"Should be either YES found or NO not found");
                                 
                                 NSInteger apiKey = [string rangeOfString:@"api-key"].location == NSNotFound;
                                 NSString *_apiKey = [NSString stringWithFormat:@"%@", apiKey ? @"NO" : @"YES"]; 
                                 STAssertEqualObjects(@"YES", _apiKey, @"Should be either YES found or NO not found");
                                 
                                 NSInteger resource = [string rangeOfString:@"mostemailed"].location == NSNotFound;
                                 NSString *_resource = [NSString stringWithFormat:@"%@", resource ? @"NO" : @"YES"]; 
                                 STAssertEqualObjects(@"YES", _resource, @"Should be either YES found or NO not found");
                                 
                                 NSInteger offset = [string rangeOfString:@"offset"].location == NSNotFound;
                                 NSString *_offset = [NSString stringWithFormat:@"%@", offset ? @"NO" : @"YES"]; 
                                 STAssertEqualObjects(@"YES", _offset, @"Should be either YES found or NO not found");
                                 
                                 NSInteger format = [string rangeOfString:@"json"].location == NSNotFound;
                                 NSString *_format = [NSString stringWithFormat:@"%@", format ? @"NO" : @"YES"]; 
                                 STAssertEqualObjects(@"YES", _format, @"Should be either YES found or NO not found");
                                 
                             }failure:^(NSData *data, NSError *error){
                                 NSLog(@"Errors %@", error);
                             }tag:@"mostpopular main request"];
}

@end
