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
 
 Returns information about the user's My eBay watch list.
 
 
 @ingroup Trading
*/
@interface Trading_RemoveFromWatchListResponseType : Trading_AbstractResponseType {

@private
    NSNumber *watchListCount;
    NSNumber *watchListMaximum;

}


/**
 
 The current number of items in the user's watch list (after those
 specified in the call request have been removed)
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *watchListCount;

/**
 
 The maximum number of items allowed in watch lists. Currently this value
 is 200, and is the same for all sites and all users.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *watchListMaximum;


@end
