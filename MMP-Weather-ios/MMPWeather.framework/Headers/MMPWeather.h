#import <Foundation/Foundation.h>

@class MMPWAbsGetWeaDetModel, MMPWStdlibUnit, MMPWGetWeaDetPresenterImp, MMPWResults, MMPWResult, MMPWNow, MMPWLocation, MMPWPlatform, MMPWGreeting;

@protocol MMPWIGetWeaDetContractIGetWeaDetPresenter, MMPWIBasePresenter, MMPWIBaseView, MMPWIGetWeaDetContractIGetWeaDetView, MMPWIGetWeaDetContract;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
-(instancetype) init __attribute__((unavailable));
+(instancetype) new __attribute__((unavailable));
+(void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
@interface MMPWMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
@interface MMPWMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

@interface MMPWAbsGetWeaDetModel : KotlinBase
-(instancetype)initWithLocation:(NSString *)location NS_SWIFT_NAME(init(location:)) NS_DESIGNATED_INITIALIZER;

-(void)getWeaDetListener:(MMPWStdlibUnit *(^)(NSString *, id _Nullable))listener NS_SWIFT_NAME(getWeaDet(listener:));
@property (readonly) NSString *location;
@end;

@protocol MMPWIBasePresenter
@required
@property (readonly) id<MMPWIBaseView> view;
@end;

@protocol MMPWIGetWeaDetContractIGetWeaDetPresenter <MMPWIBasePresenter>
@required
-(void)getWeatherDetail NS_SWIFT_NAME(getWeatherDetail());
@end;

__attribute__((objc_subclassing_restricted))
@interface MMPWGetWeaDetPresenterImp : KotlinBase <MMPWIGetWeaDetContractIGetWeaDetPresenter>
-(instancetype)initWithView:(id<MMPWIGetWeaDetContractIGetWeaDetView>)view model:(MMPWAbsGetWeaDetModel *)model NS_SWIFT_NAME(init(view:model:)) NS_DESIGNATED_INITIALIZER;

@property (readonly) id<MMPWIGetWeaDetContractIGetWeaDetView> view;
@end;

@protocol MMPWIBaseView
@required
@end;

@protocol MMPWIGetWeaDetContract
@required
@end;

@protocol MMPWIGetWeaDetContractIGetWeaDetView <MMPWIBaseView>
@required
-(void)onGetStart NS_SWIFT_NAME(onGetStart());
-(void)onGetCompleteJson:(NSString *)json entity:(id _Nullable)entity NS_SWIFT_NAME(onGetComplete(json:entity:));
@end;

__attribute__((objc_subclassing_restricted))
@interface MMPWResults : KotlinBase
-(instancetype)initWithResults:(NSMutableArray<MMPWResult *> *)results NS_SWIFT_NAME(init(results:)) NS_DESIGNATED_INITIALIZER;

-(NSMutableArray<MMPWResult *> *)component1 NS_SWIFT_NAME(component1());
-(MMPWResults *)doCopyResults:(NSMutableArray<MMPWResult *> *)results NS_SWIFT_NAME(doCopy(results:));
@property (readonly) NSMutableArray<MMPWResult *> *results;
@end;

__attribute__((objc_subclassing_restricted))
@interface MMPWResult : KotlinBase
-(instancetype)initWithNow:(MMPWNow *)now location:(MMPWLocation *)location last_update:(NSString *)last_update NS_SWIFT_NAME(init(now:location:last_update:)) NS_DESIGNATED_INITIALIZER;

-(MMPWNow *)component1 NS_SWIFT_NAME(component1());
-(MMPWLocation *)component2 NS_SWIFT_NAME(component2());
-(NSString *)component3 NS_SWIFT_NAME(component3());
-(MMPWResult *)doCopyNow:(MMPWNow *)now location:(MMPWLocation *)location last_update:(NSString *)last_update NS_SWIFT_NAME(doCopy(now:location:last_update:));
@property (readonly) MMPWNow *now;
@property (readonly) MMPWLocation *location;
@property (readonly) NSString *last_update;
@end;

__attribute__((objc_subclassing_restricted))
@interface MMPWNow : KotlinBase
-(instancetype)initWithText:(NSString *)text code:(NSString *)code temperature:(NSString *)temperature NS_SWIFT_NAME(init(text:code:temperature:)) NS_DESIGNATED_INITIALIZER;

-(NSString *)component1 NS_SWIFT_NAME(component1());
-(NSString *)component2 NS_SWIFT_NAME(component2());
-(NSString *)component3 NS_SWIFT_NAME(component3());
-(MMPWNow *)doCopyText:(NSString *)text code:(NSString *)code temperature:(NSString *)temperature NS_SWIFT_NAME(doCopy(text:code:temperature:));
@property (readonly) NSString *text;
@property (readonly) NSString *code;
@property (readonly) NSString *temperature;
@end;

__attribute__((objc_subclassing_restricted))
@interface MMPWLocation : KotlinBase
-(instancetype)initWithId:(NSString *)id name:(NSString *)name country:(NSString *)country path:(NSString *)path timezone:(NSString *)timezone timezone_offset:(NSString *)timezone_offset NS_SWIFT_NAME(init(id:name:country:path:timezone:timezone_offset:)) NS_DESIGNATED_INITIALIZER;

-(NSString *)component1 NS_SWIFT_NAME(component1());
-(NSString *)component2 NS_SWIFT_NAME(component2());
-(NSString *)component3 NS_SWIFT_NAME(component3());
-(NSString *)component4 NS_SWIFT_NAME(component4());
-(NSString *)component5 NS_SWIFT_NAME(component5());
-(NSString *)component6 NS_SWIFT_NAME(component6());
-(MMPWLocation *)doCopyId:(NSString *)id name:(NSString *)name country:(NSString *)country path:(NSString *)path timezone:(NSString *)timezone timezone_offset:(NSString *)timezone_offset NS_SWIFT_NAME(doCopy(id:name:country:path:timezone:timezone_offset:));
@property (readonly) NSString *id;
@property (readonly) NSString *name;
@property (readonly) NSString *country;
@property (readonly) NSString *path;
@property (readonly) NSString *timezone;
@property (readonly) NSString *timezone_offset;
@end;

__attribute__((objc_subclassing_restricted))
@interface MMPWPlatform : KotlinBase
-(instancetype)init NS_SWIFT_NAME(init()) NS_DESIGNATED_INITIALIZER;
+ (instancetype)new OBJC_SWIFT_UNAVAILABLE("use object initializers instead");

@property (readonly) NSString *platform;
@end;

__attribute__((objc_subclassing_restricted))
@interface MMPWGreeting : KotlinBase
-(instancetype)init NS_SWIFT_NAME(init()) NS_DESIGNATED_INITIALIZER;
+ (instancetype)new OBJC_SWIFT_UNAVAILABLE("use object initializers instead");

-(NSString *)greeting NS_SWIFT_NAME(greeting());
@end;

__attribute__((objc_subclassing_restricted))
@interface MMPWStdlibUnit : KotlinBase
+(instancetype)alloc __attribute__((unavailable));
+(instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));

+(instancetype)unit NS_SWIFT_NAME(init());

@end;

NS_ASSUME_NONNULL_END
