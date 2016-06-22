//
//  UIImage+ImageUtilities.h
//  Blocstagram
//
//  Created by Alexandar on 6/22/16.
//  Copyright © 2016 Alexandar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ImageUtilities)

- (UIImage *) imageWithFixedOrientation;
- (UIImage *) imageResizedToMatchAspectRatioOfSize:(CGSize)size;
- (UIImage *) imageCroppedToRect:(CGRect)cropRect;



@end
