#ifndef _AG_EVENT_DEFINE_H_ 
#define _AG_EVENT_DEFINE_H_

#define WM_MSGID(code) (WM_USER+0x200+code)
#define WM_EVTID(code) (code-0x200-WM_USER)

typedef struct _AGE_JOINCHANNEL_SUCCESS
{
	char	*channel;
	uid_t	uid;
	int		elapsed;

} AGE_JOINCHANNEL_SUCCESS, *PAGE_JOINCHANNEL_SUCCESS, *LPAGE_JOINCHANNEL_SUCCESS;

#define EID_JOINCHANNEL_SUCCESS			0x00000001

typedef AGE_JOINCHANNEL_SUCCESS AGE_REJOINCHANNEL_SUCCESS, *PAGE_REJOINCHANNEL_SUCCESS, *LPAGE_REJOINCHANNEL_SUCCESS ;

#define EID_REJOINCHANNEL_SUCCESS		0x00000002

typedef struct _AGE_ERROR
{
	int		err;
	char	*msg;

} AGE_ERROR, *PAGE_ERROR, *LPAGE_ERROR;

#define EID_ERROR						0x00000003

typedef struct _AGE_AUDIO_QUALITY {
	uid_t			uid;
	int				quality;
	unsigned short	delay;
	unsigned short	lost;

} AGE_AUDIO_QUALITY, *PAGE_AUDIO_QUALITY, *LPAGE_AUDIO_QUALITY;

#define EID_AUDIO_QUALITY				0x00000004

typedef struct _AGE_AUDIO_TRANSPORT_QUALITY
{
	uid_t			uid; 
	unsigned short	delay;
	unsigned short	lost;

} AGE_AUDIO_TRANSPORT_QUALITY, *PAGE_AUDIO_TRANSPORT_QUALITY, *LPAGE_AUDIO_TRANSPORT_QUALITY;

#define EID_AUDIO_TRANSPORT_QUALITY		0x00000005

typedef AGE_AUDIO_TRANSPORT_QUALITY AGE_VIDEO_TRANSPORT_QUALITY, *PAGE_VIDEO_TRANSPORT_QUALITY, *LPAGE_VIDEO_TRANSPORT_QUALITY;

#define EID_VUDIO_TRANSPORT_QUALITY		0x00000006

typedef struct _AGE_RECAP
{
	char*	recapData;
	int		length;

} AGE_RECAP, *PAGE_RECAP, *LPAGE_RECAP;

#define EID_RECAP						0x00000007

typedef struct _AGE_AUDIO_VOLUME_INDICATION 
{
	AudioVolumeInfo		*speakers;
	unsigned int		speakerNumber;
	int					totalVolume;

} AGE_AUDIO_VOLUME_INDICATION, *PAGE_AUDIO_VOLUME_INDICATION, *LPAGE_AUDIO_VOLUME_INDICATION;

#define EID_AUDIO_VOLUME_INDICATION			0x00000008

typedef struct _AGE_LEAVE_CHANNEL
{
	RtcStats	rtcStat;

} AGE_LEAVE_CHANNEL, *PAGE_LEAVE_CHANNEL, *LPAGE_LEAVE_CHANNEL;

#define EID_LEAVE_CHANNEL					0x00000009

typedef AGE_LEAVE_CHANNEL AGE_UPDATE_SESSION_STATS, *PAGE_UPDATE_SESSION_STATS, *LPAGE_UPDATE_SESSION_STATS;

#define EID_UPDATE_SESSION_STATS			0x0000000A

typedef struct _AGE_AUDIO_DEVICE_STATE_CHANGED
{
	char	*deviceId;
	int		deviceType;
	int		deviceState;

} AGE_AUDIO_DEVICE_STATE_CHANGED, *PAGE_AUDIO_DEVICE_STATE_CHANGED, *LPAGE_AUDIO_DEVICE_STATE_CHANGED;

#define EID_AUDIO_DEVICE_STATE_CHANGED		0x0000000C


typedef struct _AGE_LASTMILE_QUALITY
{
	int quality;

} AGE_LASTMILE_QUALITY, *PAGE_LASTMILE_QUALITY, *LPAGE_LASTMILE_QUALITY;

#define EID_LASTMILE_QUALITY					0x0000000D

typedef struct _AGE_FIRST_LOCAL_VIDEO_FRAME
{
	int width;
	int height;
	int elapsed;

} AGE_FIRST_LOCAL_VIDEO_FRAME, *PAGE_FIRST_LOCAL_VIDEO_FRAME, *LPAGE_FIRST_LOCAL_VIDEO_FRAME;

#define EID_FIRST_LOCAL_VIDEO_FRAME			0x0000000E

typedef struct _AGE_FIRST_REMOTE_VIDEO_DECODED
{
	uid_t	uid;
	int		width;
	int		height;
	int		elapsed;

} AGE_FIRST_REMOTE_VIDEO_DECODED, *PAGE_FIRST_REMOTE_VIDEO_DECODED, *LPAGE_FIRST_REMOTE_VIDEO_DECODED;

