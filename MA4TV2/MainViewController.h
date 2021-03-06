//
//  MainViewController.h
//  MobileApps4Tourism
//
//  Created by Mats Sandvoll on 18.09.13.
//  Copyright (c) 2013 Mats Sandvoll. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "POIViewController.h"
#import "FavouritesViewController.h"
#import "TourViewController.h"
#import <sqlite3.h>
#import "TourCategory.h"
#import "POICategory.h"
#import "Tour.h"
#import "POI.h"
#import "Favourite.h"
#import "GeoPointTour.h"
#import "DBManager.h"
#import "SearchViewController.h"

@interface MainViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, retain) IBOutlet UIImageView *imageView;
@property (nonatomic, retain) NSMutableArray *tourCategories;
@property (nonatomic, retain) NSMutableArray *poiCategories;
@property (nonatomic, retain) DBManager *dbManager;

@end
