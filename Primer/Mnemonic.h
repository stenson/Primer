//
//  Mnemonic.h
//  Primer
//
//  Created by Robert Stenson on 5/20/13.
//  Copyright (c) 2013 ADK. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Memory;

@interface Mnemonic : NSManagedObject

@property (nonatomic, retain) NSDate * created;
@property (nonatomic, retain) NSData * data;
@property (nonatomic, retain) NSNumber * latitude;
@property (nonatomic, retain) NSNumber * longitude;
@property (nonatomic, retain) NSDate * modified;
@property (nonatomic, retain) NSString * text;
@property (nonatomic, retain) NSNumber * type;
@property (nonatomic, retain) NSString * taps;
@property (nonatomic, retain) NSString * path;
@property (nonatomic, retain) Memory *memory;

@end
