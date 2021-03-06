//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class SOACommon_ErrorParameter;

/**
 
 A container for error details.
 
 
 @ingroup FindingService
*/
@interface SOACommon_ErrorData : NSObject <EbayNs_Bindable> {

@private
    NSNumber *errorId;
    NSString *domain;
    NSString *severity;
    NSString *category;
    NSString *message;
    NSString *subdomain;
    NSString *exceptionId;
    NSMutableArray *parameter;

}


/**
 
 A unique code that identifies the particular error condition that
 occurred. Your application can use error codes as identifiers in your
 customized error-handling algorithms.
 
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, retain) NSNumber *errorId;

/**
 
 Name of the domain in which the error occurred.
 <dl>
 <dt>
 <strong>domain values:</strong>
 </dt>
 <dt>
 Marketplace
 </dt>
 <dd>
 A business or validation error occurred in the service.
 </dd>
 <dt>
 SOA
 </dt>
 <dd>
 An exception occurred in the Service Oriented Architecture (SOA) 
 framework.
 </dd>
 </dl>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *domain;

/**
 
 Indicates whether the reported problem is fatal (an error) or is less-
 severe (a warning). Review the error message details for information on
 the cause.
 <br><br>
 If the request fails and the application is the source of the error (for
 example, a required element is missing), update the application before
 you retry the request. If the problem is due to incorrect user data,
 alert the end-user to the problem and provide the means for them to
 correct the data. Once the problem in the application or data is
 resolved, re-send the request to eBay.
 <br><br>
 If the source of the problem is on eBay's side, you can retry the request
 a reasonable number of times (eBay recommends you try the request twice).
 If the error persists, contact Developer Technical Support. Once the
 problem has been resolved, you can resend the request in its original
 form.
 <br><br>
 If a warning occurs, warning information is returned in addition to the
 business data. Normally, you do not need to resend the request (as the
 original request was successful). However, depending on the cause of the
 warning, you might need to contact the end user, or eBay, to effect a
 long term solution to the problem.
 
 
 type: string constant in SOACommon_ErrorSeverity.h
*/
@property (nonatomic, retain) NSString *severity;

/**
 
 There are three categories of errors: request errors, application 
 errors, and system errors.
 
 
 type: string constant in SOACommon_ErrorCategory.h
*/
@property (nonatomic, retain) NSString *category;

/**
 
 A detailed description of the condition that caused in the error.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *message;

/**
 
 Name of the subdomain in which the error occurred.
 <dl>
 <dt>
 <strong>subdomain values:</strong>
 </dt>
 <dt>
 Finding
 </dt>
 <dd>
 The error is specific to the Finding service.
 </dd>
 <dt>
 MarketplaceCommon
 </dt>
 <dd>
 The error is common to all Marketplace services.
 </dd>
 </dl>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *subdomain;

/**
 
 Unique identifier for an exception associated with an error.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *exceptionId;

/**
 
 Various warning and error messages return one or more variables that 
 contain contextual information about the error. This is often the 
 field or value that triggered the error.
 
 
 entry type : class SOACommon_ErrorParameter
*/
@property (nonatomic, retain) NSMutableArray *parameter;


@end
