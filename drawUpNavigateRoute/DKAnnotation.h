//
//  DKAnnotation.h
//  drawUpNavigateRoute
//
//  Created by devzkn on 07/10/2016.
//  Copyright © 2016 DevKevin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
@interface DKAnnotation : NSObject<MKAnnotation>

@property (nonatomic,assign) CLLocationCoordinate2D coordinate;
// Title and subtitle for use by selection UI.
@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *subtitle;

+(instancetype)annotationWithPlacemark:(CLPlacemark*)placemark;

@end
