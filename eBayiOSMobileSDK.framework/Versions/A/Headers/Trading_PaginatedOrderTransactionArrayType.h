//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Trading_PaginationResultType;
@class Trading_OrderTransactionArrayType;

/**
 
 Contains a paginated list of orders, transactions, or both, with each
 item an OrderTransactionType.
 
 
 @ingroup Trading
*/
@interface Trading_PaginatedOrderTransactionArrayType : NSObject <EbayNs_Bindable> {

@private
    Trading_OrderTransactionArrayType *orderTransactionArray;
    Trading_PaginationResultType *paginationResult;

}


/**
 
 Contains the list of orders, transactions, or both.
 
 
 type : class Trading_OrderTransactionArrayType
*/
@property (nonatomic, retain) Trading_OrderTransactionArrayType *orderTransactionArray;

/**
 
 Specifies information about the list, including number of pages and
 number of entries.
 
 
 type : class Trading_PaginationResultType
*/
@property (nonatomic, retain) Trading_PaginationResultType *paginationResult;



@end
