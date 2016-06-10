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
<<<<<<< HEAD
- (void) requestNewItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;
- (void) requestOldItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;

=======
//- (void) insertObject:(Media *)object inMediaItemsAtIndex:(NSUInteger)index {

- (void) insertObject:(Media *)item inMediaItemsAtIndex:(NSUInteger)index;
>>>>>>> assignment-31
@end

