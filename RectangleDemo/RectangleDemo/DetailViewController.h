//
//  DetailViewController.h
//  RectangleDemo
//
//  Created by William on 13/3/15.
//  Copyright (c) 2015 William. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

