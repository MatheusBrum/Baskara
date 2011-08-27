//
//  BhaskaraAppDelegate.h
//  Bhaskara
//
//  Created by Matheus Brum on 01/08/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BhaskaraViewController;

@interface BhaskaraAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    BhaskaraViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet BhaskaraViewController *viewController;

@end

