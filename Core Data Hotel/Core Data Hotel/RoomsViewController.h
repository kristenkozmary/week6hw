//
//  RoomsViewController.h
//  Core Data Hotel
//
//  Created by Kristen Kozmary on 9/10/15.
//  Copyright (c) 2015 koz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Hotel.h"

@interface RoomsViewController : UIViewController

@property (strong, nonatomic) Hotel *currentHotel;
@property (strong, nonatomic) NSArray *roomsArray;
@end
