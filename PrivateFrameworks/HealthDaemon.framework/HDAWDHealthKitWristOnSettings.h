/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitWristOnSettings : PBCodable <NSCopying> {
    HDAWDHealthKitAchievementStatistics * _achievementStatistics;
    int  _daysSinceFirstCalorieGoal;
    BOOL  _enableAchievements;
    BOOL  _enableGoalCompletions;
    BOOL  _enableStandReminders;
    BOOL  _enableWeeklySummary;
    int  _eventBusyTime;
    HDAWDHealthKitConcurrentCalendarItem * _firstCalendarItemOfDay;
    struct { 
        unsigned int daysSinceFirstCalorieGoal : 1; 
        unsigned int eventBusyTime : 1; 
        unsigned int numberOfEvents : 1; 
        unsigned int progressUpdateFrequency : 1; 
        unsigned int timeZoneOffset : 1; 
        unsigned int timestamp : 1; 
        unsigned int enableAchievements : 1; 
        unsigned int enableGoalCompletions : 1; 
        unsigned int enableStandReminders : 1; 
        unsigned int enableWeeklySummary : 1; 
        unsigned int wellnessComplicationOnWatchFace : 1; 
    }  _has;
    int  _numberOfEvents;
    int  _progressUpdateFrequency;
    int  _timeZoneOffset;
    unsigned int  _timestamp;
    HDAWDHealthKitUserCharacteristics * _userCharacteristics;
    BOOL  _wellnessComplicationOnWatchFace;
}

@property (nonatomic, retain) HDAWDHealthKitAchievementStatistics *achievementStatistics;
@property (nonatomic) int daysSinceFirstCalorieGoal;
@property (nonatomic) BOOL enableAchievements;
@property (nonatomic) BOOL enableGoalCompletions;
@property (nonatomic) BOOL enableStandReminders;
@property (nonatomic) BOOL enableWeeklySummary;
@property (nonatomic) int eventBusyTime;
@property (nonatomic, retain) HDAWDHealthKitConcurrentCalendarItem *firstCalendarItemOfDay;
@property (nonatomic, readonly) BOOL hasAchievementStatistics;
@property (nonatomic) BOOL hasDaysSinceFirstCalorieGoal;
@property (nonatomic) BOOL hasEnableAchievements;
@property (nonatomic) BOOL hasEnableGoalCompletions;
@property (nonatomic) BOOL hasEnableStandReminders;
@property (nonatomic) BOOL hasEnableWeeklySummary;
@property (nonatomic) BOOL hasEventBusyTime;
@property (nonatomic, readonly) BOOL hasFirstCalendarItemOfDay;
@property (nonatomic) BOOL hasNumberOfEvents;
@property (nonatomic) BOOL hasProgressUpdateFrequency;
@property (nonatomic) BOOL hasTimeZoneOffset;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, readonly) BOOL hasUserCharacteristics;
@property (nonatomic) BOOL hasWellnessComplicationOnWatchFace;
@property (nonatomic) int numberOfEvents;
@property (nonatomic) int progressUpdateFrequency;
@property (nonatomic) int timeZoneOffset;
@property (nonatomic) unsigned int timestamp;
@property (nonatomic, retain) HDAWDHealthKitUserCharacteristics *userCharacteristics;
@property (nonatomic) BOOL wellnessComplicationOnWatchFace;

- (void).cxx_destruct;
- (id)achievementStatistics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)daysSinceFirstCalorieGoal;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)enableAchievements;
- (BOOL)enableGoalCompletions;
- (BOOL)enableStandReminders;
- (BOOL)enableWeeklySummary;
- (int)eventBusyTime;
- (id)firstCalendarItemOfDay;
- (BOOL)hasAchievementStatistics;
- (BOOL)hasDaysSinceFirstCalorieGoal;
- (BOOL)hasEnableAchievements;
- (BOOL)hasEnableGoalCompletions;
- (BOOL)hasEnableStandReminders;
- (BOOL)hasEnableWeeklySummary;
- (BOOL)hasEventBusyTime;
- (BOOL)hasFirstCalendarItemOfDay;
- (BOOL)hasNumberOfEvents;
- (BOOL)hasProgressUpdateFrequency;
- (BOOL)hasTimeZoneOffset;
- (BOOL)hasTimestamp;
- (BOOL)hasUserCharacteristics;
- (BOOL)hasWellnessComplicationOnWatchFace;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)numberOfEvents;
- (int)progressUpdateFrequency;
- (BOOL)readFrom:(id)arg1;
- (void)setAchievementStatistics:(id)arg1;
- (void)setDaysSinceFirstCalorieGoal:(int)arg1;
- (void)setEnableAchievements:(BOOL)arg1;
- (void)setEnableGoalCompletions:(BOOL)arg1;
- (void)setEnableStandReminders:(BOOL)arg1;
- (void)setEnableWeeklySummary:(BOOL)arg1;
- (void)setEventBusyTime:(int)arg1;
- (void)setFirstCalendarItemOfDay:(id)arg1;
- (void)setHasDaysSinceFirstCalorieGoal:(BOOL)arg1;
- (void)setHasEnableAchievements:(BOOL)arg1;
- (void)setHasEnableGoalCompletions:(BOOL)arg1;
- (void)setHasEnableStandReminders:(BOOL)arg1;
- (void)setHasEnableWeeklySummary:(BOOL)arg1;
- (void)setHasEventBusyTime:(BOOL)arg1;
- (void)setHasNumberOfEvents:(BOOL)arg1;
- (void)setHasProgressUpdateFrequency:(BOOL)arg1;
- (void)setHasTimeZoneOffset:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasWellnessComplicationOnWatchFace:(BOOL)arg1;
- (void)setNumberOfEvents:(int)arg1;
- (void)setProgressUpdateFrequency:(int)arg1;
- (void)setTimeZoneOffset:(int)arg1;
- (void)setTimestamp:(unsigned int)arg1;
- (void)setUserCharacteristics:(id)arg1;
- (void)setWellnessComplicationOnWatchFace:(BOOL)arg1;
- (int)timeZoneOffset;
- (unsigned int)timestamp;
- (id)userCharacteristics;
- (BOOL)wellnessComplicationOnWatchFace;
- (void)writeTo:(id)arg1;

@end