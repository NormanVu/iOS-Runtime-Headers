/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedDatabase : NSObject <FCOperationThrottlerDelegate> {
    NSMutableDictionary * _cachedFeedsByID;
    int  _endpoint;
    NSEntityDescription * _feedEntity;
    NSEntityDescription * _feedItemEntity;
    NSEntityDescription * _feedItemIndexEntity;
    NSEntityDescription * _feedSegmentEntity;
    NSManagedObjectContext * _managedObjectContext;
    NSMutableSet * _modifiedFeedIDs;
    int  _nextFeedLookupID;
    NSPersistentStore * _persistentStore;
    <FCOperationThrottler> * _saveThrottler;
    int  _usage;
}

@property (nonatomic, retain) NSMutableDictionary *cachedFeedsByID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int endpoint;
@property (nonatomic, retain) NSEntityDescription *feedEntity;
@property (nonatomic, retain) NSEntityDescription *feedItemEntity;
@property (nonatomic, retain) NSEntityDescription *feedItemIndexEntity;
@property (nonatomic, retain) NSEntityDescription *feedSegmentEntity;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSMutableSet *modifiedFeedIDs;
@property (nonatomic) int nextFeedLookupID;
@property (nonatomic, retain) NSPersistentStore *persistentStore;
@property (nonatomic, retain) <FCOperationThrottler> *saveThrottler;
@property (readonly) Class superclass;
@property (nonatomic) int usage;

+ (unsigned short)currentFeedDatabaseVersion;
+ (void)initialize;
+ (id)temporaryFeedDatabase;

- (void).cxx_destruct;
- (id)_feedItemsForLookups:(id)arg1 withFeedsByID:(id)arg2;
- (id)_feedItemsForLookups:(id)arg1 withFeedsByID:(id)arg2 boundedByCount:(unsigned int)arg3;
- (id)_feedsForLookups:(id)arg1;
- (id)_serviceLookup:(id)arg1 withFeed:(id)arg2 feedItems:(id)arg3;
- (id)_shortCircuitLookup:(id)arg1 withFeed:(id)arg2;
- (id)cachedFeedsByID;
- (void)d_sanityCheckFeed:(id)arg1;
- (int)endpoint;
- (id)feedEntity;
- (id)feedItemEntity;
- (id)feedItemIndexEntity;
- (id)feedSegmentEntity;
- (id)initWithParentDirectoryURL:(id)arg1 usage:(int)arg2 endpoint:(int)arg3;
- (id)managedObjectContext;
- (id)modifiedFeedIDs;
- (int)nextFeedLookupID;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (id)performDatabaseLookups:(id)arg1;
- (id)performDatabaseLookups:(id)arg1 boundedByCount:(unsigned int)arg2;
- (id)persistentStore;
- (void)saveFeedItems:(id)arg1 forFeedID:(id)arg2 insertionToken:(id)arg3 requestDate:(id)arg4 followingCKCursor:(id)arg5 reachedToOrder:(BOOL)arg6 extent:(unsigned long long)arg7 reachedEnd:(BOOL)arg8;
- (id)saveThrottler;
- (void)setCachedFeedsByID:(id)arg1;
- (void)setFeedEntity:(id)arg1;
- (void)setFeedItemEntity:(id)arg1;
- (void)setFeedItemIndexEntity:(id)arg1;
- (void)setFeedSegmentEntity:(id)arg1;
- (void)setManagedObjectContext:(id)arg1;
- (void)setModifiedFeedIDs:(id)arg1;
- (void)setNextFeedLookupID:(int)arg1;
- (void)setPersistentStore:(id)arg1;
- (void)setSaveThrottler:(id)arg1;
- (void)setUsage:(int)arg1;
- (int)usage;

@end
