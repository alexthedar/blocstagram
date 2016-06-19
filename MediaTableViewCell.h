//
//  MediaTableViewCell.h
//  Blocstagram
//
//  Created by Alexandar on 6/2/16.
//  Copyright © 2016 Alexandar. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media, MediaTableViewCell;

@protocol MediaTableViewCellDelegate <NSObject>

- (void) cell:(MediaTableViewCell *)cell didTapImageView:(UIImageView *)imageView;
- (void) cell:(MediaTableViewCell *)cell didLongPressImageView:(UIImageView *)imageView;
- (void) cellDidPressLikeButton:(MediaTableViewCell *)cell;
@end
@interface MediaTableViewCell : UITableViewCell
@property (nonatomic, weak) id <MediaTableViewCellDelegate> delegate;
@property (nonatomic, strong) Media *mediaItem;


+ (CGFloat) heightForMediaItem:(Media *)mediaItem width:(CGFloat)width;


@end

