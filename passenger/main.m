#import "passenger.h"

@implementation Orders

@synthesize date;
@synthesize details;
@synthesize id;
ifused=NO;

@end

@implementation Passenger

@synthesize age;
- (void)addOrderdate:(NSDate *)date details:(NSString *)details id:(NSNumber *)id;//ȥ��Ʊ
{
    Orders *myOrder = [[Orders alloc] init];
    myOrder.date=date;
    myOrder.details=details;
    myOrder.id=id;
    [future addObject:myOrder.id];
}
- (void)check:(Orders *)myOrder;//ȥ��Ʊ
{
    if(myOrder.id<0)
    {
        NSLog(@"��Ʊ�ɹ�");
        myOrder.ifused=YES;
    }
    else
    {
        NSLog(@"��Ʊʧ��");
    }
}

@end
