//
//  MediaTableViewCellTests.m
//  Blocstagram
//
//  Created by Alexandar on 6/30/16.
//  Copyright © 2016 Alexandar. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "Media.h"
#import "MediaTableViewCell.h"

@interface MediaTableViewCellTests : XCTestCase

@property (strong,nonatomic)NSMutableArray *randomMediaItems ;
//@property  (strong,nonatomic)MediaTableViewCell *cell;

@end

@implementation MediaTableViewCellTests

- (void)setUp {
    [super setUp];
    
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testThatHeightForMediaTableViewCellReturns {
    NSDictionary *userDictionary = @{@"id" : @"8675309",
                                     @"username" : @"d'oh",
                                     @"full_name" : @"Homer Simpson",
                                     @"profile_picture" : @"http://www.exampled.com/van.jpg"};
    
    
    NSDictionary *mediaDictionary = @{@"id" : @"8675309",
                                      @"users" : userDictionary,
                                      @"images" : @{@"standard_resolution" : @{@"url": @"http://exampleimage.com/1.jpg"}},
                                      @"caption" : @{@"text" : @"This is text"},
                                      @"user_has_liked" : @"true",
                                      @"likes" : @{@"count" : @1                                 }
                                      };
    
    Media *media = [[Media alloc] initWithDictionary:mediaDictionary];
    media.image = [UIImage imageNamed:@"1.jpg"];
    UITraitCollection *traitCollection = [[MediaTableViewCell alloc] init].traitCollection;
    
    CGFloat height = [MediaTableViewCell heightForMediaItem:media width:100 traitCollection:traitCollection];
    XCTAssertEqual(height, 100, @"height should be returned");
}

- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
    }];
}

@end