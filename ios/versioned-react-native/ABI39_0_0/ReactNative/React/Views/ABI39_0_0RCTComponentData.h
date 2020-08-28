/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

#import <ABI39_0_0React/ABI39_0_0RCTComponent.h>
#import <ABI39_0_0React/ABI39_0_0RCTDefines.h>
#import <ABI39_0_0React/ABI39_0_0RCTViewManager.h>

@class ABI39_0_0RCTBridge;
@class ABI39_0_0RCTShadowView;
@class UIView;

@interface ABI39_0_0RCTComponentData : NSObject

@property (nonatomic, readonly) Class managerClass;
@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, weak, readonly) ABI39_0_0RCTViewManager *manager;

- (instancetype)initWithManagerClass:(Class)managerClass bridge:(ABI39_0_0RCTBridge *)bridge NS_DESIGNATED_INITIALIZER;

- (UIView *)createViewWithTag:(NSNumber *)tag rootTag:(NSNumber *)rootTag;
- (ABI39_0_0RCTShadowView *)createShadowViewWithTag:(NSNumber *)tag;
- (void)setProps:(NSDictionary<NSString *, id> *)props forView:(id<ABI39_0_0RCTComponent>)view;
- (void)setProps:(NSDictionary<NSString *, id> *)props forShadowView:(ABI39_0_0RCTShadowView *)shadowView;

@property (nonatomic, copy, nullable) void (^eventInterceptor)
    (NSString *eventName, NSDictionary *event, NSNumber *ABI39_0_0ReactTag);

- (NSDictionary<NSString *, id> *)viewConfig;

@end
