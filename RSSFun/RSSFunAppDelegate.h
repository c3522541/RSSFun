//
//  RSSFunAppDelegate.h
//  RSSFun
//
//  Created by Sean Che on 11-06-20.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RootViewController.h"

@interface RSSFunAppDelegate : NSObject <UIApplicationDelegate> {
    RootViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end
