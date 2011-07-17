//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Trading_NameValueListArrayType;
@class Trading_SellingStatusType;
@class Trading_SellingManagerProductInventoryStatusType;
@class Trading_AmountType;

/**
 
 This type defines the details about one specific variation.
 
 
 @ingroup Trading
*/
@interface Trading_VariationType : NSObject <EbayNs_Bindable> {

@private
    NSString *sku;
    Trading_AmountType *startPrice;
    NSNumber *quantity;
    Trading_NameValueListArrayType *variationSpecifics;
    NSNumber *unitsAvailable;
    Trading_AmountType *unitCost;
    Trading_SellingStatusType *sellingStatus;
    NSString *variationTitle;
    NSString *variationViewItemURL;
    NSNumber *delete;
    Trading_SellingManagerProductInventoryStatusType *sellingManagerProductInventoryStatus;
    NSNumber *watchCount;
    NSString *privateNotes;

}


/**
 
 A SKU (stock keeping unit) is an identifier defined by a seller. 
 It is only intended for the seller's use (not for buyers).
 Many sellers assign a SKU to an item of a specific type, 
 size, and color. For the seller's convenience, eBay preserves the 
 SKU on the variation, and also on corresponding transactions. 
 This enables you (as a seller) use the SKU to reconcile your
 eBay inventory with your own inventory system instead of using the 
 variation specifics. It is a good idea to track how many items of 
 each type, size, and color are selling so that you can restock 
 your shelves or update the variation quantity on eBay according to 
 customer demand. (eBay does not use the SKU.)<br>
 <br>
 If specified, all SKU values must be unique within the Variations 
 node. That is, no two variations within the same listing can have 
 the same SKU. <br>
 <br>
 If you set Item.InventoryTrackingMethod to true, 
 the variation SKU values are required and they must be 
 unique across all the seller's active listings.<br>
 <br>
 <b>For GetItem and related calls:</b> Only returned if the seller specified a SKU for the variation.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *sku;

/**
 
 The fixed price of all items identified by this variation. 
 For example, a "Blue, Large" variation price could be USD 10.00,
 and a "Black, Medium" variation price could be USD 5.00.<br>
 <br>
 Each variation requires its own price, and the prices can 
 be different for each variation. This enables sellers to 
 provide discounts on certain 
 variations without affecting the price of others.
 Required (and always returned) for listings with variations.<br>
 <br>
 You can revise a variation's price at any time (even if it
 has purchases). When you modify a variation during revise or
 relist, you need to include both its StartPrice and Quantity.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *startPrice;

/**
 
 <b>For AddFixedPriceItem and related calls:</b>
 On input, this should be the number of items available for sale that 
 are associated with this variation. If you set Quantity to zero when 
 you create a new listing (or relist), the variation is dropped from 
 the listing.<br>
 <br>
 <b>For GetItem and related calls:</b> 
 On output, this is the total number of items associated with the 
 variation (including the quantity sold). To calculate the quantity 
 available for sale, subtract QuantitySold from this value.<br>
 <br>
 <b>For ReviseFixedPriceItem:</b>
 You can revise a variation's quantity at any time, even if 
 it has purchases. However, at least one variation must remain
 with a non-zero quantity in order for the listing to remain active.
 When you modify a variation during revise or
 relist, you need to include both its StartPrice and Quantity. 
 If you revise the Quantity value for a variation after items have 
 already sold, specify the quantity available for sale. 
 (eBay will automatically add the 
 quantity sold to the value you specify.) If you set the quantity to 
 0 and the variation has no purchases, the variation may be 
 dropped from the listing.<br>
 <br>
 <b>For GetSellerTransactions:</b> See Item.Quantity instead.<br>
 <br>
 See the Trading API Guide for more details about setting and modifying a variation's quantity.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *quantity;

/**
 
 A list of name/value pairs that uniquely identify the variation within
 the listing. All variations must specify the same set of names, and
 each variation must provide a unique combination of values for those
 names. For example, if the items vary by color and size, then every
 variation must specify Color and Size as names, and no two
 variations can specify the same combination of color and size values.<br>
 <br>
 When you revise a listing that includes variations, you can't add or 
 change names or values in variation specifics (because the set of 
 variation specifics serves as a unique identifier). However, you can delete or replace individual variations as needed to match your 
 current inventory. Use the Variation.Delete field to delete a variation that has no sales (transactions). If the variation has 
 sales, then set the Quantity to 0.<br>
 <br>
 <b>For GetSellerEvents</b> To keep the GetSellerEvents 
 response smaller, variation specifics are not returned if the 
 variation has a SKU. If the variation has no SKU, then 
 variation specifics are returned instead. Optionally, you can pass 
 IncludeVariationSpecifics as true in the request to force 
 variation specifics to be returned, even when the SKU is returned.
 
 
 type : class Trading_NameValueListArrayType
*/
@property (nonatomic, retain) Trading_NameValueListArrayType *variationSpecifics;

