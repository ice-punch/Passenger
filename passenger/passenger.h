#ifndef PASSENGER_H_INCLUDED
#define PASSENGER_H_INCLUDED



#endif // PASSENGER_H_INCLUDED
#import "person.h"

NS_ASSUME_NONNULL_BEGIN

@interface Orders : NSObject
//时间 字符串（地点
@property (nonatomic,strong) NSDate *date;//日期
@property (nonatomic,copy) NSString *details;//详情
@property (nonatomic,readonly) NSNumber *id;//每个订单特有的编号
@property (nonatomic,assign) BOOL ifused;//是否已使用

@end


@interface Passenger : Person

@property (nonatomic,assign) BOOL age;//是否年满十八周岁，bool
@property (nonatomic,strong) NSMutableArray *history//历史订单（数组，存放订单编号
@property (nonatomic,strong) NSMutableArray *future//未使用订单（数组

//fouction
- (void)addOrderdate:(NSDate *)date details:(NSString *)details id:(NSNumber *)id;//去订票
- (void)check:(Orders *)myOrder;//去检票

@end

NS_ASSUME_NONNULL_END
