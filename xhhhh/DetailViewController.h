//
//  DetailViewController.h
//  xhhhh
//
//  Created by Ovidio Lopez on 07/08/13.
//  Copyright (c) 2013 Ovidio Lopez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
