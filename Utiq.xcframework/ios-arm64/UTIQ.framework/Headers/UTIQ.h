#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class NSError, UtiqCoreBaseError, UtiqDataDomainNotFoundException, UtiqDataValueNotFoundException, UtiqEmptySetCookieHeaderException, UtiqEmptyUtiqCookiesException, UtiqIdConnectApiHostNotFoundException, UtiqIdConnectData, UtiqIdConnectDataCompanion, UtiqIdConnectDataNotFoundException, UtiqInvalidConsentVersionsException, UtiqInvalidSamlAuthenticationURLException, UtiqInvalidSamlLocationURLException, UtiqInvalidSamlSessionIdException, UtiqInvalidStubTokenException, UtiqKotlinArray<T>, UtiqKotlinNothing, UtiqKotlinThrowable, UtiqKotlinx_serialization_coreSerialKind, UtiqKotlinx_serialization_coreSerializersModule, UtiqMnoIneligibleException, UtiqMnoUrlNotFoundException, UtiqTemplateDataUrlNotFoundException, UtiqUnKnowUserStatusException, UtiqUndefinedTelcoException, UtiqUnknownTelcoUseCaseException, UtiqUserFrozenUtiqForOneYearException, UtiqUserOptedOutFromUtiqException, UtiqUtiq, UtiqUtiqConsentExpiredException, UtiqUtiqConsentNotSetException, UtiqUtiqOptions;

