//
//  DANPromise_Private.h
//  DANPromise
//
//  Created by Daniel Tomlinson on 10/07/2015.
//  Copyright © 2015 Rocket Apps. All rights reserved.
//

@import Foundation;

typedef NS_ENUM(NSInteger, DANPromiseState) {
    DANPromiseStateIncomplete = 0,
    DANPromiseStateRejected,
    DANPromiseStateFulfilled,
    DANPromiseStateCancelled
};

@interface DANPromise ()

@property (nonatomic) dispatch_queue_t queue;
@property (nonatomic) DANPromiseState state;
@property (nonatomic, readonly) NSMutableArray *callbacks;

@property (nonatomic) dispatch_queue_t internalQueue;

- (BOOL)bindOrPerformBlock:(dispatch_block_t)block;
- (void)performBlock:(dispatch_block_t)block;

@end
