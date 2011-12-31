//
//  _Congress.h
//  NYTimesWrapper
//
//  Created by Dustin Eichler on 12/30/11.
//  Copyright (c) 2011. All rights reserved.
//

#import <Foundation/Foundation.h>

struct _MembersOfCongress {
    NSString *congressNumber;
    NSString *chamber;
    NSString *state;
    NSString *district;
    NSString *format;
    NSString *apiKey;
};
typedef struct _MembersOfCongress membersOfCongress;

struct _MemberBiosAndRoles {
    NSString *memberId;
    NSString *format;
    NSString *apiKey;
};
typedef struct _MemberBiosAndRoles memberBiosAndRoles;

struct _NewMembers {
    NSString *format;
    NSString *apiKey;
};
typedef struct _NewMembers newMembers;

struct _CurrentMembersByStateAndDistrict {
    NSString *chamber;
    NSString *state;
    NSString *district;
    NSString *format;
    NSString *apiKey;
};
typedef struct _CurrentMembersByStateAndDistrict currentMembersByStateAndDistrict;

struct _MembersLeavingOffice {
    NSString *congressNumber;
    NSString *chamber;
    NSString *format;
    NSString *apiKey;
};
typedef struct _MembersLeavingOffice membersLeavingOffice;

struct _MemberVotePositions {
    NSString *memberId;
    NSString *format;
    NSString *apiKey;
    
};
typedef struct _MemberVotePositions memberVotePositions;

struct _MemberVoteComparison {
    NSString *firstMemberId;
    NSString *secondMemberId;
    NSString *congressNumber;
    NSString *chamber;
    NSString *format;
    NSString *apiKey;
};
typedef struct _MemberVoteComparison memberVoteComparison;

struct _BillsCosponsoredByAMember {
    NSString *memberId;
    NSString *type;
    NSString *format;
    NSString *apiKey;
};
typedef struct _BillsCosponsoredByAMember billsCosponsoredByAMember;

struct _MemberSponsorshipComparison {
    NSString *memberId1;
    NSString *memberId2;
    NSString *congressNumber;
    NSString *chamber;
    NSString *format;
    NSString *apiKey;
};
typedef struct _MemberSponsorshipComparison memberSponsorshipComparison;

struct _MemberFloorAppearances {
    NSString *memberId;
    NSString *format;
    NSString *apiKey;
};
typedef struct _MemberFloorAppearances memberFloorAppearances;

struct _RollCallVotes {
    NSString *congressNumber;
    NSString *chamber;
    NSString *sessionNumber;
    NSString *rollCallNumber;
    NSString *format;
    NSString *apiKey;
};
typedef struct _RollCallVotes rollCallVotes;

struct _VotesByType {
    NSString *congressNumber;
    NSString *chamber;
    NSString *voteType;
    NSString *format;
    NSString *apiKey;
};
typedef struct _VotesByType votesByType;

struct _VotesByDate {
    NSString *chamber;
    NSString *yearAndMonth;
    NSString *rangeOfDates;
    NSString *format;
    NSString *apiKey;
};
typedef struct _VotesByDate votesByDate;

struct _NominationVotes {
    NSString *congressNumber;
    NSString *format;
    NSString *apiKey;
};
typedef struct _NominationVotes nominationVotes;

struct _RecentBills {
    NSString *congressNumber;
    NSString *chamber;
    NSString *type;
    NSString *format;
    NSString *apiKey;
};
typedef struct _RecentBills recentBills;

struct _BillsByMember {
    NSString *memberId;
    NSString *type;
    NSString *format;
    NSString *apiKey;
};
typedef struct _BillsByMember billsByMember;

struct _BillDetails {
    NSString *congressNumber;
    NSString *billId;
    NSString *format;
    NSString *apiKey;
};
typedef struct _BillDetails billDetails;

struct _BillAmendmentsAndRelatedBills {
    NSString *congressNumber;
    NSString *billId;
    NSString *resource;
    NSString *format;
    NSString *apiKey;
};
typedef struct _BillAmendmentsAndRelatedBills billAmendmentsAndRelatedBills;

struct _BillCosponsors {
    NSString *congressNumber;
    NSString *billId;
    NSString *format;
    NSString *apiKey;
};
typedef struct _BillCosponsors billCosponsors;

struct _NomineeLists {
    NSString *congressNumber;
    NSString *nomineeCategory;
    NSString *format;
    NSString *apiKey;
};
typedef struct _NomineeLists nomineeLists;

struct _NomineeDetails {
    NSString *congressNumber;
    NSString *nomineeId;
    NSString *format;
    NSString *apiKey;
};
typedef struct _NomineeDetails nomineeDetails;

struct _NomineesByState {
    NSString *congresNumber;
    NSString *state;
    NSString *format;
    NSString *apiKey;
};
typedef struct _NomineesByState nomineesByState;

