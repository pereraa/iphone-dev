/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIButtonBar;

@interface UISwappableImageView : UIView
{
    id _value;
    id _alternate;
    BOOL _showAlternate;
    BOOL _flipped;
    int _currentAnimation;
    UIButtonBar *_buttonBar;
    int _buttonTag;
}

- (void)animateImage:(float)fp8 withButtonBar:(id)fp12 withTag:(int)fp16;	// IMP=0x3241f12c
- (void)animationDidStop:(id)fp8 finished:(BOOL)fp12;	// IMP=0x3241f338
- (void)dealloc;	// IMP=0x3241ee74
- (id)initWithImage:(id)fp8 alternateImage:(id)fp12;	// IMP=0x3241edb4
- (void)setCurrentImage;	// IMP=0x3241eee8
- (void)setFlipped:(BOOL)fp8;	// IMP=0x324244d8
- (void)showAlternateImage:(BOOL)fp8;	// IMP=0x3241f0f0

@end
