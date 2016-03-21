//
//  ViewController.h
//  StatusBarTest
//
//  Created by mac on 16/3/21.
//  Copyright © 2016年 Seven. All rights reserved.
//


/*
 根据状态栏获取网络状态，可以区分2G、3G、4G、WIFI，系统的方法，比较快捷。稍微不爽的就是万一连接的WIFI没有联网的话。
 手机状态栏：
 
 -(void)getNetworkStatuFromStatusBar
 {
 UIApplication *app = [UIApplication sharedApplication] ;
 //获取状态栏statusBar的前景视图foregroundView的所有子视图
 NSArray *childrenViews = [[[app valueForKeyPath:@"statusBar"]valueForKeyPath:@"foregroundView"]subviews];
 
 for (id childrenView in childrenViews) {
 //获取状态栏中的显示网络状态的VIew
 if ([childrenView isKindOfClass:NSClassFromString(@"UIStatusBarDataNetworkItemView")]) {
 //获取网络状态值
 int networkType = [[childrenView valueForKeyPath:@"dataNetworkType"]intValue];
 switch (networkType) {
 case 0:
 NSLog(@"无网络");
 break;
 case 1:
 NSLog(@"2G");
 break;
 case 2:
 NSLog(@"3G");
 break;
 case 3:
 NSLog(@"4G");
 break;
 case 5:
 NSLog(@"wifi");
 break;
 default:
 break;
 }
 }
 }
 }

 */
#import <UIKit/UIKit.h>

@interface ViewController : UIViewController


@end