struct _StatePartyCounts {
    NSString *format;
    NSString *apiKey;
};
typedef struct _StatePartyCounts statePartyCounts;

struct _CommitteesAndCommitteeMembers {
    NSString *congressNumber;
    NSString *chamber;
    NSString *committeeId;
    NSString *format;
    NSString *apiKey;
    
};
typedef struct _CommitteesAndCommitteeMembers committeesAndCommitteeMembers;

struct _ChamberSchedule {
    NSString *format;
    NSString *apiKey;
};
typedef struct _ChamberSchedule chamberSchedule;

@interface _Congress : NSObject {
    struct _MembersOfCongress membersOfCongress;
    struct _MemberBiosAndRoles memberBiosAndRoles;
    struct _NewMembers newMembers;
    struct _CurrentMembersByStateAndDistrict currentMembersByStateAndDistrict;
    struct _MembersLeavingOffice membersLeavingOffice;
    struct _MemberVotePositions memberVotePositions;
    struct _MemberVoteComparison memberVoteComparison;
    struct _BillsCosponsoredByAMember billsCosponsoredByAMember;
    struct _MemberSponsorshipComparison memberSponsorshipComparison;
    struct _MemberFloorAppearances memberFloorAppearances;
    struct _RollCallVotes rollCallVotes;
    struct _VotesByType votesByType;
    struct _VotesByDate votesByDate;
    struct _NominationVotes nominationVotes;
    struct _RecentBills recentBills;
    struct _BillsByMember billsByMember;
    struct _BillDetails billDetails;
    struct _BillAmendmentsAndRelatedBills billAmendmentsAndRelatedBills;
    struct _BillCosponsors billCosponsors;
    struct _NomineeLists nomineeLists;
    struct _NomineeDetails nomineeDetails;
    struct _NomineesByState nomineesByState;
    struct _StatePartyCounts statePartyCounts;
    struct _CommitteesAndCommitteeMembers committeesAndCommitteeMembers;
    struct _ChamberSchedule chamberSchedule;
}

@property struct _MembersOfCongress membersOfCongress;
@property struct _MemberBiosAndRoles memberBiosAndRoles;
@property struct _NewMembers newMembers;
@property struct _CurrentMembersByStateAndDistrict currentMembersByStateAndDistrict;
@property struct _MembersLeavingOffice membersLeavingOffice;
@property struct _MemberVotePositions memberVotePositions;
@property struct _MemberVoteComparison memberVoteComparison;
@property struct _BillsCosponsoredByAMember billsCosponsoredByAMember;
@property struct _MemberSponsorshipComparison memberSponsorshipComparison;
@property struct _MemberFloorAppearances memberFloorAppearances;
@property struct _RollCallVotes rollCallVotes;
@property struct _VotesByType votesByType;
@property struct _NominationVotes nominationVotes;
@property struct _RecentBills recentBills;
@property struct _BillsByMember billsByMember;
@property struct _BillDetails billDetails;
@property struct _BillAmendmentsAndRelatedBills billAmendmentsAndRelatedBills;
@property struct _BillCosponsors billCosponsors;
@property struct _NomineeLists nomineeLists;
@property struct _NomineeDetails nomineeDetails;
@property struct _NomineesByState nomineesByState;
@property struct _StatePartyCounts statePartyCounts;
@property struct _CommitteesAndCommitteeMembers committeesAndCommitteeMembers;
@property struct _ChamberSchedule chamberSchedule;

#pragma mark -
#pragma mark MembersOfCongress

- (NSString *)membersOfCongressCongressNumber;
- (void)setMembersOfCongressCongressNumber:(NSString *)congressNumber;
- (NSString * )membersOfCongressChamber;
- (void)setMembersOfCongressChamber:(NSString *)chamber;
- (NSString *)membersOfCongressState;
- (void)setMembersOfCongressState:(NSString *)state;
- (NSString *)membersOfCongressDistrict;
- (void)setMembersOfCongressDistrict:(NSString *)district;
- (NSString *)membersOfCongressFormat;
- (void)setMembersOfCongressFormat:(NSString *)format;
- (NSString *)membersOfCongressApiKey;
- (void)setMembersOfCongressApiKey:(NSString *)apiKey;

#pragma mark -
#pragma mark MemberBiosAndRoles

- (NSString *)memberBiosAndRolesMemberId;
- (void)memberBiosAndRolesMemberId:(NSString *)memberId;
- (NSString *)memberBiosAndRolesFormat;
- (void)memberBiosAndRolesFormat:(NSString *)format;
- (NSString *)memberBiosAndRolesApiKey:(NSString *)apiKey;

#pragma mark -
#pragma mark NewMembers

- (NSString *)newMembersFormat;
- (void)setNewMembersFormat:(NSString *)format;
- (NSString *)newMembersApiKey;
- (void)setNewMembersApiKey:(NSString *)apiKey;

