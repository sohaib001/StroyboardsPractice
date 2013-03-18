//
//  AppDelegate.h
//  StroyboardsPractice
//
//  Created by Sohaib Muhammad on 18/03/2013.
//  Copyright (c) 2013 coeus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Player.h"
#import "PlayersViewController.h"
@interface AppDelegate : UIResponder <UIApplicationDelegate>{
    NSMutableArray *players;
}

@property (strong, nonatomic) UIWindow *window;

@end
