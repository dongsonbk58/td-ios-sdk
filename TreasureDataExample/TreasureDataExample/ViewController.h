//
//  ViewController.h
//  TreasureDataExample
//
//  Created by Mitsunori Komatsu on 7/13/16.
//  Copyright © 2016 Treasure Data. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

- (IBAction)addEvent:(id)sender;
- (IBAction)uploadEvents:(id)sender;

@property (weak, nonatomic) IBOutlet UIButton *addEventBtn;
@property (weak, nonatomic) IBOutlet UIButton *uploadEventsBtn;

@end

