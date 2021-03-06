//
//  PREDTransaction.h
//  CocoaLumberjack
//
//  Created by WangSiyu on 21/03/2018.
//

#import "PREDTransaction.h"

@class PREDPersistence;

typedef NS_ENUM(NSInteger, PREDTransactionType) {
    PREDTransactionTypeCompleted,
    PREDTransactionTypeCancelled,
    PREDTransactionTypeFailed,
};

@interface PREDTransaction ()

@property(nonatomic, strong) NSString *transaction_name;
@property(nonatomic, assign) uint64_t start_time;
@property(nonatomic, assign) uint64_t end_time;
// 0 正常结束，1 被取消，2 失败
@property(nonatomic, assign) PREDTransactionType transaction_type;
@property(nonatomic, assign) NSString *reason;

+ (PREDTransaction *)transactionWithPersistence:(PREDPersistence *)persistence;

@end
