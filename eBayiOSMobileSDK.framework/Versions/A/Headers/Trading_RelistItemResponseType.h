//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"
#import "Trading_AbstractResponseType.h"


@class Trading_FeesType;

/**
 
 Returns the item ID and the estimated fees for the re-listed listing.
 
 
 @ingroup Trading
*/
@interface Trading_RelistItemResponseType : Trading_AbstractResponseType {

@private
    NSString *itemID;
    Trading_FeesType *fees;
    NSDate *startTime;
    NSDate *endTime;
    NSString *categoryID;
    NSString *category2ID;
    NSMutableArray *discountReason;

}


/**
 
 Unique item ID for the new listing.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 Child elements contain the estimated listing fees for the new item
 listing. The fees do not include the Final Value Fee (FVF), which cannot
 be determined until an item is sold.
 
 
 type : class Trading_FeesType
*/
@property (nonatomic, retain) Trading_FeesType *fees;

/**
 
 Date and time the new listing became active on the eBay site.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *startTime;

/**
 
 Date and time when the new listing ends. This is the starting time plus
 the listing duration.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *endTime;

/**
 
 ID of the primary category in which the item was listed.
 Only returned if you set Item.CategoryMappingAllowed to true in the request
 and the ID passed in Item.PrimaryCategory was mapped to a new ID by eBay.
 If the primary category has not changed or it has expired with no replacement,
 CategoryID does not return a value.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *categoryID;

/**
 
 ID of the secondary category in which the item was listed.
 Only returned if you set Item.CategoryMappingAllowed to true in the request
 and the ID passed in Item.SecondaryCategory was mapped to a new ID by eBay.
 If the secondary category has not changed or it has expired with no replacement,
 Category2ID does not return a value.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *category2ID;

/**
 
 The nature of the discount, if a discount applied.
 
 
 entry type : string constant in Trading_DiscountReasonCodeType.h
*/
@property (nonatomic, retain) NSMutableArray *discountReason;


@end
