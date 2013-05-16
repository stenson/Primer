//
//  ADKDetailViewController.h
//  Primer
//
//  Created by Robert Stenson on 5/15/13.
//  Copyright (c) 2013 ADK. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ADKDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
