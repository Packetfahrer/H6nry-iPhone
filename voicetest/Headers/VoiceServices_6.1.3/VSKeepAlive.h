/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@interface VSKeepAlive : NSObject {
@private
	NSXPCConnection *_serverConnection;
	int _audioType;
	BOOL _active;
	BOOL _keepAudioSessionActive;
}
@property(assign, nonatomic) BOOL active;	// @synthesize=_active
@property(assign, nonatomic) int audioType;	// @synthesize=_audioType
@property(assign, nonatomic) BOOL keepAudioSessionActive;	// @synthesize=_keepAudioSessionActive
//-(void).cxx_destruct;
-(void)_ensureKeepAliveMaintenance;
-(id)_remoteKeepAlive;
-(id)_serverConnection;
// declared property getter: -(BOOL)active;
// declared property getter: -(int)audioType;
-(void)dealloc;
// declared property getter: -(BOOL)keepAudioSessionActive;
// declared property setter: -(void)setActive:(BOOL)active;
// declared property setter: -(void)setAudioType:(int)type;
// declared property setter: -(void)setKeepAudioSessionActive:(BOOL)active;
@end
