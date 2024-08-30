#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.10 (swiftlang-5.10.0.13 clang-1500.3.9.4)
#ifndef SCANHELPERSDK_SWIFT_H
#define SCANHELPERSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
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
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
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
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
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
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AVFoundation;
@import CoreFoundation;
@import CoreMedia;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ScanHelperSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
/// @enum AngleStyle
/// @constant InLine
/// embedded.
/// @constant OnLine
/// overlap.
/// @constant OutLine
/// overhang.
/// @constant None
/// no style.
typedef SWIFT_ENUM(NSInteger, AngleStyle, open) {
  AngleStyleInLine = 0,
  AngleStyleOnLine = 1,
  AngleStyleOutLine = 2,
  AngleStyleNone = 3,
};

/// @enum AnimationStyle
/// Animation style enum, default is LineMove
/// @constant LineMove
/// move up and down.
/// @constant LineCenter
/// center.
/// @constant None
/// no animation.
typedef SWIFT_ENUM(NSInteger, AnimationStyle, open) {
  AnimationStyleLineMove = 0,
  AnimationStyleLineCenter = 1,
  AnimationStyleNone = 2,
};

@class UIColor;

SWIFT_CLASS("_TtC13ScanHelperSDK13AutoFocuStyle")
@interface AutoFocuStyle : NSObject
/// Border width (default 1)
@property (nonatomic) CGFloat borderWidth;
/// Centerline length (default 4)
@property (nonatomic) CGFloat limitHeight;
/// Border color (default orange)
@property (nonatomic, strong) UIColor * _Nonnull borderColor;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

/// @enum DoubleTapState
/// @constant Large
/// The enlarge.
/// @constant Small
/// The smaller.
typedef SWIFT_ENUM(NSInteger, DoubleTapState, open) {
  DoubleTapStateLarge = 0,
  DoubleTapStateSmall = 1,
};


SWIFT_CLASS("_TtC13ScanHelperSDK14HighlightStyle")
@interface HighlightStyle : NSObject
/// Border width (default 2)
@property (nonatomic) CGFloat borderWidth;
/// Border color (default green)
@property (nonatomic, strong) UIColor * _Nonnull borderColor;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSString;
@class UIImage;
@class ScanStyle;

SWIFT_CLASS("_TtC13ScanHelperSDK10ScanConfig")
@interface ScanConfig : NSObject
/// Only recognize a single result (default true)
@property (nonatomic) BOOL isSingle;
/// Show square borders (default true)
@property (nonatomic) BOOL isSquare;
/// Does it support double clicking gestures (default true)
@property (nonatomic) BOOL isDoubleTap;
/// Does it support scaling gestures (default true)
@property (nonatomic) BOOL isZoom;
/// Does it support light detection and automatically turn on the flash (default to true)
@property (nonatomic) BOOL isHasTorch;
/// Automatically turn on the brightness contrast value of the flash (default value is less than -1) [tested value range is around (-10~10)]
@property (nonatomic) double brightnessMinValue;
/// Automatically turn off the flash brightness contrast value (default to turn off when greater than 6)
@property (nonatomic) double brightnessMaxValue;
/// Scan quality (default not specified)
@property (nonatomic) AVCaptureSessionPreset _Nonnull preset;
/// Is a prompt box displayed when the QR code is successful (default true)
@property (nonatomic) BOOL isPromptBox;
/// Whether to play a prompt tone after successful scanning (default no sound, need to configure yourself)
@property (nonatomic, copy) NSString * _Nullable sound;
/// Scan animation style maps (default no animation, need to configure yourself)
@property (nonatomic, strong) UIImage * _Nullable animationImage;
/// Auto focus (default to true, mutually exclusive with isSingleFocu)
@property (nonatomic) BOOL isAutoFocu;
/// Does it support single point focusing (default false, mutually exclusive with isAutoFocu)
@property (nonatomic) BOOL isSingleFocu;
/// Default Scan Style
@property (nonatomic, strong) ScanStyle * _Nonnull scanStyle;
/// Bottom view customization (i.e. from the bottom border of the scan code to the bottom edge area of the parent view, default to false)
@property (nonatomic) BOOL isLimit;
/// View fully customizable (default false)
@property (nonatomic) BOOL isUnrestrained;
/// Print debugging information (default true)
@property (nonatomic) BOOL isDebug;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol ScanHelperDelegate;

SWIFT_CLASS("_TtC13ScanHelperSDK10ScanHelper")
@interface ScanHelper : NSObject
/// ScanHelperDelegate
@property (nonatomic, weak) id <ScanHelperDelegate> _Nullable delegate;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIView;
@class ScanResult;
@class CIContext;
@class CIFeature;

