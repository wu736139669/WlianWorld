//
//  BaseEntity.h
//  WlianWorld
//
//  Created by xmfish on 15/11/13.
//  Copyright © 2015年 ash. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef NS_ENUM(NSUInteger, HTTPRequestType) {
    HTTPRequestTypeWithGET = 0,
    HTTPRequestTypeWithPOST,
    HTTPRequestTypeWithPOSTDATA,
};

@class responesOBJ,DCParserConfiguration;

@interface proFile : NSObject

@property (nonatomic, strong) NSData *data;
@property (nonatomic, strong) NSString *name;   //参数名称
@property (nonatomic, strong) NSString *filePath;
//@"image/jpeg"
@property (nonatomic, strong) NSString *mimeType;

@property (nonatomic, strong) NSArray *img;

@end

//
@interface BaseEntity : NSObject

@property (nonatomic, assign) HTTPRequestType requireType;
@property (nonatomic, copy) NSString *reqURL;
@property (nonatomic, copy) NSString *callback;
@property (nonatomic, strong)NSString* cacheKey;
@property (nonatomic, strong) id pro;
@property (nonatomic, assign) Class responesOBJ;
@property (nonatomic, strong)DCParserConfiguration* config;

@property (nonatomic, strong) proFile *pFile;
//@property (nonatomic, strong) NSArray *img;

@property (nonatomic, assign) BOOL isCache;

@property (nonatomic, copy) NSString *localJsonFileName;

- (NSDictionary *)encodePro;

@end
