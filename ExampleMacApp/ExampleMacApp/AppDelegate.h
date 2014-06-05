//
//  AppDelegate.h
//  ExampleMacApp
//
//  Created by Rebecca Henderson on 6/4/14.
//  Copyright (c) 2014 Beckasaurus Productions. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
@property (assign) IBOutlet NSTextField *nameTextField;
@property (assign) IBOutlet NSTextField *helloNameLabel;
@property (assign) IBOutlet NSString *nameString;

@end
