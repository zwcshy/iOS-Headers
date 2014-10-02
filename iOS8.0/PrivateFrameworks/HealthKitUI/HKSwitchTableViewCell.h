//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UISwitch;

@interface HKSwitchTableViewCell : UITableViewCell
{
    UILabel *_displayLabel;
    UIImageView *_iconImageView;
    UISwitch *_switch;
    BOOL _centersIcon;
    id <HKSwitchTableViewCellDelegate> _delegate;
}

@property(nonatomic) BOOL centersIcon; // @synthesize centersIcon=_centersIcon;
@property(nonatomic) __weak id <HKSwitchTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)switchValueChanged:(id)arg1;
@property(nonatomic, getter=isOn) BOOL on;
- (void)setIconImage:(id)arg1;
- (void)setDisplayText:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_setupUI;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
