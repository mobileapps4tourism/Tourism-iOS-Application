//
//  POI.h
//  MA4TV2
//
//  Created by Mats Sandvoll on 18.11.13.
//  Copyright (c) 2013 Mats Sandvoll. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface POI : NSObject

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *description;
@property (nonatomic, retain) NSString *imagePath;
@property (nonatomic, retain) NSString *url;
@property (nonatomic, retain) NSString *category;
@property double latitude;
@property double longitude;
@property double rating;

@end
