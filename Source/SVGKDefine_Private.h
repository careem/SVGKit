/**
SVGKDefine_Private.h

SVGKDefine define some common macro used for private header.
*/

#ifndef SVGKDefine_Private_h
#define SVGKDefine_Private_h

#import "SVGKDefine.h"

// These macro is only used inside framework project, does not expose to public header and effect user's define

extern int SVGKitLogLevel;

#define _SVGKitLog(frmt, level, ...) do {\
    if (level <= SVGKitLogLevel) {\
        NSLog(frmt, ##__VA_ARGS__); \
    }\
} while(0);

#define SVGKitLogError(frmt, ...)   _SVGKitLog(frmt, 1, ##__VA_ARGS__)
#define SVGKitLogWarn(frmt, ...)    _SVGKitLog(frmt, 2, ##__VA_ARGS__)
#define SVGKitLogInfo(frmt, ...)    _SVGKitLog(frmt, 3, ##__VA_ARGS__)
#define SVGKitLogDebug(frmt, ...)   _SVGKitLog(frmt, 4, ##__VA_ARGS__)
#define SVGKitLogVerbose(frmt, ...) _SVGKitLog(frmt, 5, ##__VA_ARGS__)

#if SVGKIT_MAC
#define NSStringFromCGRect(rect) NSStringFromRect(rect)
#define NSStringFromCGSize(size) NSStringFromSize(size)
#define NSStringFromCGPoint(point) NSStringFromPoint(point)
#endif

#endif /* SVGKDefine_Private_h */
