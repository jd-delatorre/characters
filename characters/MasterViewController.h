//
//  MasterViewController.h
//  characters
//
//  Created by John De La Torre on 2/8/14.
//  Copyright (c) 2014 John De La Torre. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
