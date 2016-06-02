//
//  DataSource.h
//  Blocstagram
//
//  Created by Alexandar on 6/1/16.
//  Copyright © 2016 Alexandar. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataSource : NSObject
 +(instancetype) sharedInstance;
@property (nonatomic, strong, readonly) NSArray *mediaItems;
@end
