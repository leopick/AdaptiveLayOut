//
//  BaseViewController.h
//  AdaptiveLayOut
//
//  Created by finder on 16/6/23.
//  Copyright © 2016年 com.autohome.baidu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BaseViewController : UIViewController




/**
 *  是否显示导航栏右侧的分享按钮
 */
@property (nonatomic, assign) BOOL              isShowRightBtn;

/**
 *  是否显示返回按钮的title
 */
@property (nonatomic, assign) BOOL              isShowBackBtnTitle;

- (UIImage *)imageWithColor:(UIColor *)color;

/**
 *  显示等待框
 *
 *  @param text  等待框里面显示的文字
 *  @param delay 等待框显示多少秒
 */
- (void)showHudWithText:(NSString *)text delay:(NSTimeInterval)delay;

/**
 *  等待框消失
 */
- (void)showHUDDone;






@end
