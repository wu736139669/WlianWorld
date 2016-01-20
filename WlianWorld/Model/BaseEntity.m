//
//  BaseEntity.m
//  WlianWorld
//
//  Created by xmfish on 15/11/13.
//  Copyright © 2015年 ash. All rights reserved.
//

#import "AWordDefault.h"
#import "BaseEntity.h"
#import "BaseModel.h"
#import "NSString+HXAddtions.h"
@implementation proFile

@end
static NSString* app_key = @"123456";
static NSString* app_key_secret = @"z*~#@kR^*N";
@implementation BaseEntity
- (NSDictionary*)encodePro
{

    NSMutableDictionary* dic = [NSMutableDictionary dictionary];
    ;

    [dic setObject:_callback forKey:@"callback"];
    if (_pro) {
        [dic setObject:_pro forKey:@"params"];
    }
    [dic setObject:@"1" forKey:@"devicecode"];

    NSString* uid = [AWordDefault getUid];
    if (uid) {
        [dic setObject:uid forKey:@"uid"];
    }
    [dic setObject:@"shop1" forKey:@"username"];
    NSString* token = [AWordDefault getToken];
    if (token) {
        [dic setObject:token forKey:@"token"];
    }
    return dic;
}

@end
