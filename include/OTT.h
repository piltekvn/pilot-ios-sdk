//
//  OTT.h
//  pilot-ios-sdk
//
//  Created by DinhPhuc on 23/01/2024.
//

#import <Foundation/Foundation.h>
#import "SmMonitor.h"
#import "SmCustomData.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, SmLogLevel) {
    SM_LOG_LEVEL_NONE = 0,
    SM_LOG_LEVEL_ERROR,
    SM_LOG_LEVEL_WARNING,
    SM_LOG_LEVEL_INFO,
    SM_LOG_LEVEL_DEBUG
};

@interface OTT : NSObject
+(OTT *)getInstance;

+ (void) setLogLevel:(SmLogLevel) logLevel;
+ (SmLogLevel) getLogLevel;

-(void)initialize:(NSString *)clientKey;
-(NSString *)generate:(NSString *)url configKey:(NSString *)configKey;
@end

NS_ASSUME_NONNULL_END
