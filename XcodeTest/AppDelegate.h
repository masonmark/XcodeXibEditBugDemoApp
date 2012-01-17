//
//  AppDelegate.h
//  XcodeTest
//
//  Created by Mason Mark on 1/17/12.
//  Copyright (c) 2012 Nakahara Informatics, Inc. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>
{
    IBOutlet NSView *assNock;
    IBOutlet NSView *assNock2;
    IBOutlet NSView *assNock3;
}

@property (assign) IBOutlet NSWindow *window;

@end
