//
//  PlayerCell.h
//  StroyboardsPractice
//
//  Created by Sohaib Muhammad on 18/03/2013.
//  Copyright (c) 2013 coeus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UILabel *lblName;
@property (strong, nonatomic) IBOutlet UILabel *lblGame;
@property (strong, nonatomic) IBOutlet UIImageView *imgViewRatings;

@end