@protocol UtiqCoreSDKMainClassUtils, UtiqKotlinAnnotation, UtiqKotlinIterator, UtiqKotlinKAnnotatedElement, UtiqKotlinKClass, UtiqKotlinKClassifier, UtiqKotlinKDeclarationContainer, UtiqKotlinx_serialization_coreCompositeDecoder, UtiqKotlinx_serialization_coreCompositeEncoder, UtiqKotlinx_serialization_coreDecoder, UtiqKotlinx_serialization_coreDeserializationStrategy, UtiqKotlinx_serialization_coreEncoder, UtiqKotlinx_serialization_coreKSerializer, UtiqKotlinx_serialization_coreSerialDescriptor, UtiqKotlinx_serialization_coreSerializationStrategy, UtiqKotlinx_serialization_coreSerializersModuleCollector;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface UtiqBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface UtiqBase (UtiqBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface UtiqMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface UtiqMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorUtiqKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface UtiqNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface UtiqByte : UtiqNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface UtiqUByte : UtiqNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface UtiqShort : UtiqNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface UtiqUShort : UtiqNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface UtiqInt : UtiqNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface UtiqUInt : UtiqNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface UtiqLong : UtiqNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface UtiqULong : UtiqNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface UtiqFloat : UtiqNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface UtiqDouble : UtiqNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface UtiqBoolean : UtiqNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdConnectData")))
@interface UtiqIdConnectData : UtiqBase
- (instancetype)initWithMtid:(NSString * _Nullable)mtid atid:(NSString * _Nullable)atid attrid:(NSString * _Nullable)attrid __attribute__((swift_name("init(mtid:atid:attrid:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UtiqIdConnectDataCompanion *companion __attribute__((swift_name("companion")));
- (UtiqIdConnectData *)doCopyMtid:(NSString * _Nullable)mtid atid:(NSString * _Nullable)atid attrid:(NSString * _Nullable)attrid __attribute__((swift_name("doCopy(mtid:atid:attrid:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable atid __attribute__((swift_name("atid")));
@property (readonly) NSString * _Nullable attrid __attribute__((swift_name("attrid")));
@property (readonly) NSString * _Nullable mtid __attribute__((swift_name("mtid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdConnectData.Companion")))
@interface UtiqIdConnectDataCompanion : UtiqBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UtiqIdConnectDataCompanion *shared __attribute__((swift_name("shared")));
- (id<UtiqKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UtiqOptions")))
@interface UtiqUtiqOptions : UtiqBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (UtiqUtiqOptions *)enableLogging __attribute__((swift_name("enableLogging()")));
- (UtiqUtiqOptions *)setFallBackConfigJsonJson:(NSString *)json __attribute__((swift_name("setFallBackConfigJson(json:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface UtiqKotlinThrowable : UtiqBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(UtiqKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(UtiqKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (UtiqKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UtiqKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("CoreBaseError")))
@interface UtiqCoreBaseError : UtiqKotlinThrowable
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(UtiqKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(UtiqKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) int64_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataDomainNotFoundException")))
@interface UtiqDataDomainNotFoundException : UtiqCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)dataDomainNotFoundException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UtiqDataDomainNotFoundException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataValueNotFoundException")))
@interface UtiqDataValueNotFoundException : UtiqCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)dataValueNotFoundException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UtiqDataValueNotFoundException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmptySetCookieHeaderException")))
@interface UtiqEmptySetCookieHeaderException : UtiqCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)emptySetCookieHeaderException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UtiqEmptySetCookieHeaderException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmptyUtiqCookiesException")))
@interface UtiqEmptyUtiqCookiesException : UtiqCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)emptyUtiqCookiesException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UtiqEmptyUtiqCookiesException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdConnectApiHostNotFoundException")))
@interface UtiqIdConnectApiHostNotFoundException : UtiqCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)idConnectApiHostNotFoundException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UtiqIdConnectApiHostNotFoundException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdConnectDataNotFoundException")))
@interface UtiqIdConnectDataNotFoundException : UtiqCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)idConnectDataNotFoundException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UtiqIdConnectDataNotFoundException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InvalidConsentVersionsException")))
@interface UtiqInvalidConsentVersionsException : UtiqCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)invalidConsentVersionsException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UtiqInvalidConsentVersionsException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InvalidSamlAuthenticationURLException")))
@interface UtiqInvalidSamlAuthenticationURLException : UtiqCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)invalidSamlAuthenticationURLException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UtiqInvalidSamlAuthenticationURLException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InvalidSamlLocationURLException")))
@interface UtiqInvalidSamlLocationURLException : UtiqCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)invalidSamlLocationURLException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UtiqInvalidSamlLocationURLException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InvalidSamlSessionIdException")))
@interface UtiqInvalidSamlSessionIdException : UtiqCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)invalidSamlSessionIdException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UtiqInvalidSamlSessionIdException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InvalidStubTokenException")))
@interface UtiqInvalidStubTokenException : UtiqCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)invalidStubTokenException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UtiqInvalidStubTokenException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MnoIneligibleException")))
@interface UtiqMnoIneligibleException : UtiqCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)mnoIneligibleException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UtiqMnoIneligibleException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MnoUrlNotFoundException")))
@interface UtiqMnoUrlNotFoundException : UtiqCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)mnoUrlNotFoundException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UtiqMnoUrlNotFoundException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TemplateDataUrlNotFoundException")))
@interface UtiqTemplateDataUrlNotFoundException : UtiqCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)templateDataUrlNotFoundException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UtiqTemplateDataUrlNotFoundException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnKnowUserStatusException")))
@interface UtiqUnKnowUserStatusException : UtiqCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)unKnowUserStatusException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UtiqUnKnowUserStatusException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UndefinedTelcoException")))
@interface UtiqUndefinedTelcoException : UtiqCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)undefinedTelcoException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UtiqUndefinedTelcoException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnknownTelcoUseCaseException")))
@interface UtiqUnknownTelcoUseCaseException : UtiqCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)unknownTelcoUseCaseException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UtiqUnknownTelcoUseCaseException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserFrozenUtiqForOneYearException")))
@interface UtiqUserFrozenUtiqForOneYearException : UtiqCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)userFrozenUtiqForOneYearException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UtiqUserFrozenUtiqForOneYearException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserOptedOutFromUtiqException")))
@interface UtiqUserOptedOutFromUtiqException : UtiqCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)userOptedOutFromUtiqException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UtiqUserOptedOutFromUtiqException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UtiqConsentExpiredException")))
@interface UtiqUtiqConsentExpiredException : UtiqCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)utiqConsentExpiredException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UtiqUtiqConsentExpiredException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UtiqConsentNotSetException")))
@interface UtiqUtiqConsentNotSetException : UtiqCoreBaseError
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString *)message code:(int64_t)code __attribute__((swift_name("init(message:code:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)utiqConsentNotSetException __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UtiqUtiqConsentNotSetException *shared __attribute__((swift_name("shared")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("CoreSDKMainClassUtils")))
@protocol UtiqCoreSDKMainClassUtils
@required

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (id _Nullable)tryOrReThrowAndReturnError:(NSError * _Nullable * _Nullable)error function:(id _Nullable (^)(void))function __attribute__((swift_name("tryOrReThrow(function:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)tryOrReThrowAndReturnError:(NSError * _Nullable * _Nullable)error function_:(void (^)(void))function __attribute__((swift_name("tryOrReThrow(function_:)")));
- (void)tryOrThrowFunction:(void (^)(void))function errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("tryOrThrow(function:errorCallback:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Utiq")))
@interface UtiqUtiq : UtiqBase <UtiqCoreSDKMainClassUtils>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)utiq __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UtiqUtiq *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)acceptConsentAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("acceptConsent()")));
- (void)checkMNOEligibilitySuccessCallback:(void (^)(void))successCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("checkMNOEligibility(successCallback:errorCallback:)")));
- (void)checkMNOEligibilityStubToken:(NSString *)stubToken successCallback:(void (^)(void))successCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("checkMNOEligibility(stubToken:successCallback:errorCallback:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)clearDataAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("clearData()")));
- (NSString *)consentHubUrl __attribute__((swift_name("consentHubUrl()")));
- (NSString *)consentHubUrlStubToken:(NSString *)stubToken __attribute__((swift_name("consentHubUrl(stubToken:)")));
- (void)didInitializeWithResultSuccess:(void (^)(void))success failure:(void (^)(NSError *))failure __attribute__((swift_name("didInitializeWithResult(success:failure:)")));
- (void)fetchIdConnectDataDataCallback:(void (^)(UtiqIdConnectData *))dataCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("fetchIdConnectData(dataCallback:errorCallback:)")));
- (void)fetchIdConnectDataStubToken:(NSString *)stubToken dataCallback:(void (^)(UtiqIdConnectData *))dataCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("fetchIdConnectData(stubToken:dataCallback:errorCallback:)")));
- (void)initializeSdkToken:(NSString *)sdkToken __attribute__((swift_name("initialize(sdkToken:)")));
- (void)initializeSdkToken:(NSString *)sdkToken options:(UtiqUtiqOptions *)options __attribute__((swift_name("initialize(sdkToken:options:)")));
- (void)initializeSdkToken:(NSString *)sdkToken options:(UtiqUtiqOptions *)options success:(void (^)(void))success failure:(void (^)(NSError *))failure __attribute__((swift_name("initialize(sdkToken:options:success:failure:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)isConsentAcceptedAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("isConsentAccepted()"))) __attribute__((swift_error(nonnull_error)));
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)rejectConsentAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("rejectConsent()")));
- (void)rejectConsentSuccessCallback:(void (^)(void))successCallback errorCallback:(void (^)(NSError *))errorCallback __attribute__((swift_name("rejectConsent(successCallback:errorCallback:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol UtiqKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<UtiqKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<UtiqKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol UtiqKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<UtiqKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<UtiqKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol UtiqKotlinx_serialization_coreKSerializer <UtiqKotlinx_serialization_coreSerializationStrategy, UtiqKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface UtiqKotlinArray<T> : UtiqBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(UtiqInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<UtiqKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol UtiqKotlinx_serialization_coreEncoder
@required
- (id<UtiqKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<UtiqKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<UtiqKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<UtiqKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<UtiqKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) UtiqKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol UtiqKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<UtiqKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<UtiqKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<UtiqKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) UtiqKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol UtiqKotlinx_serialization_coreDecoder
@required
- (id<UtiqKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<UtiqKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (UtiqKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<UtiqKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<UtiqKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) UtiqKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol UtiqKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol UtiqKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<UtiqKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<UtiqKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<UtiqKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) UtiqKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface UtiqKotlinx_serialization_coreSerializersModule : UtiqBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<UtiqKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<UtiqKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<UtiqKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<UtiqKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<UtiqKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<UtiqKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<UtiqKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<UtiqKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol UtiqKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface UtiqKotlinx_serialization_coreSerialKind : UtiqBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol UtiqKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<UtiqKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<UtiqKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<UtiqKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<UtiqKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) UtiqKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface UtiqKotlinNothing : UtiqBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol UtiqKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<UtiqKotlinKClass>)kClass provider:(id<UtiqKotlinx_serialization_coreKSerializer> (^)(NSArray<id<UtiqKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<UtiqKotlinKClass>)kClass serializer:(id<UtiqKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<UtiqKotlinKClass>)baseClass actualClass:(id<UtiqKotlinKClass>)actualClass actualSerializer:(id<UtiqKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<UtiqKotlinKClass>)baseClass defaultDeserializerProvider:(id<UtiqKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<UtiqKotlinKClass>)baseClass defaultDeserializerProvider:(id<UtiqKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<UtiqKotlinKClass>)baseClass defaultSerializerProvider:(id<UtiqKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol UtiqKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol UtiqKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol UtiqKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol UtiqKotlinKClass <UtiqKotlinKDeclarationContainer, UtiqKotlinKAnnotatedElement, UtiqKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
