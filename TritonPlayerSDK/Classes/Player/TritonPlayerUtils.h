//
//  TritonPlayerUtils.h
//  TritonPlayerSDK
//
//  Created by Carlos Pereira on 2014-12-04.
//  Copyright (c) 2014 Triton Digital. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface TritonPlayerUtils : NSObject

+ (NSString *) getListenerId;
+ (NSString *)targetingQueryParametersWithLocation:(CLLocation *) location andExtraParameters:(NSDictionary *) extraParameters withTtags:(NSArray*) tTags andToken:(NSString*) token;
@end
