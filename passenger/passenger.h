#ifndef PASSENGER_H_INCLUDED
#define PASSENGER_H_INCLUDED



#endif // PASSENGER_H_INCLUDED
#import "person.h"

NS_ASSUME_NONNULL_BEGIN

@interface Orders : NSObject
//ʱ�� �ַ������ص�
@property (nonatomic,strong) NSDate *date;//����
@property (nonatomic,copy) NSString *details;//����
@property (nonatomic,readonly) NSNumber *id;//ÿ���������еı��
@property (nonatomic,assign) BOOL ifused;//�Ƿ���ʹ��

@end


@interface Passenger : Person

@property (nonatomic,assign) BOOL age;//�Ƿ�����ʮ�����꣬bool
@property (nonatomic,strong) NSMutableArray *history//��ʷ���������飬��Ŷ������
@property (nonatomic,strong) NSMutableArray *future//δʹ�ö���������

//fouction
- (void)addOrderdate:(NSDate *)date details:(NSString *)details id:(NSNumber *)id;//ȥ��Ʊ
- (void)check:(Orders *)myOrder;//ȥ��Ʊ

@end

NS_ASSUME_NONNULL_END
