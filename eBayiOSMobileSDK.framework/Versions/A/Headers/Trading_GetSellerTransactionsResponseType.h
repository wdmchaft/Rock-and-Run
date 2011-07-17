//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"
#import "Trading_AbstractResponseType.h"


@class Trading_TransactionArrayType;
@class Trading_UserType;
@class Trading_PaginationResultType;

/**
 
 Returns an array of transaction data for the seller specified in the request.
 The results can be used to create a report of data that is commonly
 necessary for end-of-auction processing.
 Zero, one, or many Transaction objects can be returned in the array.
 The set of transactions returned is limited to those that were modified between
 the times specified in the request's ModTimeFrom and ModTimeTo filters.
 The transactions returned are sorted by Transaction.Status.LastTimeModified,
 ascending order (that is, transactions that more recently were modified are returned last).
 Also returns information about the seller whose transactions were requested.
 If pagination filters were specified in the request, returns meta-data describing
 the effects of those filters on the current response and the estimated effects if
 the same filters are used in subsequent calls.
 
 
 @ingroup Trading
*/
@interface Trading_GetSellerTransactionsResponseType : Trading_AbstractResponseType {

@private
    Trading_PaginationResultType *paginationResult;
    NSNumber *hasMoreTransactions;
    NSNumber *transactionsPerPage;
    NSNumber *pageNumber;
    NSNumber *returnedTransactionCountActual;
    Trading_UserType *seller;
    Trading_TransactionArrayType *transactionArray;
    NSNumber *payPalPreferred;

}


/**
 
 Contains the total number of pages (TotalNumberOfPages) and the total number
 of entries (TotalNumberOfEntries) that could be returned given repeated calls
 that use the same selection criteria as the call that returned this response.
 
 
 type : class Trading_PaginationResultType
*/
@property (nonatomic, retain) Trading_PaginationResultType *paginationResult;

/**
 
 Indicates whether there are additional transactions to retrieve.
 That is, indicates whether more pages of data are available to be
 returned, given the filters that were specified in the request.
 Returns false for the last page of data.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *hasMoreTransactions;

/**
 
 Number of transactions returned per page (per call). May be a higher value
 than ReturnedTransactionCountActual if the page returned is the last page
 and more than one page of data exists.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *transactionsPerPage;

/**
 
 Page number for the page of transactions the response returned.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *pageNumber;

/**
 
 Number of transactions retrieved in the current page of results just returned.
 May be a lower value than TransactionsPerPage if the page returned is the last
 page and more than one page of data exists.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *returnedTransactionCountActual;

/**
 
 Contains information about the seller whose transactions are being returned.
 See the reference guide for information about the fields of the Seller object
 that are returned.
 
 
 type : class Trading_UserType
*/
@property (nonatomic, retain) Trading_UserType *seller;

/**
 
 List of Transaction objects representing the seller's recent sales.
 Each Transaction object contains the data for one purchase
 (of one or more items in the same listing).
 See the reference guide for more information about the fields that are returned
 for each transaction.
 
 
 type : class Trading_TransactionArrayType
*/
@property (nonatomic, retain) Trading_TransactionArrayType *transactionArray;

/**
 
 Indicates whether the seller has the preference enabled that shows that the seller
 prefers PayPal as the method of payment for an item. This preference is indicated on
 an item's View Item page and is intended to influence a buyer to use PayPal
 to pay for the item.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *payPalPreferred;


@end