/**
 
 Quantity of items in the seller's inventory for this
 Selling Manager product.
 This is not the same as the quantity available in a listed item.
 Required when a Selling Manager product defines variations.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *unitsAvailable;

/**
 
 Cost of the Selling Manager product that matches this variation.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *unitCost;

/**
 
 Contains the variation's quantity sold. 
 Always returned when variations are present.
 
 
 type : class Trading_SellingStatusType
*/
@property (nonatomic, retain) Trading_SellingStatusType *sellingStatus;

/**
 
 The title of the variation. This is a concatenation of the listing
 title plus the values (no names) from the VariationSpecifics. 
 For example, if the Title is "Polo Shirt" and the variation is 
 for a medium pink shirt, the variation title could be 
 "Polo Shirt[Pink,M].
 PayPal may also use this value
 to identify variations in transactions (for buyers and sellers).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *variationTitle;

/**
 
 URL for the variation on eBay. This links to eBay's View Item page, 
 with the page configured to show details of the specified variation.
 The syntax of this URL is similar to Item.ViewItemURL (not optimized
 for natural search).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *variationViewItemURL;

/**
 
 Deletes the specified variation from the listing. In general,
 a listing with Item Variations must have at least one
 variation with a non-zero Quantity in order to remain active. 
 Additional deletion rules depend
 on whether you are revising or relisting.<br>
 <br>
 <b>For ReviseFixedPriceItem only</b>: 
 If a variation has any purchases (i.e., a transaction was created 
 and QuantitySold is greather than 0), you can't 
 delete the variation, but you can set its quantity to zero. 
 If a variation has no purchases, you can delete it.<br>
 <br>
 To replace a varation, you can delete it and add the new 
 or corrected one. 
 However, you can't specify the same SKU twice in the 
 same request (because the intent would be ambiguous). 
 So, either use a new SKU for the newer variation,
 or use the call twice (once to delete the variation, and 
 once to add the new variation with the same SKU).<br>
 <br>
 <b>For RelistFixedPriceItem only</b>: 
 You can delete any variation, as long as the relisted listing
 includes at least 1 variation with a non-zero quantity.
 (That is, when you relist, you could delete all but one variation,
 or you could delete all existing variations and add a new one.)
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *delete;

/**
 
 Container for statistics about the Selling Manager product 
 that is associated with this variation.
 
 
 type : class Trading_SellingManagerProductInventoryStatusType
*/
@property (nonatomic, retain) Trading_SellingManagerProductInventoryStatusType *sellingManagerProductInventoryStatus;

/**
 
 The number of watches placed on this variation by eBay users. 
 
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, retain) NSNumber *watchCount;

/**
 
 A note a user makes on an item with variations in My eBay.
 <br>
 <br>
 For eBay.com, only GetMyeBaySelling (not GetItem) returns this 
 field, and only if you pass IncludeNotes in the request.
 Only visible to the user who created the note.<br>
 <br>
 Not supported as input in ReviseFixedPriceItem. 
 Use SetUserNotes instead.<br>
 <br>
 In SoldList, notes for variations are only returned at the
 Item level, not the variation level.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *privateNotes;



@end