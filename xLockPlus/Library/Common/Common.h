//
//  Common.h
//  FlipIn
//
//  Created by Marvin on 20/11/13.
//  Copyright (c) 2013 Marvin. All rights reserved.
//

#ifndef iPhoneStructure_Common_h
#define iPhoneStructure_Common_h

#define isiPhone5                       (fabs((double)[[UIScreen mainScreen] bounds].size.height - (double)568) < DBL_EPSILON)
#define appDelegate                     ((AppDelegate *)[[UIApplication sharedApplication] delegate])
#define kUserDirectoryPath              NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)
#define IS_IOS7_OR_GREATER              [[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0f ? YES : NO
#define PLAYER                          [MPMusicPlayerController iPodMusicPlayer]

#define IS_IPHONE6                      [UIScreen mainScreen].bounds.size.width==375
#define IS_IPHONE6PLUS                  [UIScreen mainScreen].bounds.size.width==414

#define kRandomPasswordString           @"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"

#define DegreesToRadians(degrees)       (degrees * M_PI / 180)
#define RadiansToDegrees(radians)       (radians * 180/M_PI)

#define kGeoCodingString                @"http://maps.google.com/maps/geo?q=%f,%f&output=csv"
#define kNotificationMessage            @"Notification Message."
#define kRemindMeNotificationDataKey    @"kRemindMeNotificationDataKey"

#define kDateFormat                     @"yyyy-MM-dd"

#define kErrorImage                     [UIImage imageNamed:@"error"]
#define kRightImage                     [UIImage imageNamed:@"right"]

#define kChrismasUnlockAll              @"com.bcd.merrychristmas14.unlockallcards"
#define kRemoveAds                      @"com.bcd.merrychristmas14.removeads"

#define IPHONE_INTERSTITIAL_UNIT_ID     @"ca-app-pub-1474799636440583/4658795751"

#define msgUnlockAllChristmasCards      @"You need to purchase images to use all the artworks. Tap on Buy now to unlock all features."
#define msgUnlockAllChristmasSuccess    @"Thank you for purchasing the artworks. Now you can enjoy making beautiful cards & stickers."

#define msgUnlockAds                    @"You need to remove ads to use application without interruption of ads."
#define msgInAppAdsSuccess              @"Now you can enjoy this application without being interrupted by advertisements. Have a good day!!"

#define msgInAppRestoreSuccess          @"All In App Purchases have beed restored successfully."

#define msgInAppAdsAlreadyDone          @"You have already purchased \"Remove ads\" in app purchase."
#define msgInAppChristmasAlreadyDone    @"You have already purchased all \"Artworks.\""

#endif
