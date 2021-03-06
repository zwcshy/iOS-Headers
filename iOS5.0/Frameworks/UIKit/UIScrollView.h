/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "NSCoding-Protocol.h"

@class NSArray, UIImageView, UIPanGestureRecognizer, UIPinchGestureRecognizer;

@interface UIScrollView : UIView <NSCoding>
{
    struct CGSize _contentSize;
    struct UIEdgeInsets _contentInset;
    id _delegate;
    UIImageView *_verticalScrollIndicator;
    UIImageView *_horizontalScrollIndicator;
    struct UIEdgeInsets _scrollIndicatorInset;
    struct {
        unsigned int tracking:1;
        unsigned int dragging:1;
        unsigned int verticalBounceEnabled:1;
        unsigned int horizontalBounceEnabled:1;
        unsigned int verticalBouncing:1;
        unsigned int horizontalBouncing:1;
        unsigned int bouncesZoom:1;
        unsigned int zoomBouncing:1;
        unsigned int alwaysBounceHorizontal:1;
        unsigned int alwaysBounceVertical:1;
        unsigned int canCancelContentTouches:1;
        unsigned int delaysContentTouches:1;
        unsigned int programmaticScrollDisabled:1;
        unsigned int scrollDisabled:1;
        unsigned int zoomDisabled:1;
        unsigned int scrollTriggered:1;
        unsigned int scrollDisabledOnTouchBegan:1;
        unsigned int ignoreNextTouchesMoved:1;
        unsigned int cancelNextContentTouchEnded:1;
        unsigned int inContentViewCall:1;
        unsigned int dontSelect:1;
        unsigned int contentTouched:1;
        unsigned int cantCancel:1;
        unsigned int directionalLockEnabled:1;
        unsigned int directionalLockAutoEnabled:1;
        unsigned int lockVertical:1;
        unsigned int lockHorizontal:1;
        unsigned int keepLocked:1;
        unsigned int showsHorizontalScrollIndicator:1;
        unsigned int showsVerticalScrollIndicator:1;
        unsigned int indicatorStyle:2;
        unsigned int inZoom:1;
        unsigned int hideIndicatorsInZoom:1;
        unsigned int pushedTrackingMode:1;
        unsigned int multipleDrag:1;
        unsigned int displayingScrollIndicators:1;
        unsigned int verticalIndicatorShrunk:1;
        unsigned int horizontalIndicatorShrunk:1;
        unsigned int contentFitDisableScrolling:1;
        unsigned int pagingEnabled:1;
        unsigned int pagingLeft:1;
        unsigned int pagingRight:1;
        unsigned int pagingUp:1;
        unsigned int pagingDown:1;
        unsigned int lastHorizontalDirection:1;
        unsigned int lastVerticalDirection:1;
        unsigned int dontScrollToTop:1;
        unsigned int scrollingToTop:1;
        unsigned int useGestureRecognizers:1;
        unsigned int autoscrolling:1;
        unsigned int automaticContentOffsetAdjustmentDisabled:1;
        unsigned int skipStartOffsetAdjustment:1;
        unsigned int delegateScrollViewDidScroll:1;
        unsigned int delegateScrollViewDidZoom:1;
        unsigned int delegateContentSizeForZoomScale:1;
        unsigned int preserveCenterDuringRotation:1;
        unsigned int delaysTrackingWhileDecelerating:1;
        unsigned int pinnedZoomMin:1;
        unsigned int pinnedXMin:1;
        unsigned int pinnedYMin:1;
        unsigned int pinnedXMax:1;
        unsigned int pinnedYMax:1;
        unsigned int skipLinkChecks:1;
        unsigned int staysCenteredDuringPinch:1;
        unsigned int wasDelayingPinchForSystemGestures:1;
        unsigned int systemGesturesRecognitionPossible:1;
        unsigned int disableContentOffsetRounding:1;
        unsigned int adjustedDecelerationTargetX:1;
        unsigned int adjustedDecelerationTargetY:1;
    } _scrollViewFlags;
    float _farthestDistance;
    struct CGPoint _initialTouchPosition;
    struct CGPoint _startTouchPosition;
    double _startTouchTime;
    double _startOffsetX;
    double _startOffsetY;
    double _lastUpdateOffsetX;
    double _lastUpdateOffsetY;
    struct CGPoint _lastTouchPosition;
    double _lastTouchTime;
    double _lastUpdateTime;
    UIView *_contentView;
    float _minimumZoomScale;
    float _maximumZoomScale;
    UIView *_zoomView;
    double _horizontalVelocity;
    double _verticalVelocity;
    double _previousHorizontalVelocity;
    double _previousVerticalVelocity;
    void *_scrollHeartbeat;
    struct CGPoint _pageDecelerationTarget;
    struct CGSize _decelerationFactor;
    struct CGPoint _adjustedDecelerationTarget;
    struct CGSize _adjustedDecelerationFactor;
    double _decelerationLnFactorH;
    double _decelerationLnFactorV;
    NSArray *_deferredBeginTouchesInfo;
    id *_shadows;
    id _scrollNotificationViews;
    double _contentOffsetAnimationDuration;
    id _animation;
    id _pinch;
    id _pan;
    id _swipe;
    float _pagingSpringPull;
    float _pagingFriction;
    int _fastScrollCount;
    float _fastScrollMultiplier;
    float _fastScrollStartMultiplier;
    double _fastScrollEndTime;
    struct CGPoint _parentAdjustment;
    struct CGPoint _rotationCenterPoint;
    float _accuracy;
    float _hysteresis;
    unsigned int _zoomAnimationCount;
    struct CADoublePoint _zoomAnchorPoint;
}

