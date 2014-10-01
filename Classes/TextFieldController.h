//
//  TextFieldController.h
//  TextField
//
//  Created by Deepak Kumar on 23/09/09.
//  Copyright 2009 Rose India. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface TextFieldController : UIViewController <UITextFieldDelegate> {
	UITextField		*textFieldNormal;
	UITextField		*textFieldRounded;
	UITextField		*textFieldSecure;
	UITextField		*textFieldLeftView;
	
	NSArray			*dataSourceArray;
}
@property (nonatomic, retain, readonly) UITextField	*textFieldNormal;
@property (nonatomic, retain, readonly) UITextField	*textFieldRounded;
@property (nonatomic, retain, readonly) UITextField	*textFieldSecure;
@property (nonatomic, retain, readonly) UITextField	*textFieldLeftView;

@property (nonatomic, retain) NSArray *dataSourceArray;

@end
