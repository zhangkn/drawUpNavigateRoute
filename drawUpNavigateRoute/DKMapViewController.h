//
//  DKMapViewController.h
//  drawUpNavigateRoute
//
//  Created by devzkn on 07/10/2016.
//  Copyright © 2016 DevKevin. All rights reserved.
//

#import <UIKit/UIKit.h>
@class MKDirectionsResponse;

@interface DKMapViewController : UIViewController

@property (nonatomic,strong) MKDirectionsResponse *response;

@end
