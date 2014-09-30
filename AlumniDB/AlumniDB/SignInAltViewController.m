//
//  SignInAltViewController.m
//  AlumniDB
//
//  Created by Lea Marolt on 9/30/14.
//  Copyright (c) 2014 Grinnell AppDev. All rights reserved.
//

#import "SignInAltViewController.h"

@interface SignInAltViewController ()

@end

@implementation SignInAltViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)signUp:(id)sender {
}

- (void)showMainScreen {
    UIStoryboard *mainStoryboard = [self grabStoryboard];
    UIViewController *slideViewController = [mainStoryboard instantiateInitialViewController];
    [self presentViewController:slideViewController animated:NO completion:nil];
}

- (UIStoryboard *)grabStoryboard {
    
    UIStoryboard *storyboard;
    
    // detect the height of our screen
    int height = [UIScreen mainScreen].bounds.size.height;
    
    if (height == 480) {
        storyboard = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
        // NSLog(@"Device has a 3.5inch Display.");
    } else {
        storyboard = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
        // NSLog(@"Device has a 4inch Display.");
    }
    
    return storyboard;
}

@end