@interface ScanHelper (SWIFT_EXTENSION(ScanHelperSDK))
- (void)startWithSupView:(UIView * _Nonnull)supView scanConfig:(ScanConfig * _Nonnull)scanConfig scanRegion:(CGRect)scanRegion scanType:(NSArray<AVMetadataObjectType> * _Nonnull)scanType scanHandler:(void (^ _Nullable)(ScanResult * _Nonnull))scanHandler SWIFT_AVAILABILITY(ios,introduced=11.0);
- (void)stop SWIFT_AVAILABILITY(ios,introduced=11.0);
- (void)torchFlashWithOpen:(BOOL)open SWIFT_AVAILABILITY(ios,introduced=11.0);
- (NSArray<CIFeature *> * _Nullable)detectorWithImage:(UIImage * _Nonnull)image ofType:(NSString * _Nonnull)ofType context:(CIContext * _Nullable)context options:(NSDictionary<NSString *, id> * _Nullable)options SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=11.0);
@end

@class UIGestureRecognizer;
@class AVCaptureOutput;
@class AVCaptureConnection;
@class AVCaptureMetadataOutput;
@class AVMetadataObject;

@interface ScanHelper (SWIFT_EXTENSION(ScanHelperSDK)) <AVCaptureMetadataOutputObjectsDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldBeRequiredToFailByGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
- (void)captureOutput:(AVCaptureOutput * _Nonnull)output didOutputSampleBuffer:(CMSampleBufferRef _Nonnull)sampleBuffer fromConnection:(AVCaptureConnection * _Nonnull)connection;
- (void)captureOutput:(AVCaptureMetadataOutput * _Nonnull)output didOutputMetadataObjects:(NSArray<AVMetadataObject *> * _Nonnull)metadataObjects fromConnection:(AVCaptureConnection * _Nonnull)connection;
@end


SWIFT_PROTOCOL("_TtP13ScanHelperSDK18ScanHelperDelegate_")
@protocol ScanHelperDelegate <NSObject>
@optional
/// @method scanLimit:
/// @param bottomView
/// A view from the bottom of the scan box to the bottom area of the parent view.
/// @discussion
/// None
- (void)scanLimit:(UIView * _Nonnull)bottomView SWIFT_AVAILABILITY(ios,introduced=11.0);
/// @method scanUnrestrained:
/// @param fullView
/// A view that is the same size as the parent view.
/// @discussion
/// None
- (void)scanUnrestrained:(UIView * _Nonnull)fullView SWIFT_AVAILABILITY(ios,introduced=11.0);
/// @method scanCaptureOutput:
/// @param brightnessValue
/// A brightness value.
/// @discussion
/// None
- (void)scanCaptureOutput:(double)brightnessValue SWIFT_AVAILABILITY(ios,introduced=11.0);
/// @method scanMetadataOutput:
/// @param values
/// An array of scan results.
/// @discussion
/// None
- (void)scanMetadataOutput:(NSArray<ScanResult *> * _Nonnull)values SWIFT_AVAILABILITY(ios,introduced=11.0);
@end


/// @class ScanResult
SWIFT_CLASS("_TtC13ScanHelperSDK10ScanResult")
@interface ScanResult : NSObject
/// @property value
/// @discussion
/// The scan result string
@property (nonatomic, copy) NSString * _Nonnull value;
/// @property metadataType
/// @discussion
/// The scan result type
@property (nonatomic) AVMetadataObjectType _Nonnull metadataType;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC13ScanHelperSDK9ScanStyle")
@interface ScanStyle : NSObject
/// Print debugging information (default printing)
@property (nonatomic) BOOL isDebug;
/// Distance from boundary spacing (default of 60)
@property (nonatomic) NSInteger margin;
/// Square border thickness (default of 0 pixels)
@property (nonatomic) NSInteger lineHeight;
/// Square border color (default clear)
@property (nonatomic, strong) UIColor * _Nonnull lineColor;
/// Square border with 4 corner colors (default orange)
@property (nonatomic, strong) UIColor * _Nonnull angleColor;
/// Square border with 4 corner lengths (default of 30 pixels)
@property (nonatomic) NSInteger angleLength;
/// Square border with 4 corner heights (default of 4 pixels)
@property (nonatomic) NSInteger angleHeight;
/// Square border corner style (default overlap)
@property (nonatomic) enum AngleStyle angleStyle;
/// Scan code animation effect (default no animation)
@property (nonatomic) enum AnimationStyle anmiationStyle;
/// Auto focus style (customizable through proxy methods)
@property (nonatomic, strong) AutoFocuStyle * _Nonnull autoFocuStyle;
/// Highlight style (prompt box when QR code scanning is successful)
@property (nonatomic, strong) HighlightStyle * _Nonnull highlightStyle;
/// Scanned animation resource image (optional value, if left blank, no animation effect)
@property (nonatomic, strong) UIImage * _Nullable animationImage;
/// Background color of non recognition areas (default black, 0.5 transparency)
@property (nonatomic, strong) UIColor * _Nonnull unrecognizedArea;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
