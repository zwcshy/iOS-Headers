//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, PLManagedAsset, PUVideoTrimQueueController;

@protocol PUVideoTrimQueueControllerDelegate <NSObject>

@optional
- (void)controller:(PUVideoTrimQueueController *)arg1 didCancelTrimmingAssets:(NSArray *)arg2;
- (void)controller:(PUVideoTrimQueueController *)arg1 didFinishTrimmingAssets:(NSArray *)arg2;
- (void)controller:(PUVideoTrimQueueController *)arg1 didTrimAsset:(PLManagedAsset *)arg2;
- (void)controller:(PUVideoTrimQueueController *)arg1 willTrimAsset:(PLManagedAsset *)arg2;
@end

