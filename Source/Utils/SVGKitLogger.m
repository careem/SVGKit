#import <Foundation/Foundation.h>

#import "SVGKDefine_Private.h"

int SVGKitLogLevel;

static void setupSVGKitLogger(void) __attribute__((constructor));

static void setupSVGKitLogger(void) {
    static dispatch_once_t token;
    dispatch_once(&token, ^{
        NSString *logLevelString = NSProcessInfo.processInfo.environment[@"SVGKitLogLevel"];
        if (!logLevelString) {
            SVGKitLogLevel = 1;
        } else {
            SVGKitLogLevel = logLevelString.intValue;
        }
    });
}
