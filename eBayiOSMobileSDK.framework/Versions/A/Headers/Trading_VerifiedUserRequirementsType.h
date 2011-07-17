//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Container for verified user requirements.
 
 
 @ingroup Trading
*/
@interface Trading_VerifiedUserRequirementsType : NSObject <EbayNs_Bindable> {

@private
    NSNumber *verifiedUser;
    NSNumber *minimumFeedbackScore;

}


/**
 
 If true, blocks bidding by users who do not pass
 a simple check (for example, for credit card on file).
 See "Buyer Requirements - VerifiedUser" in the chapter
 "Field Differences for eBay Sites."
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *verifiedUser;

/**
 
 This field is ignored unless VerifiedUser is true.
 If this field is present, the user's feedback score is also considered:
 a user is blocked from bidding if the user's feedback score is
 less than or equal to the value of this field.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *minimumFeedbackScore;


@end