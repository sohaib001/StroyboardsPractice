//
//  PlayerDetailsViewController.h
//  StroyboardsPractice
//
//  Created by Sohaib Muhammad on 19/03/2013.
//  Copyright (c) 2013 coeus. All rights reserved.
//
// I m using block method instead of delegation


#import <UIKit/UIKit.h>
@class PlayerDetailsViewController;

typedef void( ^CancelButtonPressed) (PlayerDetailsViewController*)  ;
typedef void (^DoneButtonPressed)(PlayerDetailsViewController*);


@interface PlayerDetailsViewController : UITableViewController
{
  
}
@property (strong, nonatomic)CancelButtonPressed cancelPressed;
@property (strong, nonatomic)DoneButtonPressed donePressed;
- (IBAction)btnCancelPressed:(UIBarButtonItem *)sender;

- (IBAction)btnDonePressed:(UIBarButtonItem *)sender;
- (void) cancelBtnPressed:(CancelButtonPressed) controller;
- (void) doneBtnPressed:(DoneButtonPressed) controller;


-(id)initwithCancelAction:(CancelButtonPressed) cancelAct andDoneAction:(DoneButtonPressed) doneAct;


@end
