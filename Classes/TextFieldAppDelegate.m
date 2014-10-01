//
//  TextFieldAppDelegate.m
//  TextField
//
//  Created by Deepak Kumar on 23/09/09.
//  Copyright Rose India 2009. All rights reserved.
//

#import "TextFieldAppDelegate.h"
#import "RootViewController.h"


@implementation TextFieldAppDelegate

@synthesize window;
@synthesize navigationController;


#pragma mark -
#pragma mark Application lifecycle

- (void)applicationDidFinishLaunching:(UIApplication *)application {    
    
    // Override point for customization after app launch    
	
	[window addSubview:[navigationController view]];
    [window makeKeyAndVisible];
}


- (void)applicationWillTerminate:(UIApplication *)application {
	// Save data if appropriate
}


#pragma mark -
#pragma mark Memory management

- (void)dealloc {
	[navigationController release];
	[window release];
	[super dealloc];
}


@end

