//
//  NYTimesWrapper.h
//  NYTimesWrapper
//
//  Created by Dustin Eichler on 12/2/11.
//  Copyright (c) 2011. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark -
#pragma mark CommonParameters

struct _RecentComments {
    NSString *apiKey;
    NSString *offSet;
    NSString *forceReplies;
    NSString *sort;
    NSString *format;
};
typedef struct _RecentComments recentComments;

struct _RandomComments {
    NSString *apiKey;
    NSString *format;
};
typedef struct _RandomComments randomComments;

struct _CommentsByDate {
    NSString *date;
    NSString *apiKey;
    NSString *sort;
    NSString *offSet;
    NSString *format;
};
typedef struct _CommentsByDate commentsByDate;

struct _CommentsByUserID {
    NSString *userId;
    NSString *apiKey;
    NSString *offSet;
    NSString *sort;
    NSString *format;
};
typedef struct _CommentsByUserID commentsByUserID;

struct _CommentsByURL {
    NSString *matchType;
    NSString *urlToMatch;
    NSString *apiKey;
    NSString *offSet;
    NSString *sort;
    NSString *format;
};
typedef struct _CommentsByURL commentsByURL;


@interface _Community : NSObject {
    struct _RecentComments recentComments;
    struct _RandomComments randomComments;
    struct _CommentsByDate commentsByDate;
    struct _CommentsByUserID commentsByUserID;
    struct _CommentsByURL commentsByURL;
}

@property struct _RecentComments recentComments;
@property struct _RandomComments randomComments;
@property struct _CommentsByDate commentsByDate;
@property struct _CommentsByUserID commentsByUserID;
@property struct _CommentsByURL commentsByURL;

#pragma mark -
#pragma mark RecentComments

- (NSString *)communityRecentCommentsOffSet;
- (void)setCommunityRecentCommentsOffSet:(NSString *)offSet;
- (NSString *)communityRecentCommentsForceReplies;
- (void)setCommunityRecentCommentsForceReplies:(NSString *)forceReplies;
- (NSString *)communityRecentCommentsSort;
- (void)setCommunityRecentCommentsSort:(NSString *)sort;
- (NSString *)communityRecentCommentsFormat;
- (void)setCommunityRecentCommentsFormat:(NSString *)format;
- (NSString *)communityRecentCommentsApiKey;
- (void)setCommunityRecentCommentsApiKey:(NSString *)apiKey;

#pragma mark -
#pragma mark RandomComments

- (NSString *)communityRandomCommentsApiKey;
- (void)setCommunityRandomCommentsApiKey:(NSString *)apiKey;
- (NSString *)communityRandomCommentsFormat;
- (void)setCommunityRandomCommentsFormat:(NSString *)format;

#pragma mark -
#pragma mark CommentsByDate

- (NSString *)communityCommentsByDateDate;
- (void)setCommunityCommentsByDateDate:(NSString *)date;
- (NSString *)communityCommentsByDateApiKey;
- (void)setCommunityCommentsByDateApiKey:(NSString *)apiKey;
- (NSString *)communityCommentsByDateSort;
- (void)setCommunityCommentsByDateSort:(NSString *)sort;
- (NSString *)communityCommentsByDateOffSet;
- (void)setCommunityCommentsByDateOffSet:(NSString *)offSet;
- (NSString *)communityCommentsByDateFormat;
- (void)setCommunityCommentsByDateFormat:(NSString *)format;

#pragma mark -
#pragma mark CommentsByUserID

- (NSString *)communityCommentsByUserIdUserId;
- (void)setCommunityCommentsByUserIdUserId:(NSString *)userId;
- (NSString *)communityCommentsByUserIdApiKey;
- (void)setCommunityCommentsByUserIdApiKey:(NSString *)apiKey;
- (NSString *)communityCommentsByUserIdOffSet;
- (void)setCommunityCommentsByUserIdOffSet:(NSString *)offSet;
- (NSString *)communityCommentsByUserIdSort;
- (void)setCommunityCommentsByUserIdSort:(NSString *)sort;
- (NSString *)communityCommentsByUserIdFormat;
- (void)setCommunityCommentsByUserIdFormat:(NSString *)format;

#pragma mark -
#pragma mark CommentsByURL

