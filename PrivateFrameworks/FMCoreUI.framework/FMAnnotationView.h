/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

@interface FMAnnotationView : MKAnnotationView {
    BOOL  _hasPhotoImage;
    BOOL  _isDelayed;
    BOOL  _isShowingLargeSelectedAnnotation;
    CALayer * _largeCircleLayer;
    CALayer * _largePersonImageLayer;
    CAShapeLayer * _largeRingLayer;
    CALayer * _locationInnerLayer;
    CALayer * _locationOuterLayer;
    BOOL  _shouldPreventLargeAnnotationState;
    CALayer * _smallCircleLayer;
    CALayer * _smallPersonImageLayer;
    CAShapeLayer * _smallRingLayer;
}

@property (nonatomic, retain) <FMAnnotation><MKAnnotation> *annotation;
@property (nonatomic) BOOL hasPhotoImage;
@property (nonatomic) BOOL isDelayed;
@property (nonatomic) BOOL isShowingLargeSelectedAnnotation;
@property (nonatomic, retain) CALayer *largeCircleLayer;
@property (nonatomic, retain) CALayer *largePersonImageLayer;
@property (nonatomic, retain) CAShapeLayer *largeRingLayer;
@property (nonatomic, retain) CALayer *locationInnerLayer;
@property (nonatomic, retain) CALayer *locationOuterLayer;
@property (nonatomic) BOOL shouldPreventLargeAnnotationState;
@property (nonatomic, retain) CALayer *smallCircleLayer;
@property (nonatomic, retain) CALayer *smallPersonImageLayer;
@property (nonatomic, retain) CAShapeLayer *smallRingLayer;

+ (BOOL)_followsTerrain;
+ (void)setImagePadding:(float)arg1;
+ (void)setLargeAnnotationBorderVisible:(BOOL)arg1;
+ (void)setShouldMaskLayer:(BOOL)arg1;
+ (void)setThickAnnotationBorder:(BOOL)arg1;

- (void).cxx_destruct;
- (void)_selectionWasUpdated:(BOOL)arg1;
- (void)_setupSpringActions;
- (void)_transitionToNewSize:(BOOL)arg1;
- (void)_updateAnnotationStyle;
- (void)animateDelayedAnimation;
- (BOOL)hasPhotoImage;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 tintColor:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDelayed;
- (BOOL)isShowingLargeSelectedAnnotation;
- (id)largeCircleLayer;
- (id)largePersonImageLayer;
- (id)largeRingLayer;
- (id)locationInnerLayer;
- (id)locationOuterLayer;
- (void)prepareForReuse;
- (void)setAnnotation:(id)arg1;
- (void)setHasPhotoImage:(BOOL)arg1;
- (void)setIsDelayed:(BOOL)arg1;
- (void)setIsShowingLargeSelectedAnnotation:(BOOL)arg1;
- (void)setLargeCircleLayer:(id)arg1;
- (void)setLargePersonImageLayer:(id)arg1;
- (void)setLargeRingLayer:(id)arg1;
- (void)setLocationInnerLayer:(id)arg1;
- (void)setLocationOuterLayer:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 delay:(double)arg3;
- (void)setShouldPreventLargeAnnotationState:(BOOL)arg1;
- (void)setSmallCircleLayer:(id)arg1;
- (void)setSmallPersonImageLayer:(id)arg1;
- (void)setSmallRingLayer:(id)arg1;
- (void)setTintColor:(id)arg1;
- (BOOL)shouldPreventLargeAnnotationState;
- (id)smallCircleLayer;
- (id)smallPersonImageLayer;
- (id)smallRingLayer;
- (void)updateStyleForAnnotation:(id)arg1;

@end
