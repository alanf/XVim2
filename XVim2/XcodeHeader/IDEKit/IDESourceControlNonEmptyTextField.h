//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@interface IDESourceControlNonEmptyTextField : NSTextField
{
    BOOL _containsNonEmptyMessage;
}

@property(readonly) BOOL containsNonEmptyMessage; // @synthesize containsNonEmptyMessage=_containsNonEmptyMessage;
- (void)textDidChange:(id)arg1;
- (BOOL)_computeContainsNonEmptyMessage;

@end

