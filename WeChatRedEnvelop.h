@interface CMessageWrap : NSObject // 微信消息
@property (nonatomic) NSUInteger m_uiMessageType;
@end

@interface WCRedEnvelopesControlData : NSObject
@property(retain, nonatomic) CMessageWrap *m_oSelectedMessageWrap; 
@end

@interface CContactMgr : NSObject
@end

@interface WCRedEnvelopesReceiveControlLogic : NSObject
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes;
- (id)initWithData:(id)arg1;
@end

@interface CAppViewControllerManager : NSObject
+ (id)topMostController;
@end

@interface BaseMsgContentViewController : NSObject
- (id)getCurrentChatName;
@end

@interface MMTabBarController : NSObject
- (id)currentViewController;
@end
