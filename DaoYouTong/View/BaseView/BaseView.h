//
//  BaseView.h
//  DaoYouTong
//
//  Created by 魏帅 on 2017/12/4.
//  Copyright © 2017年 魏帅. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BaseView : UIView
//---------------------------------------------------------------------------
//-------------------------------- 变量 ---------------------------------------
//---------------------------------------------------------------------------
/**
 @brief  用与显示可变信息的Label
 @discussion   null
 @author        魏帅
 */
@property(nonatomic,strong) UILabel * infoLabel;

//---------------------------------------------------------------------------
//-------------------------------- 方 法 ---------------------------------------
//---------------------------------------------------------------------------
-(UILabel *)AddShowInfoLabelOfContent:(NSString *)infoContentString  WithX:(CGFloat)X WithY:(CGFloat)Y WithWeight:(CGFloat)labelWeight  WithHeight:(CGFloat)labelHeight;
@end
