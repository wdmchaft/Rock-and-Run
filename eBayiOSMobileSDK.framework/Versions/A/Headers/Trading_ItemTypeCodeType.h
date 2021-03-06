//
// Generated by eBay Common SDK Platform
//

#import <Foundation/Foundation.h>

/**
 @file
 
 Identifies listing-type-related filters.
 
 
 @ingroup Trading
*/

/**
 
 (in) Retrieve listings only eligible for competitive bidding at auction.
 That is, only retrieve listings for which ListingType is Chinese
 (single-item auction), regardless of the BuyItNowEnabled value.
 Items with any of the following listing types are not retrieved:
 StoresFixedPrice, FixedPriceItem, and AdType.
 <br><br>
 <span class="tablenote"><strong>Note:</strong>
 As of version 619, Dutch-style (multi-item) competitive-bid auctions are deprecated.
 eBay throws an error if you submit a Dutch item listing with AddItem
 or VerifyAddItem. If you use RelistItem to update a Dutch auction listing,
 eBay generates a warning and resets the Quantity value to 1.
 </span>
 <br>
 
*/
extern NSString *const Trading_ItemTypeCodeType_AUCTION_ITEMS_ONLY;

/**
 
 (in) Retrieves only listings that can be purchased at a fixed price. That is,
 only retrieves listings for which listing type is StoresFixedPrice or
 FixedPriceItem. Whether StoresFixedPrice items are retrieved depends on the site
 default. If StoresFixedPrice items are retrieved, they are returned after the
 other retrieved items. Also retrieves competitive-bid auction listings for which
 BuyItNowEnabled is true. Does not retrieve listings for which listing type is
 AdType, and does not retrieve auction listings for which BuyItNowEnabled is
 false.
 
*/
extern NSString *const Trading_ItemTypeCodeType_FIXED_PRICED_ITEM;

/**
 
 (in) Returns all listing types (the default for FindItemsAdvanced).
 It is recommended that you use AllItemTypes instead of AllItems.
 Whether StoresFixedPrice items are retrieved depends on the site default.
 
*/
extern NSString *const Trading_ItemTypeCodeType_ALL_ITEMS;

/**
 
 (in) Only retrieves listings for which the listing type is StoresFixedPrice.
 
*/
extern NSString *const Trading_ItemTypeCodeType_STORE_INVENTORY_ONLY;

/**
 
 (in) Excludes listings that have listing type set to StoresFixedPrice.
 Excludes listings that have listing type set to AdType.
 Excludes auction listings in which BuyItNowEnabled is false.
 
*/
extern NSString *const Trading_ItemTypeCodeType_FIXED_PRICE_EXCLUDE_STORE_INVENTORY;

/**
 
 (in) Excludes listings that have listing type set to StoresFixedPrice.
 
*/
extern NSString *const Trading_ItemTypeCodeType_EXCLUDE_STORE_INVENTORY;

/**
 
 (in) Retrieves listings whether or not listing type is set to StoresFixedPrice;
 include auction items. In searches for items, you must specify the AllItemTypes value
 if you want Store Inventory format (StoresFixedPrice) items to be returned.
 
*/
extern NSString *const Trading_ItemTypeCodeType_ALL_ITEM_TYPES;

/**
 
 (in) Retrieves fixed-price items.
 Whether StoresFixedPrice items are retrieved does not depend on the site default.
 The StoresFixedPrice items are retrieved after the basic fixed price items.
 Items are retrieved whether or not listing type is set to StoresFixedPrice.
 Does not retrieve items for which listing type is AdType.
 Does not retrieve auction items for which BuyItNowEnabled is false.
 
*/
extern NSString *const Trading_ItemTypeCodeType_ALL_FIXED_PRICE_ITEM_TYPES;

/**
 
 (out) Reserved for internal or future use.
 
*/
extern NSString *const Trading_ItemTypeCodeType_CUSTOM_CODE;

/**
 
 (in) Only retrieves Classified Ad format listings.
 
*/
extern NSString *const Trading_ItemTypeCodeType_CLASSIFIED_ITEMS_ONLY;

/**
 
 Restricts listings to return only items that have the Ad Format feature.
 
*/
extern NSString *const Trading_ItemTypeCodeType_AD_FORMAT;
  
