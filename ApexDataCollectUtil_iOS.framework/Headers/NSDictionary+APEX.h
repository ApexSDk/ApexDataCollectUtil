//
//  NSDictionary+APEX.h
//  ApexDataCollectUtil_iOS
//
//  Created by IOS02 on 2020/7/28.
//  Copyright © 2020 Apex. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSMutableDictionary (APEX)

-(void)setStringObjectApex:(id)value forKey:(NSString *)key;
-(void)setArrayObjectApex:(id)value forKey:(NSString *)key;
-(void)setDictionaryObjectApex:(id)value forKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
