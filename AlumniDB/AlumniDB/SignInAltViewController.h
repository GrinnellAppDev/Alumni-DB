//
//  SignInAltViewController.h
//  AlumniDB
//
//  Created by Lea Marolt on 9/30/14.
//  Copyright (c) 2014 Grinnell AppDev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SignInAltViewController : UIViewController

// OUTLETS
@property (weak, nonatomic) IBOutlet UIButton *signUpBtn;
@property (weak, nonatomic) IBOutlet UITextField *emailField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;

// ACTIONS
- (IBAction)signUp:(id)sender;

@end
