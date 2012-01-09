//
//  _MovieReviewsTests.m
//  NYTimesWrapper
//
//  Created by Dustin Eichler on 1/6/12.
//  Copyright (c) 2012. All rights reserved.
//

#import "_MovieReviewsTests.h"
#import <UIKit/UIKit.h>

@implementation _MovieReviewsTests
@synthesize articles;

- (void)setUp
{
    [super setUp];
    articles = [[NYTimesWrapper alloc] initWithAPIKey:@"API-KEY"];
}

- (void)testMovieReviewsReviewsByKeyWord
{
    [articles.movieReviews setReviewsByKeyWordQuery:@"28 days later"];
    NSString *reviewsByKeyWordQuery = articles.movieReviews.reviewsByKeyWordQuery;
    STAssertEqualObjects(@"28+days+later", reviewsByKeyWordQuery, @"Should be joined by +");
    
    [articles.movieReviews setReviewsByKeyWordCriticsPick:@"YES"];
    NSString *reviewsByKeyWordCriticsPick = articles.movieReviews.reviewsByKeyWordCriticsPick;
    STAssertEqualObjects(@"Y", reviewsByKeyWordCriticsPick, @"Should be either YES or NO");
    
    [articles.movieReviews setReviewsByKeyWordThousandBest:@"YES"];
    NSString *reviewsByKeyWordThousandBest = articles.movieReviews.reviewsByKeyWordThousandBest;
    STAssertEqualObjects(@"Y", reviewsByKeyWordThousandBest, @"Should be either YES or NO");
    
    [articles.movieReviews setReviewsByKeyWordDvd:@"NO"];
    NSString *reviewsByKeyWordDvd = articles.movieReviews.reviewsByKeyWordDvd;
    STAssertEqualObjects(@"N", reviewsByKeyWordDvd, @"Should be either YES or NO");
    
    [articles.movieReviews setReviewsByKeyWordReviewer:@"Manohla Dargis"];
    NSString *reviewsByKeyWordReviewer = articles.movieReviews.reviewsByKeyWordReviewer;
    STAssertEqualObjects(@"manohla-dargis", reviewsByKeyWordReviewer, @"Should be joined by dashes");
    
    [articles.movieReviews setReviewsByKeyWordPublicationDate:@"2012-01-02"];
    NSString *reviewsByKeyWordPublicationDate = articles.movieReviews.reviewsByKeyWordPublicationDate;
    STAssertEqualObjects(@"2012-01-02", reviewsByKeyWordPublicationDate, @"Should be YYYY-MM-DD format");
    
    [articles.movieReviews setReviewsByKeyWordOpeningDate:@"2012-01-02"];
    NSString *reviewsByKeyWordOpeningDate = articles.movieReviews.reviewsByKeyWordOpeningDate;
    STAssertEqualObjects(@"2012-01-02", reviewsByKeyWordOpeningDate, @"Should be YYYY-MM-DD format");
    
    [articles.movieReviews setReviewsByKeyWordOffSet:@"40"];
    NSString *reviewsByKeyWordOffSet = articles.movieReviews.reviewsByKeyWordOffSet;
    STAssertEqualObjects(@"40", reviewsByKeyWordOffSet, @"Should be multiple of 20");
    
    [articles.movieReviews setReviewsByKeyWordOrder:@"BY TITLE"];
    NSString *reviewsByKeyWordOrder = articles.movieReviews.reviewsByKeyWordOrder;
    STAssertEqualObjects(@"by-title", reviewsByKeyWordOrder, @"Should be either (by-title|by-publication-date|by-opening-date|by-dvd-release-date)");
    
    [articles.movieReviews setReviewsByKeyWordFormat:@"JSON"];
    NSString *reviewsByKeyWordFormat = articles.movieReviews.reviewsByKeyWordFormat;
    STAssertEqualObjects(@"json", reviewsByKeyWordFormat, @"Should be either JSON or XML");
    
    [articles.movieReviews setReviewsByKeyWordApiKey:@"API-KEY"];
    NSString *reviewsByKeyWordApiKey = articles.movieReviews.reviewsByKeyWordApiKey;
    STAssertEqualObjects(@"API-KEY", reviewsByKeyWordApiKey, @"Should be alphanumeric string");
}

