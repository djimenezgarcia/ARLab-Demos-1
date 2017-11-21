//
//  WSstatusController.h
//  ARglLib
//
//  Copyright (c) 2011 ARLab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "eadAES.h"

__attribute__((__visibility__("default"))) @interface WSstatusController : NSObject <NSURLConnectionDelegate>

- (void)Register;

@property (strong, nonatomic) NSString* appKey;
@property (strong, nonatomic) NSString* productId;
@property (strong, nonatomic) NSString* productKey;

@end