#pragma mark -
#pragma mark CurrentMembersByStateAndDistrict

- (NSString *)currentMembersByStateAndDistrictChamber;
- (void)setCurrentMembersByStateAndDistrictChamber:(NSString *)chamber;
- (NSString *)currentMembersByStateAndDistrictState;
- (void)setCurrentMembersByStateAndDistrictState:(NSString *)state;
- (NSString *)currentMembersByStateAndDistrictDistrict;
- (void)setCurrentMembersByStateAndDistrictDistrict:(NSString *)district;
- (NSString *)currentMembersByStateAndDistrictFormat;
- (void)setCurrentMembersByStateAndDistrictForamt:(NSString *)format;
- (NSString *)currentMembersByStateAndDistrictApiKey;
- (NSString *)setCurrentMembersByStateAndDistrictApiKey:(NSString *)apiKey;

#pragma mark -
#pragma mark MembersLeavingOffice

- (NSString *)membersLeavingOfficeCongressNumber;
- (void)setMembersLeavingOfficeCongressNumber:(NSString *)congressNumber;
- (NSString *)membersLeavingOfficeChamber;
- (void)setMembersLeavingOfficeChamber:(NSString *)chamber;
- (NSString *)membersLeavingOfficeFormat;
- (void)membersLeavingOfficeFormat:(NSString *)format;
- (NSString *)membersLeavingOfficeApiKey;
- (void)setMembersLeavingOfficeApiKey:(NSString *)apiKey;

#pragma mark -
#pragma mark MemberVotePositions

- (NSString *)memberVotePositionsMemberId;
- (void)memberVotePositionsMemberId:(NSString *)memberId;
- (NSString *)memberVotePositionsFormat;
- (void)setMemberVotePositionsFormat:(NSString *)format;
- (NSString *)memberVotePositionsApiKey;
- (void)setMemberVotePositionsApiKey:(NSString *)apiKey;

#pragma mark -
#pragma mark BillsCosponsoredByAMember

- (NSString *)billsCosponsoredByAMemberMemberId;
- (void)setBillsCosponsoredByAMemberMemberId:(NSString *)memberId;
- (NSString *)billsCosponsoredByAMemberType;
- (void)setBillsCosponsoredByAMemberType:(NSString *)type;
- (NSString *)billsCosponsoredByAMemberFormat;
- (void)setBillsCosponsoredByAMemberFormat:(NSString *)fomart;
- (NSString *)billsCosponsoredByAMemberApiKey;
- (void)setBillsCosponsoredByAMemberApiKey:(NSString *)apiKey;

#pragma mark -
#pragma mark MemberSponsorshipComparison

- (NSString *)memberSponsorshipComparisonMemberId1;
- (void)setMemberSponsorshipComparisonMemberId1:(NSString *)memberId1;
- (NSString *)memberSponsorshipComparisonMemberId2;
- (void)setMemberSponsorshipComparisonMemberId2:(NSString *)memberId2;
- (NSString *)memberSponsorshipComparisonCongressNumber;
- (void)setMemberSponsorshipComparisonCongressNumber:(NSString *)congressNumber;
- (NSString *)memberSponsorshipComparisonChamber;
- (void)setMemberSponsorshipComparisonChamber:(NSString *)chamber;
- (NSString *)memberSponsorshipComparisonFormat;
- (void)setMemberSponsorshipComparisonFormat:(NSString *)format;
- (NSString *)memberSponsorshipComparisonApiKey;
- (void)setMemberSponsorshipComparisonApiKey:(NSString *)apiKey;

#pragma mark -
#pragma mark MemberFloorAppearances

- (NSString *)memberFloorAppearancesMemberId;
- (void)setMemberFloorAppearancesMemberId:(NSString *)memberId;
- (NSString *)memberFloorAppearancesFormat;
- (void)setMemberFloorAppearancesFormat:(NSString *)format;
- (NSString *)memberFloorAppearancesApiKey;
- (void)setMemberFloorAppearancesApiKey:(NSString *)apiKey;

#pragma mark -
#pragma mark RollCallVotes

- (NSString *)rollCallVotesCongressNumber;
- (void)setRollCallVotesCongressNumber:(NSString *)congressNumber;
- (NSString *)rollCallVotesChamber;
- (void)setRollCallVotesChamber:(NSString *)chamber;
- (NSString *)rollCallVotesSessionNumber;
- (void)setRollCallVotesSessionNumber:(NSString *)sessionNumber;
- (NSString *)rollCallVotesRollCallNumber;
- (void)setRollCallVotesRollCallNumber:(NSString *)rollCallNumber;
- (NSString *)rollCallVotesFormat;
- (void)setRollCallVotesFormat:(NSString *)format;
- (NSString *)rollCallVotesApiKey;
- (void)setRollCallVotesApiKey:(NSString *)apiKey;



@end