- (NSString *)communityCommentsByURLMatchType;
- (void)setCommunityCommentsByURLMatchType:(NSString *)matchType;
- (NSString *)communityCommentsByURLUrlToMatch;
- (void)setCommunityCommentsByURLUrlToMatch:(NSString *)urlToMatch;
- (NSString *)communityCommentsByURLApiKey;
- (void)setCommunityCommentsByURLApiKey:(NSString *)apiKey;
- (NSString *)communityCommentsByURLOffSet;
- (void)setCommunityCommentsByURLOffSet:(NSString *)offSet;
- (NSString *)communityCommentsByURLSort;
- (void)setCommunityCommentsByURLSort:(NSString *)sort;
- (NSString *)communityCommentsByURLFormat;
- (void)setCommunityCommentsByURLFormat:(NSString *)format;

@end

#pragma mark -
#pragma mark CampaignFinance

struct _CandidateSearch {
    NSString *cycle;
    NSString *searchParameter;
    NSString *lastName;
    NSString *firstName;
    NSString *offSet;
    NSString *format;
};
typedef struct _CandidateSearch candidateSearch;

struct _CandidateDetails {
    NSString *cycle;
    NSString *candidateId;
    NSString *format;
};
typedef struct _CandidateDetails candidateDetails;

struct _CandidateLeaders {
    NSString *cycle;
    NSString *category;
    NSString *format;
};
typedef struct _CandidateLeaders candidateLeaders;

// TODO: DWE: Need to add District when House is selected.
struct _StateCandidates {
    NSString *cycle;
    NSString *state;
    NSString *chamber;
    NSString *format;
};
typedef struct _StateCandidates stateCandidates;

struct _NewCandidates {
    NSString *cycle;
    NSString *format;
};
typedef struct _NewCandidates newCandidates;

struct _CommitteeSearch {
    NSString *cycle;
    NSString *name;
    NSString *format;
};
typedef struct _CommitteeSearch committeeSearch;

struct _CommitteeDetails {
    NSString *cycle;
    NSString *committeeId;
    NSString *format;
};
typedef struct _CommitteeDetails committeeDetails;

struct _NewCommittee {
    NSString *cycle;
    NSString *format;
};
typedef struct _NewCommittee newCommittee;    

struct _CommitteeContributions {
    NSString *cycle;
    NSString *committeeId;
    NSString *offset;
    NSString *format;
};
typedef struct _CommitteeContributions committeeContributions;

struct _CommitteeContributionsTo {
    NSString *cycle;
    NSString *candidateId;
    NSString *committeeId;
    NSString *format;
};
typedef struct _CommitteeContributionsTo committeeContributionsTo;

struct _CommitteeFilings {
    NSString *cycle;
    NSString *committeeId;
    NSString *format;
};
typedef struct _CommitteeFilings committeeFilings;

struct _LeadershipCommittee {
    NSString *cycle;
    NSString *format;
};
typedef struct _LeadershipCommittee leadershipCommittee;

struct _ElectronicFilingsByDate {
    NSString *cycle;
    NSString *date;
    NSString *format;
};
typedef struct _ElectronicFilingsByDate electronicFilingsByDate;

struct _FormTypes {
    NSString *cycle;
    NSString *format;
};
typedef struct _FormTypes formTypes;

struct _FilingsByType {
    NSString *fields;
    NSString *filingType;
    NSString *format;
};
typedef struct _FilingsByType filingsByType;

struct _PresCandidateTotals {
    NSString *cycle;
    NSString *format;
};
typedef struct _PresCandidateTotals presCandidateTotals;

struct _PresCAndidateDetails {
    NSString *cycle;
    NSString *candidateNameOrCommitteeId;
    NSString *format;
};
typedef struct _PresCAndidateDetails presCAndidateDetails;

struct _PresStateAndZipTotals {
    NSString *cycle;
    NSString *resourceType;
    NSString *stateAbbr;
    NSString *format;
};
typedef struct _PresStateAndZipTotals presStateAndZipTotals;

struct _PresDonorInformation {
    NSString *cycle;
    NSString *searchParameter;
    NSString *lastName;
    NSString *zipCode;
    NSString *firstName;
    NSString *offSet;
    NSString *format;
};
typedef struct _PresDonorInformation presDonorInformation;

@interface _CampaignFinance : NSObject
{
    struct _CandidateSearch candidateSearch;
    struct _CandidateDetails candidateDetails;
    struct _CandidateLeaders candidateLeaders;
    struct _StateCandidates stateCandidates;
    struct _NewCandidates newCandidates;
    struct _CommitteeSearch committeeSearch;
    struct _CommitteeDetails committeeDetails;
    struct _NewCommittee newCommittee;
    struct _CommitteeContributions committeeContributions;
    struct _CommitteeContributionsTo committeeContributionsTo;
    struct _CommitteeFilings committeeFilings;
    struct _LeadershipCommittee leadershipCommittee;
    struct _ElectronicFilingsByDate electronicFilingsByDate;
    struct _FormTypes formTypes;
    struct _FilingsByType filingsByType;
    struct _PresCandidateTotals presCandidateTotals;
    struct _PresCAndidateDetails presCAndidateDetails;
    struct _PresStateAndZipTotals presStateAndZipTotals;
    struct _PresDonorInformation presDonorInformation;
}

