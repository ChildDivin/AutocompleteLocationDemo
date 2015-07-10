//
//  ViewController.h
//  AutocompleteLocationDemo
//
//  Created by Tops on 27/01/15.
//  Copyright (c) 2015 Tops. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@class SPGooglePlacesAutocompleteQuery;
@interface ViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UISearchDisplayDelegate, UISearchBarDelegate,CLLocationManagerDelegate>
{
    NSArray *searchResultPlaces;
    SPGooglePlacesAutocompleteQuery *searchQuery;
    BOOL shouldBeginEditing;
    CLLocationManager *locationManager;
    IBOutlet UITextField *txtAddress;
    IBOutlet UITableView *tbl;
}

@end
