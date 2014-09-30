//
//  ViewController.h
//  AlumniDB
//
//  Created by Lea Marolt on 9/16/14.
//  Copyright (c) 2014 Grinnell AppDev. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface ViewController : UIViewController

// OUTLETS
@property (weak, nonatomic) IBOutlet UIButton *beginBtn;
@property (weak, nonatomic) IBOutlet MKMapView *mapView;
@property (weak, nonatomic) IBOutlet UIButton *searchBtn;

// ACTIONS
- (IBAction)begin:(id)sender;
- (IBAction)search:(id)sender;


@end
