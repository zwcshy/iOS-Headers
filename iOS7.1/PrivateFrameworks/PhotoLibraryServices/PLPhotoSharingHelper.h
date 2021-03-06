//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLPhotoSharingHelper : NSObject
{
}

+ (BOOL)debugAutoAcceptInvitation;
+ (BOOL)debugDownloadAllDerivatives;
+ (BOOL)debugDownloadMetadataOnly;
+ (BOOL)debugDownloadThumbnailsOnly;
+ (BOOL)debugAlwaysStreamSharedVideos;
+ (void)deleteDebugBreadcrumbsForAlbumGUID:(id)arg1;
+ (void)writeDownloadDebugBreadcrumbForAsset:(id)arg1 albumGUID:(id)arg2 content:(id)arg3 state:(int)arg4 error:(id)arg5;
+ (void)writeUploadDebugBreadcrumbForAssetCollections:(id)arg1 state:(int)arg2 error:(id)arg3;
+ (id)prefixForBreadcrumbState:(int)arg1;
+ (void)writeAlbumNameBreadCrumb:(id)arg1 forAlbumGUID:(id)arg2 isUpload:(BOOL)arg3;
+ (id)directoryPathForDownloadActivityForAlbumGUID:(id)arg1 create:(BOOL)arg2;
+ (id)directoryPathForUploadActivityForAlbumGUID:(id)arg1 create:(BOOL)arg2;
+ (BOOL)isBreadcrumbDebugEnabled;
+ (unsigned long long)purgeSpace:(unsigned long long)arg1;
+ (unsigned long long)purgeableSpace;
+ (void)countOfAssetsInMstreamdSharingDownloadQueueWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)isMstreamdBusyPerformingSharingActivityWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)applicationIsInForeground:(BOOL)arg1;
+ (double)intervalBetweenAlbumPolls;
+ (double)intervalBetweenPolls;
+ (void)downloadAsset:(id)arg1 requestThumbnail:(BOOL)arg2 shouldPrioritize:(BOOL)arg3 shouldExtendTimer:(BOOL)arg4;
+ (id)_downloadRequestQueue;
+ (BOOL)_shouldDownloadAsset:(id)arg1 requestThumbnail:(BOOL)arg2;
+ (void)prioritizeDownloadsForAlbumGUID:(id)arg1;
+ (void)checkServerModelForAlbum:(id)arg1;
+ (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2;
+ (void)markAlbumGUIDAsViewed:(id)arg1 clearUnseenAssetsCount:(BOOL)arg2;
+ (struct CGSize)derivedAssetSizeForMasterSizeWidth:(float)arg1 height:(float)arg2 derivativeType:(int)arg3 withSpecificationInfo:(id)arg4;
+ (id)temporaryLargeVideoDerivativePathForCollectionGUID:(id)arg1;
+ (id)temporarySmallVideoDerivativePathForCollectionGUID:(id)arg1;
+ (id)temporaryVideoPosterFramePathForCollectionGUID:(id)arg1;
+ (id)temporaryVideoPathForCollectionGUID:(id)arg1;
+ (id)temporaryThumbnailPathForCollectionGUID:(id)arg1;
+ (id)temporaryDerivativePathForCollectionGUID:(id)arg1;
+ (float)derivedAssetSmallDimensionLimitForType:(int)arg1;
+ (id)derivativesForMasterAsset:(id)arg1 withSpecifications:(id)arg2;
+ (id)videoDerivativesForAssetCollection:(id)arg1 withSpecifications:(id)arg2;
+ (struct CGSize)dimensionsOfVideoAtURL:(id)arg1;
+ (void)deleteCommentWithGUIDFromServer:(id)arg1;
+ (void)publishCloudSharedCommentToServer:(id)arg1;
+ (void)handlePhoneInvitationFailuresWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (id)_processPhoneFailuresQueue;
+ (void)savePhoneInvitationFailuresForPhoneNumber:(id)arg1 inAlbum:(id)arg2;
+ (id)_phoneInvitationFailureFile;
+ (BOOL)hasPhoneInvitationForAlbum:(id)arg1;
+ (void)refreshSubscriberListForAlbumGUID:(id)arg1;
+ (void)declinePendingInvitationForAlbum:(id)arg1;
+ (void)acceptPendingInvitationForAlbum:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)unsubscribeFromAlbum:(id)arg1;
+ (void)removeSubscribers:(id)arg1 fromOwnedAlbum:(id)arg2;
+ (void)sendPendingInvitationsForNewlyCreatedAlbum:(id)arg1;
+ (unsigned int)unregisterIdleStateChangeObserverWithToken:(int)arg1;
+ (unsigned int)registerIdleStateChangeObserverWithToken:(int *)arg1 handler:(CDUnknownBlockType)arg2;
+ (BOOL)removeCloudSharingDirectories:(id *)arg1;
+ (void)requestVideoPlaybackURLForAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (BOOL)isCellularConnection;
+ (void)deleteCloudSharedAssetsFromServer:(id)arg1 inSharedAlbum:(id)arg2;
+ (void)enqueueCloudSharedAssetsForPublishToServer:(id)arg1 inSharedAlbum:(id)arg2;
+ (void)updateCloudSharedAlbumMultipleContributorsStateOnServer:(id)arg1;
+ (void)updateCloudSharedAlbumPublicURLStateOnServer:(id)arg1;
+ (void)updateCloudSharedAlbumMetadataOnServer:(id)arg1;
+ (void)deleteCloudSharedAlbumFromServer:(id)arg1;
+ (void)publishCloudSharedAlbumToServer:(id)arg1;
+ (void)deleteLocalAlbumsForMSASAlbumsWithGUIDs:(id)arg1;
+ (void)resetAllLocalState;
+ (void)updateLocalAlbumMetadataForMSASAlbum:(id)arg1 info:(id)arg2;
+ (void)trackUploadBatchSize:(unsigned int)arg1;
+ (id)_localizationKeyForAssets:(id)arg1;
+ (BOOL)canSetUserCloudSharedLiked:(BOOL)arg1 forAssets:(id)arg2 error:(id *)arg3;
+ (BOOL)canAcceptPendingInvitationForAlbum:(id)arg1 error:(id *)arg2;
+ (BOOL)canCreateStreamInPhotoLibrary:(id)arg1 error:(id *)arg2;
+ (BOOL)hasReachedLimitOfSubscribedStreamsInLibrary:(id)arg1;
+ (BOOL)hasReachedLimitOfOwnedStreamsInLibrary:(id)arg1;
+ (int)maxVideoLengthForPublishing;
+ (int)maxNumDerivativesToDownloadPerPush;
+ (int)maxCharactersPerComment;
+ (int)maxCommentsPerAsset;
+ (int)maxSubscribersPerStream;
+ (int)maxAssetsPerStream;
+ (int)maxSubscribedStreams;
+ (int)maxOwnedStreams;
+ (struct CGSize)videoPosterFrameDimension;
+ (int)_serverLimitValueForKey:(id)arg1 withDefaultResult:(int)arg2;
+ (id)serverSideConfigurationDictionary;
+ (void)updateSharedAlbumsCachedServerConfigurationLimits;
+ (id)streamdVideoCache;
+ (id)_pathToServerConfigurationCache;
+ (void)initializeMSPlatform;
+ (void)forgetSharingPersonID:(id)arg1;
+ (void)retryOutstandingActivities;
+ (void)pollForAlbumListUpdates;
+ (BOOL)accountMatchesEmail:(id)arg1;
+ (id)sharingEmail;
+ (id)sharingPersonID;
+ (BOOL)sharedStreamsExplictlyDisabled;
+ (BOOL)sharedStreamsEnabled;
+ (BOOL)sharedStreamsUIEnabled;
+ (void)clearCachedAccountState;
+ (void)photosPreferencesChanged;
+ (void)accountSettingsChanged;

@end

