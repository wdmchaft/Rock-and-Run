//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Specifies 1 year feedback metrics for a seller.
 
 
 @ingroup Trading
*/
@interface Trading_SellerRoleMetricsType : NSObject <EbayNs_Bindable> {

@private
    NSNumber *positiveFeedbackLeftCount;
    NSNumber *negativeFeedbackLeftCount;
    NSNumber *neutralFeedbackLeftCount;
    NSNumber *feedbackLeftPercent;
    NSNumber *repeatBuyerCount;
    NSNumber *repeatBuyerPercent;
    NSNumber *uniqueBuyerCount;
    NSNumber *transactionPercent;
    NSNumber *crossBorderTransactionCount;
    NSNumber *crossBorderTransactionPercent;

}


/**
 
 Count of positive feedback entries given as a seller.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *positiveFeedbackLeftCount;

/**
 
 Count of negative feedback entries given as a seller.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *negativeFeedbackLeftCount;

/**
 
 Count of neutral feedback entries given as a seller.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *neutralFeedbackLeftCount;

/**
 
 Percentage of leaving feedback as a seller.
 
 
 type : NSNumber, wrapper for primitive float
*/
@property (nonatomic, retain) NSNumber *feedbackLeftPercent;

/**
 
 Number of buyers who bought more than once from this seller.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *repeatBuyerCount;

/**
 
 Percentage of repeat buyers.
 
 
 type : NSNumber, wrapper for primitive float
*/
@property (nonatomic, retain) NSNumber *repeatBuyerPercent;

/**
 
 Count of unique buyers from this seller.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *uniqueBuyerCount;

/**
 
 Percentage of number of times a member has sold successfully vs. the number of
 times a member has bought an item in the preceding 365 days.
 
 
 type : NSNumber, wrapper for primitive float
*/
@property (nonatomic, retain) NSNumber *transactionPercent;

/**
 
 Count of transactions done cross-border.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *crossBorderTransactionCount;

/**
 
 Percentage of cross-border transactions.
 
 
 type : NSNumber, wrapper for primitive float
*/
@property (nonatomic, retain) NSNumber *crossBorderTransactionPercent;



@end
