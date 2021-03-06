//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"
#import "Trading_AbstractResponseType.h"



/**
 
           LeaveFeedback response message includes an acknowledgement if the
           feedback was successfully left.
 
 
 @ingroup Trading
*/
@interface Trading_LeaveFeedbackResponseType : Trading_AbstractResponseType {

@private
    NSString *feedbackID;

}


/**
 
 The ID of the feedback that has been left.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *feedbackID;


@end
