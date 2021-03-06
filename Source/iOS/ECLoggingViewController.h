// --------------------------------------------------------------------------
//  Copyright 2013 Sam Deane, Elegant Chaos. All rights reserved.
//  This source code is distributed under the terms of Elegant Chaos's
//  liberal license: http://www.elegantchaos.com/license/liberal
// --------------------------------------------------------------------------

#import <UIKit/UIKit.h>

@class ECLogViewController;
@class ECLoggingSettingsViewController;

@interface ECLoggingViewController : UIViewController

@property (strong, nonatomic) IBOutlet ECLoggingSettingsViewController* oSettingsController;
@property (strong, nonatomic) IBOutlet ECLogViewController* oLogController;

- (void)showModallyWithController:(UIViewController*)controller;

@end
