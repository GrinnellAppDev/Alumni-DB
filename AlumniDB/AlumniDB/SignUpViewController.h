//
//  SignUpViewController.h
//  AlumniDB
//
//  Created by Lea Marolt on 9/16/14.
//  Copyright (c) 2014 Grinnell AppDev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SignUpViewController : UIViewController

// OUTLETS
@property (weak, nonatomic) IBOutlet UIView *modalView;
@property (weak, nonatomic) IBOutlet UIView *signUpBtn;


// ACTIONS
- (IBAction)signUp:(id)sender;

@end
