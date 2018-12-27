//
//  CDBleBaseChargeData.h
//  LZAPI
//
//  Created by LELE on 2018/11/21.
//  Copyright © 2018年 rect. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CDBleBaseChargeData : NSObject
/**
 *  流水号
 */
@property(nonatomic,copy)NSString* serialNumber;
/**
 *  充电电量
 */
@property(nonatomic,assign)UInt64 elecQuantity;

/**
 *  充电电压
 */
@property(nonatomic,assign)UInt64 voltage;

/**
 *  充电电流
 */
@property(nonatomic,assign)UInt64 electric;
/**
 *  充电时长
 */
@property(nonatomic,assign)UInt64 duration;

@end
