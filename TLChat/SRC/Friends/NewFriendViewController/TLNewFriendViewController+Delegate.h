//
//  TLNewFriendViewController+Delegate.h
//  TLChat
//
//  Created by 李伯坤 on 16/3/17.
//  Copyright © 2016年 李伯坤. All rights reserved.
//

#import "TLNewFriendViewController.h"
#import "TLAddThirdPartFriendCell.h"

@interface TLNewFriendViewController (Delegate) <UISearchBarDelegate, TLAddThirdPartFriendCellDelegate>

- (void)registerCellClass;

@end
