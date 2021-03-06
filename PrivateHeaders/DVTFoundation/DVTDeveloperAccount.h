//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTDeveloperAccountCredentials, DVTDeveloperAccountSession, DVTDispatchLock, NSDictionary, NSString;

@interface DVTDeveloperAccount : NSObject
{
    DVTDispatchLock *_lock;
    BOOL _alwaysLogInUsingQA;
    BOOL _enabled;
    DVTDeveloperAccountSession *_session;
    DVTDeveloperAccountCredentials *_accountCredentials;
    NSString *_userDescription;
}

+ (id)keyPathsForValuesAffectingUserDescriptionOrBestGuess;
+ (id)keyPathsForValuesAffectingHasPassword;
+ (id)keyPathsForValuesAffectingPassword;
+ (id)accountWithPropertyListRepresentation:(id)arg1 keychain:(struct OpaqueSecKeychainRef *)arg2 error:(id *)arg3;
+ (id)accountWithIdentity:(struct OpaqueSecIdentityRef *)arg1;
+ (id)accountWithCredentials:(id)arg1;
@property BOOL enabled; // @synthesize enabled=_enabled;
@property BOOL alwaysLogInUsingQA; // @synthesize alwaysLogInUsingQA=_alwaysLogInUsingQA;
@property(copy, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(copy) DVTDeveloperAccountCredentials *accountCredentials; // @synthesize accountCredentials=_accountCredentials;
- (void).cxx_destruct;
@property(readonly) NSDictionary *propertyListRepresentation;
@property(readonly) NSString *userDescriptionOrBestGuess;
@property(readonly) BOOL hasPassword;
@property(copy) NSString *password;
@property(readonly) _Bool isCertBased;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy) NSString *username;
- (void)revokeSession:(id)arg1;
- (id)sessionIfAvailable;
@property(readonly) DVTDeveloperAccountSession *session; // @synthesize session=_session;
- (void)executeWithSession:(CDUnknownBlockType)arg1;
- (id)sessionByLoggingInIfNeeded:(id *)arg1;
- (id)_sessionByLoggingIn:(id *)arg1;
- (id)init;

@end

