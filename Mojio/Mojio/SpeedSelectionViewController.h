//
//  SpeedSelectionViewController.h
//  Mojio
//
//  Created by Flynn Howling on 11/14/2013.
//  Copyright (c) 2013 team31. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Session.h"
#import "Device.h"


@interface SpeedSelectionViewController : UIViewController     <UIPickerViewDataSource,UIPickerViewDelegate>
@property (strong, nonatomic) IBOutlet UILabel *speedSelected;
@property (strong, nonatomic) IBOutlet UIPickerView *speedSelection;
@property (strong, nonatomic)          NSArray *speedSeletion;
@property (strong, nonatomic) IBOutlet UIButton *resetButton;
- (IBAction)resetPressed:(id)sender;
@property (strong, nonatomic) IBOutlet UIButton *setButton;
- (IBAction)setButtonPressed:(id)sender;
@property (strong, nonatomic) IBOutlet UISegmentedControl *toggleUnite;
- (IBAction)toggleChanged:(id)sender;
@property (strong, nonatomic) IBOutlet UISegmentedControl *toggleOnOff;
- (IBAction)onOffChanged:(id)sender;

@end
