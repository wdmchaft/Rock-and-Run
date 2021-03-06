//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"
#import "Trading_AbstractResponseType.h"


@class Trading_PaginatedItemArrayType;
@class Trading_SellingSummaryType;
@class Trading_PaginatedOrderTransactionArrayType;
@class Trading_MyeBaySellingSummaryType;

/**
 
 Returns summary and detail information about items the user is selling,
 items scheduled to sell, currently listed, sold, and closed but not sold.
 
 
 @ingroup Trading
*/
@interface Trading_GetMyeBaySellingResponseType : Trading_AbstractResponseType {

@private
    Trading_SellingSummaryType *sellingSummary;
    Trading_PaginatedItemArrayType *scheduledList;
    Trading_PaginatedItemArrayType *activeList;
    Trading_PaginatedOrderTransactionArrayType *soldList;
    Trading_PaginatedItemArrayType *unsoldList;
    Trading_MyeBaySellingSummaryType *summary;
    Trading_PaginatedItemArrayType *bidList;
    Trading_PaginatedOrderTransactionArrayType *deletedFromSoldList;
    Trading_PaginatedItemArrayType *deletedFromUnsoldList;

}


/**
 
 Contains summary information about the items the user is selling.
 
 
 type : class Trading_SellingSummaryType
*/
@property (nonatomic, retain) Trading_SellingSummaryType *sellingSummary;

/**
 
 Contains the items the user has scheduled for sale, but whose listings have
 not yet started.
 
 
 type : class Trading_PaginatedItemArrayType
*/
@property (nonatomic, retain) Trading_PaginatedItemArrayType *scheduledList;

/**
 
 Contains the items the user is selling that have active listings.
 
 
 type : class Trading_PaginatedItemArrayType
*/
@property (nonatomic, retain) Trading_PaginatedItemArrayType *activeList;

/**
 
 Contains the items the user has sold.
 
 
 type : class Trading_PaginatedOrderTransactionArrayType
*/
@property (nonatomic, retain) Trading_PaginatedOrderTransactionArrayType *soldList;

/**
 
 Contains the items whose listings have ended but that have not sold.
 
 
 type : class Trading_PaginatedItemArrayType
*/
@property (nonatomic, retain) Trading_PaginatedItemArrayType *unsoldList;

/**
 
 Contains summary information about the items the user is selling.
 
 
 type : class Trading_MyeBaySellingSummaryType
*/
@property (nonatomic, retain) Trading_MyeBaySellingSummaryType *summary;

/**
 
 Contains the seller's active listings with bids.
 Only returned if items exist that meet the request criteria.
 
 
 type : class Trading_PaginatedItemArrayType
*/
@property (nonatomic, retain) Trading_PaginatedItemArrayType *bidList;

/**
 
 Contains the items the seller has sold and deleted from My eBay.
 
 
 type : class Trading_PaginatedOrderTransactionArrayType
*/
@property (nonatomic, retain) Trading_PaginatedOrderTransactionArrayType *deletedFromSoldList;

/**
 
 Contains the items with listings that were ended or did not sell and have been deleted from My eBay.
 
 
 type : class Trading_PaginatedItemArrayType
*/
@property (nonatomic, retain) Trading_PaginatedItemArrayType *deletedFromUnsoldList;


@end
