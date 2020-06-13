///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMDeleteSecondaryEmailsArg;
@class DBTEAMUserSecondaryEmailsArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DeleteSecondaryEmailsArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMDeleteSecondaryEmailsArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// List of users and their secondary emails to delete.
@property (nonatomic, readonly) NSArray<DBTEAMUserSecondaryEmailsArg *> *emailsToDelete;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param emailsToDelete List of users and their secondary emails to delete.
///
/// @return An initialized instance.
///
- (instancetype)initWithEmailsToDelete:(NSArray<DBTEAMUserSecondaryEmailsArg *> *)emailsToDelete;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DeleteSecondaryEmailsArg` struct.
///
@interface DBTEAMDeleteSecondaryEmailsArgSerializer : NSObject

///
/// Serializes `DBTEAMDeleteSecondaryEmailsArg` instances.
///
/// @param instance An instance of the `DBTEAMDeleteSecondaryEmailsArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMDeleteSecondaryEmailsArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMDeleteSecondaryEmailsArg *)instance;

///
/// Deserializes `DBTEAMDeleteSecondaryEmailsArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMDeleteSecondaryEmailsArg` API object.
///
/// @return An instantiation of the `DBTEAMDeleteSecondaryEmailsArg` object.
///
+ (DBTEAMDeleteSecondaryEmailsArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END