@property struct _CandidateSearch candidateSearch;
@property struct _CandidateDetails candidateDetails;
@property struct _CandidateLeaders candidateLeaders;
@property struct _StateCandidates stateCandidates;
@property struct _NewCandidates newCandidates;
@property struct _CommitteeSearch committeeSearch;
@property struct _CommitteeDetails committeeDetails;
@property struct _NewCommittee newCommittee;
@property struct _CommitteeContributions committeeContributions;
@property struct _CommitteeContributionsTo committeeContributionsTo;
@property struct _CommitteeFilings committeeFilings;
@property struct _LeadershipCommittee leadershipCommittee;
@property struct _ElectronicFilingsByDate electronicFilingsByDate;
@property struct _FormTypes formTypes;
@property struct _FilingsByType filingsByType;
@property struct _PresCandidateTotals presCandidateTotals;
@property struct _PresCAndidateDetails presCAndidateDetails;
@property struct _PresStateAndZipTotals presStateAndZipTotals;
@property struct _PresDonorInformation presDonorInformation;

- (void)checkValuesOfStructsUsingBlock:(void (^)(int i, NSUInteger idx, BOOL *stop))block;

#pragma mark -
#pragma mark CandidateSearch

- (NSString *)candidateSearchCycle;
- (void)setCandidateSearchCycle:(NSString *)cycle;

// TODO: DWE: What is CandidateSearchParameter? I think this was a mistake. Delete?
- (NSString *)candidateSearchSearchParameter;
- (void)setCandidateSearchSearchParameter:(NSString *)searchParameter;

- (NSString *)candidateSearchLastName;
- (void)setCandidateSearchLastName:(NSString *)lastName;

// TODO: DWE: Why is this in here. Not in the spec. Delete?
- (NSString *)candidateSearchFirstName;
- (void)setCandidateSearchFirstName:(NSString *)firstName;

// TODO: DWE: Why is this in here. Not in the spec. Delete?
- (NSString *)candidateSearchOffSet;
- (void)setCandidateSearchOffSet:(NSString *)offset;

- (NSString *)candidateSearchFormat;
- (void)setCandidateSearchFormat:(NSString *)format;

#pragma mark -
#pragma mark CandidateDetails

- (NSString *)candidateDetailsCycle;
- (void)setCandidateDetailsCycle:(NSString *)cycle;
- (NSString *)candidateDetailCandidateId;
- (void)setCandidateDetailCandidateId:(NSString *)candidateId;
- (NSString *)candidateDetailsFormat;
- (void)setCandidateDetailsFormat:(NSString *)format;

#pragma mark - 
#pragma mark CandidateLeaders

- (NSString *)candidateLeadersCycle;
- (void)setCandidateLeadersCycle:(NSString *)cycle;
- (NSString *)candidateLeadersCategory;
- (void)setCandidateLeadersCategory:(NSString *)category;
- (NSString *)candidateLeadersFormat;
- (void)setCandidateLeadersFormat:(NSString *)format;

#pragma mark -
#pragma mark StateCandidates

- (NSString *)stateCandidatesCycle;
- (void)setStateCandidatesCycle:(NSString *)cycle;
- (NSString *)stateCandidatesState;
- (void)setStateCandidatesState:(NSString *)state;
- (NSString *)stateCandidatesChamber;
- (void)setStateCandidatesChamber:(NSString *)chamber;
- (NSString *)stateCandidatesFormat;
- (void)setStateCandidatesFormat:(NSString *)format;

#pragma mark -
#pragma mark NewCandidates

- (NSString *)newCandidatesCycle;
- (void)setNewCandidatesCycle:(NSString *)cycle;
- (NSString *)newCandidatesFormat;
- (void)setNewCandidatesFormat:(NSString *)format;

#pragma mark -
#pragma mark CommitteeSearch

- (NSString *)committeeSearchCycle;
- (void)setCommitteeSearchCycle:(NSString *)cycle;
- (NSString *)committeeSearchName;
- (void)setCommitteeSearchName:(NSString *)name;
- (NSString *)committeeSearchFormat;
- (void)setCommitteeSearchFormat:(NSString *)format;

#pragma mark -
#pragma mark CommitteeDetails

