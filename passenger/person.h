#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED



#endif // PERSON_H_INCLUDED
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Person : NSObject

@property (nonatomic,copy) NSString *name;
@property (nonatomic,readonly,assign) NSInteger age;
@property (nonatomic,assign) BOOL sex;
@property (nonatomic,strong) Person *mother;
@property (nonatomic,strong) Person *father;
@property (nonatomic,strong) NSDate *birthday;
@property (nonatomic,readonly) NSNumber *idNumber;

@end

NS_ASSUME_NONNULL_END
