//
//  ViewController.h
//  UITabelView
//
//  Created by chen on 15/10/28.
//  Copyright © 2015年 chen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, strong) NSArray *array;


@end