- (NSString *)committeeDetailsCycle;
- (void)setCommitteeDetailsCycle:(NSString *)cycle;
- (NSString *)committeeDetailsCommitteeId;
- (void)setCommitteeDetailsCommitteeId:(NSString *)committeeId;
- (NSString *)committeeDetailsFormat;
- (void)setCommitteeDetailsFormat:(NSString *)format;

#pragma mark -
#pragma mark NewCommittee

- (NSString *)newCommitteeCycle;
- (void)setNewCommitteeCycle:(NSString *)cycle;
- (NSString *)newCommitteeFormat;
- (void)setNewCommitteeFormat:(NSString *)format;

#pragma mark -
#pragma CommitteeContributions

- (NSString *)committeeContributionsCycle;
- (void)setCommitteeContributionsCycle:(NSString *)cycle;
- (NSString *)committeeContributionsCommitteeId;
- (void)setCommitteeContributionsCommitteeId:(NSString *)committeeId;
- (NSString *)committeeContributionsOffset;
- (void)setCommitteeContributionsOffset:(NSString *)offSet;
- (NSString *)committeeContributionsFormat;
- (void)setCommitteeContributionsFormat:(NSString *)format;

#pragma mark -
#pragma mark CommitteeContributionsTo

- (NSString *)committeeContributionsToCycle;
- (void)setCommitteeContributionsToCycle:(NSString *)cycle;
- (NSString *)committeeContributionsToCandidateId;
- (void)setCommitteeContributionsToCandidateId:(NSString *)candidateId;
- (NSString *)committeeContributionsToCommitteeId;
- (void)setCommitteeContributionsToCommitteeId:(NSString *)committeeId;
- (NSString *)committeeContributionsToFormat;
- (void)setCommitteeContributionsToFormat:(NSString *)format;

#pragma mark -
#pragma mark CommitteeFilings

- (NSString *)committeeFilingsCycle;
- (void)setCommitteeFilingsCycle:(NSString *)cycle;
- (NSString *)committeeFilingsCommitteeId;
- (void)setCommitteeFilingsCommitteeId:(NSString *)committeeId;
- (NSString *)committeeFilingsFormat;
- (void)setCommitteeFilingsFormat:(NSString *)format;

#pragma mark -
#pragma mark LeadershipCommittee

- (NSString *)leadershipCommitteeCycle;
- (void)setLeadershipCommitteeCycle:(NSString *)cycle;
- (NSString *)leadershipCommitteeFormat;
- (void)setLeadershipCommitteeFormat:(NSString *)format;

#pragma mark -
#pragma mark ElectronicFilingsByDate

- (NSString *)electronicFilingsByDateCycle;
- (void)setElectronicFilingsByDateCycle:(NSString *)cycle;
- (NSString *)electronicFilingsByDateDate;
- (void)setElectronicFilingsByDateDate:(NSString *)date;
- (NSString *)electronicFilingsByDateFormat;
- (void)setElectronicFilingsByDateFormat:(NSString *)format;

#pragma mark -
#pragma mark FormTypes

- (NSString *)formTypesCycle;
- (void)setFormTypesCycle:(NSString *)cycle;
- (NSString *)formTypesFormat;
- (void)setFormTypesFormat:(NSString *)format;

#pragma mark -
#pragma mark FilingsByType

- (NSString *)filingsByTypeCycle;
- (void)setFilingsByTypeCycle:(NSString *)cycle;
- (NSString *)filingsByTypeFilingType;
- (void)setFilingsByTypeFilingType:(NSString *)filingType;
- (NSString *)filingsByTypeFormat;
- (void)setFilingsByTypeFormat:(NSString *)format;

#pragma mark -
#pragma mark PresCandidateTotals

- (NSString *)presCandidateTotalsCycle;
- (void)setPresCandidateTotalsCycle:(NSString *)cycle;
- (NSString *)presCandidateTotalsFormat;
- (void)setPresCandidateTotalsFormat:(NSString *)format;

#pragma mark -
#pragma mark PresCandidateDetails

- (NSString *)presCandidateDetailsCycle;
- (void)setPresCandidateDetailsCycle:(NSString *)cycle;
- (NSString *)presCandidateDetailsCandidateNameOrCommitteeId;
- (void)setPresCandidateDetailsCandidateNameOrCommitteeId:(NSString *)candidateNameOrCommitteeId;
- (NSString *)presCandidateDetailsFormat;
- (void)setPresCandidateDetailsFormat:(NSString *)format;

#pragma mark -
#pragma mark PresStateAndZipTotals

