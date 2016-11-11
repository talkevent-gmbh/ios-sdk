// Generated by Apple Swift version 3.0.1 (swiftlang-800.0.58.6 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import ObjectiveC;
@import AI_KurentoToolbox;
@import WebRTC;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;

SWIFT_CLASS("_TtC12TalkEventSDK11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSBundle;
@class NSNotification;
@class UITextField;
@class UIButton;
@class UIImageView;
@class UILabel;
@class UIActivityIndicatorView;
@class NSCoder;

SWIFT_CLASS("_TtC12TalkEventSDK42TalkEventConnectToConsultantViewController")
@interface TalkEventConnectToConsultantViewController : UIViewController <UITextFieldDelegate>
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified logoImageView;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified connectBtn;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified nameTextField;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified responseLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified instructionLabel;
@property (nonatomic, weak) IBOutlet UIActivityIndicatorView * _Null_unspecified loadingAnimation;
@property (nonatomic, readonly, strong) NSBundle * _Nonnull frameworkBundle;
@property (nonatomic, copy) NSString * _Nonnull apiUrl;
@property (nonatomic, copy) NSString * _Nullable upstreamId;
@property (nonatomic, copy) NSString * _Nullable downstreamId;
@property (nonatomic, copy) NSString * _Nullable consultant;
@property (nonatomic, copy) NSString * _Nullable username;
@property (nonatomic, copy) NSString * _Nullable pollingUrl;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (void)keyboardWillShowWithNotification:(NSNotification * _Nonnull)notification;
- (void)keyboardWillHideWithNotification:(NSNotification * _Nonnull)notification;
- (IBAction)didChangeName:(UITextField * _Nonnull)sender;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField;
- (void)textFieldDidEndEditing:(UITextField * _Nonnull)textField;
- (void)checkValidName;
- (void)noConsultantAccessible;
- (void)allConsultantTalkingWithResponse:(NSString * _Nullable)response;
- (void)receiveErrorFromApiWithError:(NSError * _Null_unspecified)error;
- (void)receiveInvalidDataFromApiWithResponse:(NSString * _Nullable)response;
- (void)receiveValidDataFromApiLoginWithResponse:(NSArray<NSString *> * _Null_unspecified)response;
- (void)receiveValidDataFromApiCheck;
- (IBAction)connectToConsultant:(UIButton * _Nonnull)sender;
- (void)showAlert:(NSString * _Nonnull)title error:(NSError * _Nonnull)error;
- (void)showAlert:(NSString * _Nonnull)title msg:(NSString * _Nonnull)msg close:(BOOL)close;
- (void)initStyling SWIFT_METHOD_FAMILY(none);
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSURL;
@class NBMMediaConfiguration;
@class NBMWebRTCPeer;
@class NBMRoom;
@class NBMRoomClient;
@class NBMPeer;
@class RTCSessionDescription;
@class NBMPeerConnection;
@class RTCDataChannel;
@class RTCMediaStream;
@class RTCIceCandidate;
@class RTCDataBuffer;

SWIFT_CLASS("_TtC12TalkEventSDK16TalkEventKurento")
@interface TalkEventKurento : NSObject <NBMWebRTCPeerDelegate, NBMRoomClientDelegate, RTCDataChannelDelegate>
@property (nonatomic, readonly, copy) NSString * _Nonnull iceServerURL;
@property (nonatomic, readonly, copy) NSString * _Nonnull iceServerUsername;
@property (nonatomic, readonly, copy) NSString * _Nonnull iceServerPassword;
@property (nonatomic, readonly) NSInteger reconnectCountMax;
@property (nonatomic, strong) NSURL * _Null_unspecified wsURL;
@property (nonatomic, copy) NSString * _Null_unspecified username;
@property (nonatomic, copy) NSString * _Null_unspecified roomName;
@property (nonatomic, strong) NBMMediaConfiguration * _Nullable mediaConfig;
@property (nonatomic, strong) NBMWebRTCPeer * _Nullable webRTCPeer;
@property (nonatomic, strong) NBMRoom * _Nullable room;
@property (nonatomic, strong) NBMRoomClient * _Nullable roomClient;
@property (nonatomic, strong) NBMPeer * _Nullable localPeer;
@property (nonatomic, strong) NBMPeer * _Nullable remotePeer;
@property (nonatomic) BOOL connected;
@property (nonatomic) NSInteger reconnectCount;
@property (nonatomic) BOOL wasManuallyClosed;
@property (nonatomic, copy) NSString * _Nullable closedMsg;
@property (nonatomic) BOOL backCameraOn;
- (nonnull instancetype)initWithWsURL:(NSURL * _Null_unspecified)wsURL username:(NSString * _Null_unspecified)username roomName:(NSString * _Null_unspecified)roomName OBJC_DESIGNATED_INITIALIZER;
- (void)start;
- (BOOL)isConnected;
- (void)enableVideo;
- (BOOL)isVideoEnabled;
- (void)enableAudio;
- (BOOL)isAudioEnabled;
- (void)changeCameraPosition;
- (BOOL)isBackCameraOn;
- (void)closeConnectionWithMsg:(NSString * _Nullable)msg;
- (void)webRTCPeer:(NBMWebRTCPeer * _Null_unspecified)peer didGenerateOffer:(RTCSessionDescription * _Null_unspecified)sdpOffer forConnection:(NBMPeerConnection * _Null_unspecified)connection;
- (void)webRTCPeer:(NBMWebRTCPeer * _Null_unspecified)peer didGenerateAnswer:(RTCSessionDescription * _Null_unspecified)sdpAnswer forConnection:(NBMPeerConnection * _Null_unspecified)connection;
- (void)webRTCPeer:(NBMWebRTCPeer * _Null_unspecified)peer didAddDataChannel:(RTCDataChannel * _Null_unspecified)dataChannel;
- (void)webRTCPeer:(NBMWebRTCPeer * _Null_unspecified)peer didAddStream:(RTCMediaStream * _Null_unspecified)remoteStream ofConnection:(NBMPeerConnection * _Null_unspecified)connection;
- (void)webRTCPeer:(NBMWebRTCPeer * _Null_unspecified)peer didRemoveStream:(RTCMediaStream * _Null_unspecified)remoteStream ofConnection:(NBMPeerConnection * _Null_unspecified)connection;
- (void)webRTCPeer:(NBMWebRTCPeer * _Null_unspecified)peer hasICECandidate:(RTCIceCandidate * _Null_unspecified)candidate forConnection:(NBMPeerConnection * _Null_unspecified)connection;
- (void)webrtcPeer:(NBMWebRTCPeer * _Null_unspecified)peer iceStatusChanged:(RTCIceConnectionState)state ofConnection:(NBMPeerConnection * _Null_unspecified)connection;
- (void)client:(NBMRoomClient * _Null_unspecified)client isConnected:(BOOL)connected;
- (void)client:(NBMRoomClient * _Null_unspecified)client didFailWithError:(NSError * _Null_unspecified)error;
- (void)client:(NBMRoomClient * _Null_unspecified)client didJoinRoom:(NSError * _Null_unspecified)error;
- (void)client:(NBMRoomClient * _Null_unspecified)client didLeaveRoom:(NSError * _Null_unspecified)error;
- (void)client:(NBMRoomClient * _Null_unspecified)client didPublishVideo:(NSString * _Null_unspecified)sdpAnswer loopback:(BOOL)doLoopback error:(NSError * _Null_unspecified)error;
- (void)client:(NBMRoomClient * _Null_unspecified)client didUnPublishVideo:(NSError * _Null_unspecified)error;
- (void)client:(NBMRoomClient * _Null_unspecified)client didReceiveVideoFrom:(NBMPeer * _Null_unspecified)peer sdpAnswer:(NSString * _Null_unspecified)sdpAnswer error:(NSError * _Null_unspecified)error;
- (void)client:(NBMRoomClient * _Null_unspecified)client didUnsubscribeVideoFrom:(NBMPeer * _Null_unspecified)peer sdpAnswer:(NSString * _Null_unspecified)sdpAnswer error:(NSError * _Null_unspecified)error;
- (void)client:(NBMRoomClient * _Null_unspecified)client didSentICECandidate:(NSError * _Null_unspecified)error forPeer:(NBMPeer * _Null_unspecified)peer;
- (void)client:(NBMRoomClient * _Null_unspecified)client didSentMessage:(NSError * _Null_unspecified)error;
- (void)client:(NBMRoomClient * _Null_unspecified)client didSentCustomRequest:(NSError * _Null_unspecified)error;
- (void)client:(NBMRoomClient * _Null_unspecified)client participantJoined:(NBMPeer * _Null_unspecified)peer;
- (void)client:(NBMRoomClient * _Null_unspecified)client participantLeft:(NBMPeer * _Null_unspecified)peer;
- (void)client:(NBMRoomClient * _Null_unspecified)client participantPublished:(NBMPeer * _Null_unspecified)peer;
- (void)client:(NBMRoomClient * _Null_unspecified)client participantUnpublished:(NBMPeer * _Null_unspecified)peer;
- (void)client:(NBMRoomClient * _Null_unspecified)client participantEvicted:(NBMPeer * _Null_unspecified)peer;
- (void)client:(NBMRoomClient * _Null_unspecified)client didReceiveICECandidate:(RTCIceCandidate * _Null_unspecified)candidate fromParticipant:(NBMPeer * _Null_unspecified)peer;
- (void)client:(NBMRoomClient * _Null_unspecified)client didReceiveMessage:(NSString * _Null_unspecified)message fromParticipant:(NBMPeer * _Null_unspecified)peer;
- (void)client:(NBMRoomClient * _Null_unspecified)client mediaErrorOccurred:(NSError * _Null_unspecified)error;
- (void)client:(NBMRoomClient * _Null_unspecified)client roomWasClosed:(NBMRoom * _Null_unspecified)room;
- (void)dataChannelDidChangeState:(RTCDataChannel * _Nonnull)dataChannel;
- (void)dataChannel:(RTCDataChannel * _Nonnull)dataChannel didReceiveMessageWithBuffer:(RTCDataBuffer * _Nonnull)buffer;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class RTCVideoTrack;
@class RTCEAGLVideoView;
@class UIView;
@class NSLayoutConstraint;

SWIFT_CLASS("_TtC12TalkEventSDK30TalkEventKurentoViewController")
@interface TalkEventKurentoViewController : UIViewController <RTCEAGLVideoViewDelegate>
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified cameraBtn;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified switchCameraBtn;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified micBtn;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified torchBtn;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified settingsBtn;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified endCallBtn;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified cameraLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified switchCameraLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified micLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified torchLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified consultantLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified consultantTitleLabel;
@property (nonatomic, weak) IBOutlet RTCEAGLVideoView * _Null_unspecified downstreamView;
@property (nonatomic, weak) IBOutlet RTCEAGLVideoView * _Null_unspecified upstreamView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified upstreamViewContainer;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified upstreamViewOverlay;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified settingsView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified settingsViewOverlay;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified switchCameraView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified torchView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified consultantViewContainer;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified logoImageView;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified isCameraOffImageView;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified isMutedImageView;
@property (nonatomic, weak) IBOutlet UIActivityIndicatorView * _Null_unspecified loadingDownstream;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified upstreamVideoWidth;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified upstreamVideoHeight;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified downstreamVideoWidth;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified downstreamVideoHeight;
@property (nonatomic, readonly, strong) NSBundle * _Nonnull frameworkBundle;
@property (nonatomic, copy) NSString * _Nullable pollingUrl;
@property (nonatomic, copy) NSString * _Nullable consultant;
@property (nonatomic, copy) NSString * _Nullable upstreamId;
@property (nonatomic, copy) NSString * _Nullable downstreamId;
@property (nonatomic, copy) NSString * _Nullable username;
@property (nonatomic, strong) TalkEventKurento * _Nullable kurento;
@property (nonatomic, copy) NSString * _Nullable roomName;
@property (nonatomic, strong) RTCVideoTrack * _Nullable localVideoTrack;
@property (nonatomic, strong) RTCVideoTrack * _Nullable remoteVideoTrack;
@property (nonatomic) BOOL isTorchOn;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(UIInterfaceOrientation)fromInterfaceOrientation;
- (void)kurentoLocalVideoTrackWithVideoTrack:(RTCVideoTrack * _Null_unspecified)videoTrack;
- (void)kurentoRemoteVideoTrackWithVideoTrack:(RTCVideoTrack * _Null_unspecified)videoTrack from:(NSString * _Nullable)from;
- (void)kurentoFailedWithErrorWithError:(NSError * _Null_unspecified)error;
- (void)kurentoParticipantLeftRoom;
- (void)kurentoParticipantUnpublishedVideo;
- (void)pollingConnectionLostWithMsg:(NSString * _Nullable)msg;
- (void)videoView:(RTCEAGLVideoView * _Nonnull)videoView didChangeVideoSize:(CGSize)size;
- (IBAction)didTapSettingsBtn:(UIButton * _Nonnull)sender;
- (IBAction)didTabCameraBtn:(UIButton * _Nonnull)sender;
- (IBAction)didTabSwitchCameraBtn:(UIButton * _Nonnull)sender;
- (IBAction)didTabMicBtn:(UIButton * _Nonnull)sender;
- (IBAction)didTabTorchBtn:(UIButton * _Nonnull)sender;
- (IBAction)didTabEndCallBtn:(UIButton * _Nonnull)sender;
- (void)showAlert:(NSString * _Nonnull)title error:(NSError * _Nonnull)error;
- (void)showAlert:(NSString * _Nonnull)title msg:(NSString * _Nonnull)msg;
- (void)initStyling SWIFT_METHOD_FAMILY(none);
- (void)initPolling SWIFT_METHOD_FAMILY(none);
- (void)changeAudioCategory;
- (void)hideSettings;
- (void)deactivateUiElements;
- (void)activateUiElements;
- (void)toggleTorch;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImage;
@class UIColor;

SWIFT_CLASS("_TtC12TalkEventSDK12TalkEventSDK")
@interface TalkEventSDK : UIViewController
- (nonnull instancetype)init;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)setClientNumberWithStr:(NSString * _Null_unspecified)str;
- (void)setLogoWithImage:(UIImage * _Null_unspecified)image;
- (void)setBackgroundColorWithColor:(UIColor * _Null_unspecified)color;
- (void)setFontColorWithColor:(UIColor * _Null_unspecified)color;
- (void)setConsultantBoxColorWithColor:(UIColor * _Null_unspecified)color;
- (void)setSettingsBtnColorWithColor:(UIColor * _Null_unspecified)color;
- (void)setCameraOverlayColorWithColor:(UIColor * _Null_unspecified)color;
- (void)setEndCallBtnColorWithColor:(UIColor * _Null_unspecified)color;
- (void)open;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC12TalkEventSDK39TalkEventSearchConsultantViewController")
@interface TalkEventSearchConsultantViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified logoImageView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified responseLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified instructionLabel;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified responseIcon;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified retryBtn;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified closeBtn;
@property (nonatomic, weak) IBOutlet UIActivityIndicatorView * _Null_unspecified loadingAnimation;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified closeBtnConst;
@property (nonatomic, readonly, strong) NSBundle * _Nonnull frameworkBundle;
@property (nonatomic, copy) NSString * _Nonnull apiUrl;
@property (nonatomic) BOOL loading;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (void)searchConsultant;
- (void)noConsultantAccessible;
- (void)allConsultantTalkingWithResponse:(NSString * _Nullable)response;
- (void)receiveErrorFromApiWithError:(NSError * _Null_unspecified)error;
- (void)receiveInvalidDataFromApiWithResponse:(NSString * _Nullable)response;
- (void)receiveValidDataFromApiLoginWithResponse:(NSArray<NSString *> * _Null_unspecified)response;
- (void)receiveValidDataFromApiCheck;
- (IBAction)retrySearchConsultant:(UIButton * _Nonnull)sender;
- (IBAction)didTabCloseBtn:(id _Nonnull)sender;
- (void)showAlert:(NSString * _Nonnull)title error:(NSError * _Nonnull)error;
- (void)initStyling SWIFT_METHOD_FAMILY(none);
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
