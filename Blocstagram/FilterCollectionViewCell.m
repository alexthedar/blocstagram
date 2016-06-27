//
//  FilterCollectionViewCell.m
//  Blocstagram
//
//  Created by Alexandar on 6/27/16.
//  Copyright © 2016 Alexandar. All rights reserved.
//

#import "FilterCollectionViewCell.h"

@implementation FilterCollectionViewCell

-(id)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if(self) {
        self.thumbnail.contentMode=UIViewContentModeScaleToFill;
        self.thumbnail.clipsToBounds = YES;
        self.label.textAlignment = NSTextAlignmentCenter;
        self.label.font = [UIFont fontWithName:@"HelveticaNaue-Meidum" size:10];
        for(UIView *view in @[self.thumbnail, self.label]){
            [self.contentView addSubview:view];
        }
    }
    return self;
}



@end
