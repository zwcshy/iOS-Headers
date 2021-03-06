/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIAlertView.h"

#import "UIAlertViewDelegate-Protocol.h"

@class UITextField;

@interface MPPasswordAlertView : UIAlertView <UIAlertViewDelegate>
{
    id _completionHandler;
    long long _style;
    UITextField *_passwordTextField;
}

@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)initWithStyle:(long long)arg1 routeName:(id)arg2 completionHandler:(id)arg3;

@end