+ (SEL)_pinchGestureAction;
+ (SEL)_panGestureAction;
@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinch;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_pan;
@property(nonatomic) id <UIScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (id)description;
@property(readonly, nonatomic, getter=_isAnimatingZoom) BOOL isAnimatingZoom;
@property(readonly, nonatomic, getter=_isAnimatingScroll) BOOL isAnimatingScroll;
@property(readonly, nonatomic, getter=isZoomBouncing) BOOL zoomBouncing;
@property(readonly, nonatomic, getter=isZooming) BOOL zooming;
- (void)zoomToRect:(struct CGRect)arg1 animated:(BOOL)arg2;
@property(nonatomic) float zoomScale;
- (float)_zoomScaleFromPresentationLayer:(BOOL)arg1;
- (void)setZoomScale:(float)arg1 animated:(BOOL)arg2;
- (void)setZoomScale:(float)arg1 withAnchorPoint:(struct CADoublePoint)arg2 validatingScrollOffset:(BOOL)arg3 allowRubberbanding:(BOOL)arg4 animated:(BOOL)arg5 duration:(double)arg6 notifyDelegate:(BOOL)arg7 force:(BOOL)arg8;
- (void)setZoomScale:(float)arg1 withAnchorPoint:(struct CADoublePoint)arg2 validatingScrollOffset:(BOOL)arg3 allowRubberbanding:(BOOL)arg4 animated:(BOOL)arg5 duration:(double)arg6 notifyDelegate:(BOOL)arg7;
- (void)_adjustContentSizeForView:(id)arg1 atScale:(float)arg2;
- (void)_zoomAnimationDidStop;
- (float)_zoomAnimationDurationForScale:(float)arg1;
- (BOOL)_ownsAnimationForKey:(id)arg1 ofView:(id)arg2;
- (void)_markScrollViewAnimationForKey:(id)arg1 ofView:(id)arg2;
- (float)_zoomScaleForRubberBandScale:(float)arg1;
- (float)_zoomRubberBandScaleForScale:(float)arg1;
- (void)_zoomToCenter:(struct CGPoint)arg1 scale:(float)arg2 duration:(double)arg3 force:(BOOL)arg4;
- (void)_zoomToCenter:(struct CGPoint)arg1 scale:(float)arg2 duration:(double)arg3;
- (BOOL)_ignoreLinkedOnChecks;
- (void)_setIgnoreLinkedOnChecks:(BOOL)arg1;
@property(nonatomic) BOOL scrollsToTop;
- (BOOL)touchesShouldCancelInContentView:(id)arg1;
- (BOOL)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
@property(nonatomic) BOOL delaysContentTouches;
@property(nonatomic) BOOL canCancelContentTouches;
@property(nonatomic) BOOL bouncesZoom;
@property(readonly, nonatomic, getter=isDecelerating) BOOL decelerating;
@property(readonly, nonatomic, getter=isDragging) BOOL dragging;
@property(readonly, nonatomic, getter=isTracking) BOOL tracking;
- (void)cancelNextContentTouchEnded;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;
- (int)swipe:(int)arg1 withEvent:(struct __GSEvent *)arg2;
- (BOOL)canHandleSwipes;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_touchesEnded:(id)arg1 withEvent:(id)arg2 wasCancelled:(BOOL)arg3;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)handlePan:(id)arg1;
- (void)handlePinch:(id)arg1;
- (void)_handleSwipe:(id)arg1;
- (void)gestureRecognizerFailed:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (void)_updatePinchGestureForState:(int)arg1;
- (void)_setStaysCenteredDuringPinch:(BOOL)arg1;
- (BOOL)_staysCenteredDuringPinch;
@property(nonatomic, getter=_zoomAnchorPoint, setter=_setZoomAnchorPoint:) struct CADoublePoint zoomAnchorPoint; // @synthesize zoomAnchorPoint=_zoomAnchorPoint;
- (id)_getDelegateZoomView;
- (void)_endPanWithEvent:(id)arg1;
- (void)_updatePanGesture;
- (BOOL)_updateTouchPanWithStartDelta:(struct CGSize)arg1 event:(id)arg2 ignoringDirectionalScroll:(BOOL)arg3;
- (struct CADoublePoint)_rubberBandContentOffsetForOffset:(struct CADoublePoint)arg1 outsideX:(char *)arg2 outsideY:(char *)arg3;
- (struct CGPoint)_touchPositionForTouches:(id)arg1;
- (id)_gestureTargetHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)_usesDifferentHitTestForGestures;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)commonHitTest:(id)arg1;
- (void)setShowBackgroundShadow:(BOOL)arg1;
- (BOOL)_showsBackgroundShadow;
- (void)_setShowsBackgroundShadow:(BOOL)arg1;
- (void)flashScrollIndicators;
- (void)_willMoveToWindow:(id)arg1;
- (void)setPreservesCenterDuringRotation:(BOOL)arg1;
- (BOOL)preservesCenterDuringRotation;
- (void)_registerForRotation:(BOOL)arg1 ofWindow:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(id)arg1;
- (void)willRotateToInterfaceOrientation:(id)arg1;
- (void)setUsesGestureRecognizers:(BOOL)arg1;
- (void)_systemGestureStateChanged:(id)arg1;
- (void)delayed:(id)arg1;
- (float)_scrollHysteresis;
- (BOOL)tracksImmediatelyWhileDecelerating;
- (void)setTracksImmediatelyWhileDecelerating:(BOOL)arg1;
- (BOOL)allowsMultipleFingers;
- (void)setAllowsMultipleFingers:(BOOL)arg1;
- (BOOL)usesGestureRecognizers;
- (void)setVerticalScrollDecelerationFactor:(float)arg1;
- (float)verticalScrollDecelerationFactor;
- (void)setHorizontalScrollDecelerationFactor:(float)arg1;
- (float)horizontalScrollDecelerationFactor;
@property(nonatomic) int indicatorStyle;
@property(nonatomic) float decelerationRate;
@property(nonatomic) struct UIEdgeInsets scrollIndicatorInsets;
@property(nonatomic) BOOL showsVerticalScrollIndicator;
@property(nonatomic) BOOL showsHorizontalScrollIndicator;
@property(nonatomic) BOOL alwaysBounceHorizontal;
@property(readonly, nonatomic, getter=_isHorizontalBouncing) BOOL isHorizontalBouncing;
@property(readonly, nonatomic, getter=_isVerticalBouncing) BOOL isVerticalBouncing;
@property(nonatomic) BOOL alwaysBounceVertical;
- (BOOL)bouncesVertically;
- (void)setBouncesVertically:(BOOL)arg1;
- (BOOL)bouncesHorizontally;
- (void)setBouncesHorizontally:(BOOL)arg1;
@property(nonatomic) BOOL bounces;
- (int)_abuttedPagingEdges;
- (int)_currentlyAbuttedContentEdges;
- (int)_abuttedEdgesForContentOffset:(struct CGPoint)arg1;
@property(nonatomic, getter=isPagingEnabled) BOOL pagingEnabled;
- (BOOL)isProgrammaticScrollEnabled;
- (void)setProgrammaticScrollEnabled:(BOOL)arg1;
- (BOOL)isZoomEnabled;
- (void)setZoomEnabled:(BOOL)arg1;
@property(nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property(nonatomic, getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
@property(nonatomic) struct CGPoint contentOffset;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)removeFromSuperview;
- (void)_webCustomViewWillBeRemovedFromSuperview;
@property(nonatomic) float maximumZoomScale; // @synthesize maximumZoomScale=_maximumZoomScale;
@property(nonatomic) float minimumZoomScale;
- (BOOL)_isRectFullyVisible:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_updatePagingGesture;
- (id)_scrollViewTouchDelayGesture;
- (void)_updatePinchGesture;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)layoutSubviews;
- (void)_centerContentIfNecessary;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

