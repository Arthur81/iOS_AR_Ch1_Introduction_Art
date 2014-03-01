//
//  ARTMasterViewController.h
//  iOS_ART_Ch1
//
//  Created by Arthur Arash Papian Gorji on 2013-03-10.
//  Copyright (c) 2013 Cylolix. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ARTDetailViewController;

@interface ARTMasterViewController : UITableViewController

@property (strong, nonatomic) ARTDetailViewController *detailViewController;

@end
