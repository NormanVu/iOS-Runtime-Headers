/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoGlanceSettings.framework/NanoGlanceSettings
 */

@class NSString;

@interface NGSGlance : NSObject <NSCopying> {
    NSString *_appBundleIdentifier;
    NSString *_glanceBundleIdentifier;
    NSString *_name;
    NSString *_sockPuppetIdentifier;
    bool_active;
    bool_cannotBeDisabled;
    bool_defaultGlance;
    bool_prelaunch;
}

@property(getter=isActive) bool active;
@property(copy) NSString * appBundleIdentifier;
@property bool cannotBeDisabled;
@property(getter=isDefaultGlance) bool defaultGlance;
@property(copy) NSString * glanceBundleIdentifier;
@property(readonly) NSString * glanceIdentifier;
@property(copy) NSString * name;
@property bool prelaunch;
@property(copy) NSString * sockPuppetIdentifier;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (bool)cannotBeDisabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)glanceBundleIdentifier;
- (id)glanceIdentifier;
- (id)initWithDictionary:(id)arg1;
- (bool)isActive;
- (bool)isDefaultGlance;
- (id)name;
- (bool)prelaunch;
- (void)setActive:(bool)arg1;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setCannotBeDisabled:(bool)arg1;
- (void)setDefaultGlance:(bool)arg1;
- (void)setGlanceBundleIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPrelaunch:(bool)arg1;
- (void)setSockPuppetIdentifier:(id)arg1;
- (id)sockPuppetIdentifier;

@end