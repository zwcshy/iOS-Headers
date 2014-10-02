//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "WACUIHostProtocol.h"

@class EAWiFiUnconfiguredAccessoryBrowserManager, NSString;

@interface WACUIRemoteViewController : _UIRemoteViewController <WACUIHostProtocol>
{
    EAWiFiUnconfiguredAccessoryBrowserManager *_parent;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property __weak EAWiFiUnconfiguredAccessoryBrowserManager *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)wifiDidShutdown;
- (void)_signalPresentationComplete;
- (void)backendFoundNewWACDevices:(id)arg1 andRemovedWACDevices:(id)arg2;
- (void)backendDidStopSearchWithError:(id)arg1;
- (void)backendDidStartSearchWithError:(id)arg1;
- (void)updateState:(int)arg1;
- (void)dismissWithStatus:(long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
