//
//  IndexViewController.h
//  KaiChangBai
//
//  Created by kwongming lau on 12-12-20.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import "BaseViewController.h"
@interface IndexViewController : BaseViewController<UITableViewDataSource,UITableViewDelegate>
{
    NSMutableArray *arrDataList;
    UITableView *myTableView;
}
@property(nonatomic,strong)UITableView *myTableView;
@end
