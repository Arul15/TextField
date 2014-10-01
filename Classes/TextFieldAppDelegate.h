//
//  TextFieldAppDelegate.h
//  TextField
//
//  Created by Deepak Kumar on 23/09/09.
//  Copyright Rose India 2009. All rights reserved.
//

@interface TextFieldAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

