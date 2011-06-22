//
//  main.m
//  TDSemiModal
//
//  Created by Nathan  Reed on 18/10/10.
//  Copyright 2010 Nathan Reed. All rights reserved.
//

#import <UIKit/UIKit.h>

int main(int argc, char *argv[]) {
    int retVal;
#if __has_feature(objc_arc)
    @autoreleasepool {
        retVal = UIApplicationMain(argc, argv, nil, nil);
    }
#else
    NSAutoreleasePool * pool = [NSAutoreleasePool new];
    retVal = UIApplicationMain(argc, argv, nil, nil);
    [pool release];
#endif
    return retVal;
}