- (void)testMovieReviewsReviewsAndNYTCriticsPicks
{
    [articles.movieReviews setReviewsAndNYTCriticsPicksResourceType:@"DVD PICKS"];
    NSString *reviewsAndNYTCriticsPicksResourceType = articles.movieReviews.reviewsAndNYTCriticsPicksResourceType;
    STAssertEqualObjects(@"dvd-picks", reviewsAndNYTCriticsPicksResourceType, @"Should be either (all|picks|dvd-picks)");
    
    [articles.movieReviews setReviewsAndNYTCriticsPicksOffSet:@"40"];
    NSString *reviewsAndNYTCriticsPicksOffSet = articles.movieReviews.reviewsAndNYTCriticsPicksOffSet;
    STAssertEqualObjects(@"40", reviewsAndNYTCriticsPicksOffSet, @"Should be multiple of 20");
    
    [articles.movieReviews setReviewsAndNYTCriticsPicksOrder:@"BY TITLE"];
    NSString *reviewsAndNYTCriticsPicksOrder = articles.movieReviews.reviewsAndNYTCriticsPicksOrder;
    STAssertEqualObjects(@"by-title", reviewsAndNYTCriticsPicksOrder, @"Should be (by-title|by-publication-date|by-opening-date |by-dvd-release-date)");
    
    [articles.movieReviews setReviewsAndNYTCriticsPicksFormat:@"JSON"];
    NSString *reviewsAndNYTCriticsPicksFormat = articles.movieReviews.reviewsAndNYTCriticsPicksFormat;
    STAssertEqualObjects(@"json", reviewsAndNYTCriticsPicksFormat, @"Should be either JSON or XML");
    
    [articles.movieReviews setReviewsAndNYTCriticsPicksApiKey:@"API-KEY"];
    NSString *reviewsAndNYTCriticsPicksApiKey = articles.movieReviews.reviewsAndNYTCriticsPicksApiKey;
    STAssertEqualObjects(@"API-KEY", reviewsAndNYTCriticsPicksApiKey, @"Should be alphanumeric string");
}

- (void)testMovieReviewsReviewsByReviewers
{
    [articles.movieReviews setReviewsByReviewerCriticsPick:@"YES"];
    NSString *reviewsByReviewerCriticsPick = articles.movieReviews.reviewsByReviewerCriticsPick;
    STAssertEqualObjects(@"Y", reviewsByReviewerCriticsPick, @"Should be ");
    
    [articles.movieReviews setReviewsByReviewerReviewerName:@"Manohla Dargis"];
    NSString *reviewsByReviewerReviewerName = articles.movieReviews.reviewsByReviewerReviewerName;
    STAssertEqualObjects(@"manohla-dargis", reviewsByReviewerReviewerName, @"Should be joined by dashes");
    
    [articles.movieReviews setReviewsByReviewerOffSet:@"40"];
    NSString *reviewsByReviewerOffSet = articles.movieReviews.reviewsByReviewerOffSet;
    STAssertEqualObjects(@"40", reviewsByReviewerOffSet, @"Should be multiple of 20");
    
    [articles.movieReviews setReviewsByReviewerOrder:@"BY TITLE"];
    NSString *reviewsByReviewerOrder = articles.movieReviews.reviewsByReviewerOrder;
    STAssertEqualObjects(@"by-title", reviewsByReviewerOrder, @"Should be either (by-title|by-publication-date|by-opening-date|by-dvd-release-date)");
    
    [articles.movieReviews setReviewsByReviewerFormat:@"JSON"];
    NSString *reviewsByReviewerFormat = articles.movieReviews.reviewsByReviewerFormat;
    STAssertEqualObjects(@"json", reviewsByReviewerFormat, @"Should be either JSON or XML");
    
    [articles.movieReviews setReviewsByReviewerApiKey:@"API-KEY"];
    NSString *reviewsByReviewerApiKey = articles.movieReviews.reviewsByReviewerApiKey;
    STAssertEqualObjects(@"API-KEY", reviewsByReviewerApiKey, @"Should be alphanumeric string");
}

- (void)testMovieReviewsReviewerDetails
{
    [articles.movieReviews setReviewerDetailsResourceType:@"FULL TIME"];
    NSString *reviewerDetailsResourceType = articles.movieReviews.reviewerDetailsResourceType;
    STAssertEqualObjects(@"full-time", reviewerDetailsResourceType, @"Should be either (all | full-time | part-time | reviewer | [reviewer-name])"); 
    
    [articles.movieReviews setReviewerDetailsFormat:@"JSON"];
    NSString *reviewerDetailsFormat = articles.movieReviews.reviewerDetailsFormat;
    STAssertEqualObjects(@"json", reviewerDetailsFormat, @"Should be either JSON or XML");
    
    [articles.movieReviews setReviewerDetailsApiKey:@"API-KEY"];
    NSString *reviewerDetailsApiKey = articles.movieReviews.reviewerDetailsApiKey;
    STAssertEqualObjects(@"API-KEY", reviewerDetailsApiKey, @"Should be alphanumeric string"); 
}

@end
