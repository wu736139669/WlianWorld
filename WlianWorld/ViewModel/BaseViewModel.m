//
//  BaseViewModel.m
//  WlianWorld
//
//  Created by xmfish on 15/11/13.
//  Copyright © 2015年 ash. All rights reserved.
//

#import "BaseEntity.h"
#import "BaseModel.h"
#import "BaseViewModel.h"
@implementation BaseViewModel

+ (BaseEntity*)requireWithDic:(NSDictionary*)dic withModel:(BaseModel*)model
{
    BaseEntity* pro = [[BaseEntity alloc] init];
    pro.requireType = HTTPRequestTypeWithGET;
    pro.responesOBJ = [(id)model class];
    pro.reqURL = @"";
    pro.pro = dic;
    return pro;
}
@end
