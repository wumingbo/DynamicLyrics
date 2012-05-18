//
//  AppPrefsWindowController.h
//  LyricX
//
//  Created by Martian on 12-5-1.
//  Copyright (c) 2012年 Martian. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "DBPrefsWindowController.h"
#import "Constants.h"
@interface AppPrefsWindowController : DBPrefsWindowController <NSWindowDelegate> {
    IBOutlet NSView *generalPreferenceView;
    IBOutlet NSView *advancedPreferenceView;
}

- (IBAction)EnableMenuBarLyrics:(id)sender;
- (IBAction)DesktopLyricsChanged:(id)sender;
- (IBAction)openFontPanel:(id)sender;

@end
