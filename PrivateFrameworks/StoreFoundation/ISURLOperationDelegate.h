//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperationDelegate.h"

@class ISURLOperation, NSMutableURLRequest, NSURLResponse;

NS_ASSUME_NONNULL_BEGIN

@protocol ISURLOperationDelegate <ISOperationDelegate>

@optional
- (void)operation:(ISURLOperation *)arg1 willSendRequest:(NSMutableURLRequest *)arg2;
- (void)operation:(ISURLOperation *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)operation:(ISURLOperation *)arg1 finishedWithOutput:(id)arg2;
@end

NS_ASSUME_NONNULL_END
