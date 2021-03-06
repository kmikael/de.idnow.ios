//
//  IDnowSettings.h
//  IDnow
//
//  Created by Matthias Redlin on 19.03.15.
//  Copyright (c) 2015 IDnow GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  Possible server environments for executing an identification
 */
typedef NS_ENUM(NSInteger, IDnowEnvironment)
{
	/**
	 *  Server environment not defined
	 */
	IDnowEnvironmentNotDefined,
	/**
	 *  Dev server environment
	 */
	IDnowEnvironmentDev,
	/**
	 *  Test server environment
	 */
	IDnowEnvironmentTest,
	/**
	 *  Live server environment
	 */
	IDnowEnvironmentLive
};

/**
 *  This class is used to instantiate an instance of IDnowController.
 *  It lets you customize the identification process.
 *  At least a transactionToken and a companyID have to be set before calling [IDnowController initialize].
 *  You can also explicitly set the environment, which describes on which server the identificaton will be executed.
 */
@interface IDnowSettings : NSObject

/**
 *  Creates an instance of IDnowSettings taking a company identifier into account.
 *
 *  @param companyID The company identifier provided by IDnow.
 *
 *  @return An IDnowSettings instance.
 */
+ (instancetype) settingsWithCompanyID: (NSString *) companyID;

/**
 *  Creates an instance of IDnowSettings taking a company identifier and a transaction token into account.
 *
 *  @param companyID The company identifier provided by IDnow.
 *
 *	@param transactionToken A token used for instantiating a photo or video identification.
 *
 *  @return An IDnowSettings instance.
 */
+ (instancetype) settingsWithCompanyID: (NSString *) companyID andTransactionToken: (NSString *) transactionToken;

/**
 *  A token that will be used for instantiating a photo or video identification.
 */
@property (strong, nonatomic) NSString *transactionToken;

/**
 *  The company id provided by IDnow.
 */
@property (strong, nonatomic) NSString *companyID;

/**
 *  The environment that should be used for the identification (DEV, TEST, LIVE)
 */
@property (assign, nonatomic) IDnowEnvironment environment;

/**
 *  If set to `false`, the Error-Success-Screen provided by the SDK will not be shown.
 *  The default value of this property is `true`.
 */
@property (assign, nonatomic) BOOL showErrorSuccessScreen;

/**
 *  If set to `false`, the video overview check screen will not be shown before starting a video identification.
 *  The default value of this property is `true`.
 */
@property (assign, nonatomic) BOOL showVideoOverviewCheck;

/**
 *  If set to `true`, the UI for the identification will always be displayed modal.
 */
@property (assign, nonatomic) BOOL forceModalPresentation;

@end