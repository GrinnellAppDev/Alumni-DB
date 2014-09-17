//
//  SignInViewController.h
//  AlumniDB
//
//  Created by Lea Marolt on 9/16/14.
//  Copyright (c) 2014 Grinnell AppDev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SignInViewController : UIViewController

// OUTLETS
@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;
@property (weak, nonatomic) IBOutlet UIButton *signInBtn;
@property (weak, nonatomic) IBOutlet UIButton *signUpBtn;
@property (weak, nonatomic) IBOutlet UIView *modalView;

// ACTIONS
- (IBAction)signIn:(id)sender;
- (IBAction)signUp:(id)sender;

@end
