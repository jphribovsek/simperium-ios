//
//  SPBinaryManager.h
//  Simperium
//
//  Created by Michael Johnston on 11-11-22.
//  Copyright (c) 2011 Simperium. All rights reserved.
//

#import <Foundation/Foundation.h>


#pragma mark ====================================================================================
#pragma mark SPBinaryManagerDelegate
#pragma mark ====================================================================================

extern NSString* const SPBinaryManagerBucketNameKey;
extern NSString* const SPBinaryManagerSimperiumKey;
extern NSString* const SPBinaryManagerAttributeDataKey;
extern NSString* const SPBinaryManagerLengthKey;


@protocol SPBinaryManagerDelegate <NSObject>
@optional
-(void)binaryUploadStarted:(NSDictionary *)uploadInfo;
-(void)binaryUploadSuccessful:(NSDictionary *)uploadInfo;
-(void)binaryUploadFailed:(NSDictionary *)uploadInfo error:(NSError *)error;
-(void)binaryUploadProgress:(NSDictionary *)uploadInfo increment:(long long)increment;

-(void)binaryDownloadStarted:(NSDictionary *)downloadInfo;
-(void)binaryDownloadSuccessful:(NSDictionary *)downloadInfo;
-(void)binaryDownloadFailed:(NSDictionary *)downloadInfo error:(NSError *)error;
-(void)binaryDownloadProgress:(NSDictionary *)downloadInfo increment:(long long)increment;
@end


#pragma mark ====================================================================================
#pragma mark SPBinaryManager
#pragma mark ====================================================================================

@interface SPBinaryManager : NSObject
@property (nonatomic, weak, readwrite) id<SPBinaryManagerDelegate> delegate;
@end
