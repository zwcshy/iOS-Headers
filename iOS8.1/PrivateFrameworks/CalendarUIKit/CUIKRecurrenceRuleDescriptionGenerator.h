//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CUIKRecurrenceRuleDescriptionGenerator : NSObject
{
}

+ (int)daysTypeForDayArray:(id)arg1;
+ (id)_customDayCombinationDescription:(id)arg1;
+ (id)_orDaysOfWeekString:(id)arg1;
+ (id)_weekDayPositionAsString:(int)arg1;
+ (id)_dayOfMonthAsString:(int)arg1;
+ (id)_daysOfWeek;
+ (id)_numberedWeekDayString:(id)arg1;
+ (id)_andDaysOfWeekString:(id)arg1;
- (id)naturalLanguageDescriptionForRecurrenceRule:(id)arg1 withStartDate:(id)arg2;

@end
