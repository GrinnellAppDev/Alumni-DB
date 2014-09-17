//
//  GiveSharePermissionViewController.h
//  AlumniDB
//
//  Created by Lea Marolt on 9/16/14.
//  Copyright (c) 2014 Grinnell AppDev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GiveSharePermissionViewController : UIViewController

// OUTLETS
@property (weak, nonatomic) IBOutlet UILabel *modalView;
@property (weak, nonatomic) IBOutlet UILabel *shareInfoLabel;
@property (weak, nonatomic) IBOutlet UILabel *shareReasonLabel;
@property (weak, nonatomic) IBOutlet UIButton *yesBtn;
@property (weak, nonatomic) IBOutlet UIButton *noBtn;

// ACTIONS
- (IBAction)yes:(id)sender;
- (IBAction)no:(id)sender;

@end
