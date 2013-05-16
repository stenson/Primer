//
//  ADKMasterViewController.h
//  Primer
//
//  Created by Robert Stenson on 5/15/13.
//  Copyright (c) 2013 ADK. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ADKDetailViewController;

#import <CoreData/CoreData.h>

@interface ADKMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) ADKDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
