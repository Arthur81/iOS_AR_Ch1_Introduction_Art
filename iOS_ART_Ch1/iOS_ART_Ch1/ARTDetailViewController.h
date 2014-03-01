//
//  ARTDetailViewController.h
//  iOS_ART_Ch1
//
//  Created by Arthur Arash Papian Gorji on 2013-03-10.
//  Copyright (c) 2013 Cylolix. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ARTDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
