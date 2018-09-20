//
//  FUAppDataCenter.h
//  FULive
//
//  Created by 孙慕 on 2018/8/10.
//  Copyright © 2018年 faceunity. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FUBeautyModel.h"
#import "FUFilterModel.h"
#import "FUPropItemModel.h"

@interface FUAppDataCenter : NSObject

/* 美肤数据 */
@property (retain) NSMutableArray <FUBeautyModel *> *skinModelArray;
/* 自定义美型数组 */
@property (retain) NSMutableArray <FUBeautyModel *> *beautyModelCustomArray;
/* 默认 女神 网红 自然 */
@property (retain) NSMutableArray <FUBeautyModel *> *beautyModeldefaultArray;
/* 风格 */
@property (retain) NSMutableArray <FUFilterModel *> *styleModelArray;
/* 滤镜 */
@property (retain) NSMutableArray <FUFilterModel *> *filterModelArray;
/* 道具贴图 */
@property (retain) NSArray <FUPropItemModel *> *propItemModelArray;
/* 当前选中item */
@property (retain) NSString *currentItemSdkStr;


+ (FUAppDataCenter *)shareManager;

/**
 美肤 美型参数设置
 @param array array当nil时，会根据beautyModelCustomArray,skinModelArray,beautyModeldefaultArray设置参数值,并且通知sdk
 */
-(void)changeBeautyParams:(NSMutableArray <FUBeautyModel *>*)array;

@end