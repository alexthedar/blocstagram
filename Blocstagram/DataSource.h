//
//  DataSource.h
//  Blocstagram
//
//  Created by Alexandar on 6/1/16.
//  Copyright © 2016 Alexandar. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Media;
typedef void (^NewItemCompletionBlock)(NSError *error);
@interface DataSource : NSObject
 +(instancetype) sharedInstance;
+ (NSString *) instagramClientID;
@property (nonatomic, strong, readonly) NSArray *mediaItems;
@property (nonatomic, assign) BOOL isRefreshing;
@property (nonatomic, strong, readonly) NSString *accessToken;
- (void) deleteMediaItem:(Media *)item;
- (void) requestNewItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;
- (void) requestOldItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;

@end

