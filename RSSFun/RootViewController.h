//
//  RootViewController.h
//  RSSFun
//
//  Created by Sean Che on 11-06-20.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface RootViewController : UITableViewController {
    NSMutableArray *_allEntries;
}
@property (nonatomic, retain) NSMutableArray *_allEntries;

@end
