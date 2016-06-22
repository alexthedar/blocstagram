//
//  CameraViewController.h
//  Blocstagram
//
//  Created by Alexandar on 6/22/16.
//  Copyright © 2016 Alexandar. All rights reserved.
//

#import <UIKit/UIKit.h>
@class CameraViewController;

@protocol CameraViewControllerDelegate <NSObject>

- (void) cameraViewController:(CameraViewController *)cameraViewController didCompleteWithImage:(UIImage *)image;

@end

@interface CameraViewController : UIViewController

@property (nonatomic, weak) NSObject <CameraViewControllerDelegate> *delegate;

@end