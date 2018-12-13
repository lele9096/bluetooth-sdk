//
//  CDBleDataModel.h
//  LZAPI
//
//  Created by LELE on 2018/11/19.
//  Copyright © 2018年 rect. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CDBleSetResult.h"
#import "CDBleChargingData.h"
/**
 *  蓝牙解析的数据模型
 */
@interface CDBleDataModel : NSObject
/**
 * 设置类型操作（开始充电，结束充电）返回的结果
 */
@property(nonatomic,strong)CDBleSetResult* result;

/**
 * 充电中信息
 */
@property(nonatomic,strong)CDBleChargingData* chargingData;

@end
