/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class UIControl, UIRemoveControl, UIView;

@interface _UITableCellTransientData : NSObject
{
    UIRemoveControl *_removeControl;
    UIControl *_grabber;
    UIView *_separator;
    unsigned int _reorderingEnabled:1;
    unsigned int _reserved:31;
}

- (BOOL)dataRequired;	// IMP=0x323e88d8

@end