#define EID_FIRST_REMOTE_VIDEO_DECODED		0x0000000F

typedef AGE_FIRST_REMOTE_VIDEO_DECODED AGE_FIRST_REMOTE_VIDEO_FRAME, *PAGE_FIRST_REMOTE_VIDEO_FRAME, *LPAGE_FIRST_REMOTE_VIDEO_FRAME;

#define EID_FIRST_REMOTE_VIDEO_FRAME		0x00000010

typedef struct _AGE_USER_JOINED
{
	uid_t	uid;
	int		elapsed;

} AGE_USER_JOINED, *PAGE_USER_JOINED, *LPAGE_USER_JOINED;

#define EID_USER_JOINED						0x00000011

typedef struct _AGE_USER_OFFLINE
{
	uid_t	uid;
	USER_OFFLINE_REASON_TYPE		reason;

} AGE_USER_OFFLINE, *PAGE_USER_OFFLINE, *LPAGE_USER_OFFLINE;

#define EID_USER_OFFLINE					0x00000012

typedef struct _AGE_USER_MUTE_AUDIO
{
	uid_t uid;
	bool  muted;

} AGE_USER_MUTE_AUDIO, *PAGE_USER_MUTE_AUDIO, *LPAGE_USER_MUTE_AUDIO;

#define EID_USER_MUTE_AUDIO					0x00000013

typedef AGE_USER_MUTE_AUDIO AGE_USER_MUTE_VIDEO, *PAGE_USER_MUTE_VIDEO, *LPAGE_USER_MUTE_VIDEO;

#define EID_USER_MUTE_VIDEO					0x00000014

typedef struct _AGE_AUDIO_RECORDER_EXCEPTION
{
	int elapsed;

} AGE_AUDIO_RECORDER_EXCEPTION, *PAGE_AUDIO_RECORDER_EXCEPTION, *LPAGE_AUDIO_RECORDER_EXCEPTION;

#define EID_AUDIO_RECORDER_EXCEPTION		0x00000015

typedef struct _AGE_LOCAL_VIDEO_STAT
{
	int sentBitrate;
	int sentFrameRate;

} AGE_LOCAL_VIDEO_STAT, *PAGE_LOCAL_VIDEO_STAT, *LPAGE_LOCAL_VIDEO_STAT;

#define EID_LOCAL_VIDEO_STAT				0x00000016

typedef struct _AGE_REMOTE_VIDEO_STAT
{
	uid_t uid;
	int delay;
	int width;
	int height;
	int receivedBitrate;
	int decoderOutputFrameRate;
	int rendererOutputFrameRate;

} AGE_REMOTE_VIDEO_STAT, *PAGE_REMOTE_VIDEO_STAT, *LPAGE_REMOTE_VIDEO_STAT;

#define EID_REMOTE_VIDEO_STAT				0x00000017

#define EID_CAMERA_READY					0x00000018
#define EID_CONNECTION_LOST					0x00000019

#define EID_VENDOR_MESSAGE					0x0000001A
typedef struct _AGE_VENDOR_MESSAGE
{
	uid_t uid;
	char* data;
	size_t length;

} AGE_VENDOR_MESSAGE, *PAGE_VENDOR_MESSAGE, *LPAGE_VENDOR_MESSAGE;


typedef struct _AGE_VIDEO_DEVICE_STATE_CHANGED
{
	char	*deviceId;
	int		deviceType;
	int		deviceState;

} AGE_VIDEO_DEVICE_STATE_CHANGED, *PAGE_VIDEO_DEVICE_STATE_CHANGED, *LPAGE_VIDEO_DEVICE_STATE_CHANGED;

#define EID_VIDEO_DEVICE_STATE_CHANGED		0x0000001B

#define EID_VIDEO_STOPPED					0x0000001C

#define EID_START_RCDSRV					0x0000001D
#define EID_STOP_RCDSRV						0x0000001E

typedef struct _AGE_RCDSRV_STATUS
{
	int status;

}AGE_RCDSRV_STATUS, *PAGE_RCDSRV_STATUS, *LPAGE_RCDSRV_STATUS;

#define EID_REFREASH_RCDSRV					0x0000001F

typedef struct _AGE_APICALL_EXECUTED
{
	char	api[128];
	int		error;

}AGE_APICALL_EXECUTED, *PAGE_APICALL_EXECUTED, *LPAGE_APICALL_EXECUTED;

#define EID_APICALL_EXECUTED					0x00000020

typedef struct _AGE_STREAM_MESSAGE
{
    uid_t       uid;
    int         streamId;
    char        *data;
    size_t      length;

} AGE_STREAM_MESSAGE, *PAGE_STREAM_MESSAGE, *LPAGE_STREAM_MESSAGE;

#define EID_STREAM_MESSAGE                  0x00000021


#define EID_SCREEN_STATUS_CHANGE            0x00000022

#endif