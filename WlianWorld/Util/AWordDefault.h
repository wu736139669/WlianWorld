//
//  AWordDefault.h
//  Ash_AWord
//
//  Created by xmfish on 15/4/1.
//  Copyright (c) 2015年 ash. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LoginModel.h"

@interface AWordDefault : NSObject


+(void)setShopId:(NSString *)isShopId;
+(NSString*)getShopId;

+(void)setToken:(NSString *)isToken;
+(NSString *)getToken;

+(void)setUserId:(NSString *)isUserId;
+(NSString *)getUserId;


//获取用户是否登录
+(void)setIsLogin:(BOOL)isLogin;
+(BOOL)getIsLogin;

//获取用户名
+(void)setUserName:(NSString*)userName;
+(NSString*)getUserName;

//获取uid
+(void)setUid:(NSString*)uid;
+(NSString*)getUid;

//获取用户头像
+(void)setUserAvatar:(NSString*)userAvatar;
+(NSString*)getUserAvatar;

//获取用户性别
+(void)setUserGender:(NSString*)userGender;
+(NSString*)getUserGender;

//获取最后更新时间
+(void)setLastUpdateTime:(NSTimeInterval)date;
+(NSTimeInterval)getLastUpdateTime;

//设置登录方式
+(void)setLoginType:(NSInteger)loginType;
+(NSInteger)getLoginType;

//设置个性签名
+(void)setSignature:(NSString*)sinagure;
+(NSString*)getSignature;
//保存背景图片
+(BOOL)setHeadBgImg:(UIImage *)headBgImg;
+(UIImage*)getHeadBgImg;
@end
