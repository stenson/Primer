//
//  Memory.h
//  Primer
//
//  Created by Robert Stenson on 5/20/13.
//  Copyright (c) 2013 ADK. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Mnemonic;

@interface Memory : NSManagedObject

@property (nonatomic, retain) NSDate *created;
@property (nonatomic, retain) NSSet *mnemonics;
@end

@interface Memory (CoreDataGeneratedAccessors)

- (void)addMnemonicsObject:(Mnemonic *)value;
- (void)removeMnemonicsObject:(Mnemonic *)value;
- (void)addMnemonics:(NSSet *)values;
- (void)removeMnemonics:(NSSet *)values;

@end
