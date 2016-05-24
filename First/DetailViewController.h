//
//  DetailViewController.h
//  First
//
//  Created by William Whatley on 5/24/16.
//  Copyright © 2016 William Whatley. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

