//
//  CustomSegue.m
//  TravelApp
//
//  Created by Manish Dudharejia on 29/10/14.
//  Copyright (c) 2014 E2M. All rights reserved.
//

#import "CustomSegue.h"
#import "DashboardViewController.h"
#import "Helper.h"

@implementation CustomSegue

- (void)perform{
    UIViewController *sourceViewController = self.sourceViewController;
//    UIViewController *destinationViewController = self.destinationViewController;
    if ([self.identifier isEqualToString:@"pop"]) {
        [sourceViewController.navigationController popViewControllerAnimated:YES];
    } else if ([self.identifier isEqualToString:@"popToRootView"]){
        if([User sharedUser].isLogin){
            NSArray *controllers = sourceViewController.navigationController.viewControllers;
            [controllers enumerateObjectsUsingBlock:^(id obj, NSUInteger idx, BOOL *stop) {
                UIViewController *controller = (UIViewController*)obj;
                if ([obj isKindOfClass:[DashboardViewController class]]) {
                    [sourceViewController.navigationController popToViewController:controller animated:YES];
                    *stop = YES;
                }
            }];
        }else if ([self.identifier isEqualToString:@"logOut"]) {
            [User sharedUser].login = NO;
            [Helper addCustomObjectToUserDefaults:[User sharedUser] key:kUserInformation];
            [sourceViewController.navigationController popToRootViewControllerAnimated:YES];
        }
    }
}

@end
