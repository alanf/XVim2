//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDEAuxiliaryEditorContextAttributes : NSObject
{
    NSString *_title;
    NSString *_tooltip;
    Class _editorClass;
}

+ (id)sharedAttributes;
@property(readonly, nonatomic) Class editorClass; // @synthesize editorClass=_editorClass;
@property(readonly, nonatomic) NSString *tooltip; // @synthesize tooltip=_tooltip;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithExtension:(id)arg1;

@end

