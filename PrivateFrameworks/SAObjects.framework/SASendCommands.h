/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASendCommands : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *commands;

+ (id)sendCommands;
+ (id)sendCommandsWithDictionary:(id)arg1 context:(id)arg2;

- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setCommands:(id)arg1;

@end