- (NSString *)presStateAndZipTotalsCycle;
- (void)setPresStateAndZipTotalsCycle:(NSString *)cycle;
- (NSString *)presStateAndZipTotalsResourceType;
- (void)setPresStateAndZipTotalsResourceType:(NSString *)resourceType;
- (NSString *)presStateAndZipTotalsStateAbbr;
- (void)setPresStateAndZipTotalsStateAbbr:(NSString *)stateAbbr;
- (NSString *)presStateAndZipTotalsFormat;
- (void)setPresStateAndZipTotalsFormat:(NSString *)format;

#pragma mark -
#pragma mark PresDonorInformation

- (NSString *)presDonorInformationCycle;
- (void)setPresDonorInformationCycle:(NSString *)cycle;
- (NSString *)presDonorInformationSearchParameter;
- (void)setPresDonorInformationSearchParameter:(NSString *)searchParameter;
- (NSString *)presDonorInformationLastName;
- (void)setPresDonorInformationLastName:(NSString *)lastName;
- (NSString *)presDonorInformationZipCode;
- (void)setPresDonorInformationZipCode:(NSString *)zipCode;
- (NSString *)presDonorInformationOffSet;
- (void)setPresDonorInformationOffSet:(NSString *)offSet;
- (NSString *)presDonorInformationFormat;
- (void)setPresDonorInformationFormat:(NSString *)format;

@end

#pragma mark -
#pragma mark NYTimesWrapper

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
typedef struct _ArticleStruct article;

struct _BestSellerStruct {
    NSString *listName;
    NSString *date;
    NSString *offset;
    NSString *sortBy;
    NSString *sortOrder;
    NSString *format;
};
typedef struct _BestSellerStruct bestSeller;

#import "_Congress.h"
#import "_Districts.h"
#import "_EventListings.h"
#import "_MostPopular.h"
#import "_MovieReviews.h"
#import "_RealEstate.h"
#import "_Semantic.h"
#import "_NewsWire.h"

@class _Congress;
@class _Districts;
@class _EventListings;
@class _MostPopular;
@class _RealEstate;
@class _Semantic;
@class _NewsWire;

@interface NYTimesWrapper : NSObject
{    
    NSString *apiKey;
    struct _ArticleStruct article;
    struct _BestSellerStruct bestSeller;
    
    _CampaignFinance *campaignFinance;
    _Community *community;
    _Congress *congress;
    _Districts *districts;
    _EventListings *eventListings;
    _MostPopular *mostPopular;
    _MovieReviews *movieReviews;
    _RealEstate *realEstate;
    _Semantic *semantic;
    _NewsWire *newsWire;
}

@property struct _ArticleStruct article;
@property struct _BestSellerStruct bestSeller;

@property (nonatomic, retain) _CampaignFinance *campaignFinance;
@property (nonatomic, retain) _Community *community;
@property (nonatomic, retain) _Congress *congress;
@property (nonatomic, retain) _Districts *districts;
@property (nonatomic, retain) _EventListings *eventListings;
@property (nonatomic, retain) _MostPopular *mostPopular;
@property (nonatomic, retain) _MovieReviews *movieReviews;
@property (nonatomic, retain) _RealEstate *realEstate;
@property (nonatomic, retain) _Semantic *semantic;
@property (nonatomic, retain) _NewsWire *newsWire;

@property (nonatomic, retain) NSString *apiKey;

- (id)initWithAPIKey:(NSString *)key;

- (void)setFormat:(NSString *)string;
- (void)setQuery:(NSString *)query;
- (void)setFacets:(NSString *)facets;
- (void)setFields:(NSString *)fields;
- (void)setOffset:(NSString *)offset;
- (void)setRank:(NSString *)rank;
- (void)setStartDate:(NSString *)startDate;
- (void)setEndDate:(NSString *)endDate;

- (NSString *)format;
- (NSString *)query;
- (NSString *)facets;
- (NSString *)fields;
- (NSString *)offset;
- (NSString *)rank;
- (NSString *)startDate;
- (NSString *)endDate;

- (void)setListName:(NSString *)listName;
- (void)setDate:(NSString *)date;
- (void)setBestSellerOffset:(NSString *)offset;
- (void)setSortBy:(NSString *)sortBy;
- (void)setSortOrder:(NSString *)sortOrder;
- (void)setBestSellerFormat:(NSString *)format;

- (NSString *)listName;
- (NSString *)date;
- (NSString *)bestSellerOffset;
- (NSString *)sortBy;
- (NSString *)sortOrder;
- (NSString *)bestSellerFormat;

@end
