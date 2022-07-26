#import "passenger.h"

@implementation Orders

@synthesize date;
@synthesize details;
@synthesize id;
ifused=NO;

@end

@implementation Passenger

@synthesize age;
- (void)addOrderdate:(NSDate *)date details:(NSString *)details id:(NSNumber *)id;//»•∂©∆±
{
    Orders *myOrder = [[Orders alloc] init];
    myOrder.date=date;
    myOrder.details=details;
    myOrder.id=id;
    [future addObject:myOrder.id];
}
- (void)check:(Orders *)myOrder;//»•ºÏ∆±
{
    if(myOrder.id<0)
    {
        NSLog(@"ºÏ∆±≥…π¶");
        myOrder.ifused=YES;
    }
    else
    {
        NSLog(@"ºÏ∆± ß∞‹");
    }
}

@end
