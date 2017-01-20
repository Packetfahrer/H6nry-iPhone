/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class VSSpeechConnectionDelegateWrapper, NSXPCConnection, VSSpeechRequest;
@protocol VSSpeechConnectionDelegate;

@interface VSSpeechConnection : NSObject {
@private
	NSXPCConnection *_connection;
	VSSpeechConnectionDelegateWrapper *_delegateWrapper;
	VSSpeechRequest *_request;
}
@property(assign, nonatomic) __weak id<VSSpeechConnectionDelegate> delegate;
@property(readonly, assign, nonatomic) VSSpeechRequest *request;	// @synthesize=_request
//-(void).cxx_destruct;
-(id)_connection;
-(void)_connectionInvalidated;
-(id)_remoteObject;
-(id)_remoteObjectWithErrorHandler:(id)errorHandler;
-(void)_setRequest:(id)request;
-(id)availableFootprintsForVoice:(id)voice languageCode:(id)code;
-(id)availableVoicesForLanguageCode:(id)languageCode;
-(void)continueCurrentSpeechRequest;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(void)downloadVoiceAsset:(id)asset progress:(id)progress completion:(id)completion;
-(void)getAllVoiceAssets:(id)assets;
-(void)getAutoDownloadedVoiceAssets:(id)assets;
-(void)getLocalVoiceAssets:(id)assets;
-(void)getVoiceInfoForLanguageCode:(id)languageCode footprint:(int)footprint gender:(int)gender custom:(BOOL)custom reply:(id)reply;
-(BOOL)isSystemSpeaking;
-(BOOL)isSystemSpeakingOnBehalfOfCurrentConnection;
-(void)pauseCurrentSpeechRequestAtMark:(int)mark;
// declared property getter: -(id)request;
-(void)setAutoDownloadedVoiceAssets:(id)assets;
// declared property setter: -(void)setDelegate:(id)delegate;
-(void)startSpeechRequest:(id)request;
-(void)stopCurrentSpeechRequestAtMark:(int)mark;
@end