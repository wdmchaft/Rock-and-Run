//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Contains the data for one type of feedback for one predefined time
 period. Parent FeedbackPeriodArrayType object indicates the type of
 feedback counted: positive, neutral, negative, or total. 
 
 
 @ingroup Shopping
*/
@interface Shopping_FeedbackPeriodType : NSObject <EbayNs_Bindable> {

@private
    NSNumber *periodInDays;
    NSNumber *count;

}


/**
 
 Indicates the time period for the feedback count. Returns a value indicating
 the number of days prior to the call for which feedbacks of the particular
 type are counted.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *periodInDays;

/**
 
 Count of the feedbacks received by the user for the time period prior to the
 call indicated in PeriodInDays.
 
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, retain) NSNumber *count;



@end