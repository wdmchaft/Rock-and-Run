//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Trading_AmountType;

/**
 
 Shipping costs and options related to a domestic shipping service.
 
 
 @ingroup Trading
*/
@interface Trading_ShippingServiceOptionsType : NSObject <EbayNs_Bindable> {

@private
    Trading_AmountType *shippingInsuranceCost;
    NSString *shippingService;
    Trading_AmountType *shippingServiceCost;
    Trading_AmountType *shippingServiceAdditionalCost;
    NSNumber *shippingServicePriority;
    NSNumber *expeditedService;
    NSNumber *shippingTimeMin;
    NSNumber *shippingTimeMax;
    Trading_AmountType *shippingSurcharge;
    NSNumber *freeShipping;

}


/**
 
 The insurance cost associated with shipping a single item
 with this shipping service. Exception: for GetItemShipping,
 this is proportional to QuantitySold. If the item has not yet been
 sold, insurance information cannot be calculated and the value is
 0.00. For calculated shipping only.
 Also applicable to Half.com (for GetOrders).
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *shippingInsuranceCost;

/**
 
 A domestic shipping service offered for shipping the item (for example, UPS
 Ground). For a list of valid values that you can cache for future use, call
 GeteBayDetails with DetailName set to ShippingServiceDetails.
 (NOTE: Not all shipping services returned in GeteBayDetails can be used in new
 listings. Be sure to examine the rules provided in ShippingServiceDetails to
 determine which services can be used in the AddItem family of calls.)
 <br><br>
 For flat and calculated shipping.
 Also applicable to Half.com (for GetOrders).
 <br><br>
 If there are two or more services and one is "pickup", "pickup"
 must not be specified as the first service.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *shippingService;

/**
 
 The meaning of this element depends on the call and on whether flat or
 calculated shipping has been selected. (For example, it could be the
 cost to ship a single item, the cost to ship all items, or the cost to ship
 just the first of many items, with ShippingServiceAdditionalCost accounting
 for the rest.) When returned by GetItemShipping, it includes the packaging and
 handling cost. For flat and calculated shipping.
 If this is for calculated shipping for a listing that has not
 yet ended, note that the cost cannot be determined until the listing
 has ended and the buyer has specified a postal code.
 <br>
 <br>
 For GetItemShipping, promotional shipping savings is reflected in the cost, if
 applicable. If the promotional shipping option is lower than other shipping
 services being offered, the savings is reflected in the returned shipping
 cost.
 The shipping service named Promotional Shipping Service (or whatever is
 the localized name for it) is included among the shipping services.
 If the promotional shipping cost is lower than the cost of other shipping
 services being offered, it is presented first in the list. (The LOWEST shipping
 service cost is always presented first, regardless of whether there is
 promotional shipping.)
 <br>
 <br>
 Also applicable to Half.com (for GetOrders).
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *shippingServiceCost;

/**
 
 The cost of shipping each additional item beyond the first item. For input,
 this is required if the listing is for multiple items. For single-item
 listings, it should be zero (or is defaulted to zero if not provided).
 For flat shipping only.
 Not applicable to Half.com.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *shippingServiceAdditionalCost;

/**
 
 Seller-preferred presentation order relative to other
 service options. Valid values: 1 (1st choice), 2 (2nd choice),
 3 (3rd choice). For flat and calculated shipping.
 Not applicable to Half.com.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *shippingServicePriority;

/**
 
 Indicates whether the service is an expedited shipping service. See Enabling Get It Fast.
 Not applicable to Half.com.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *expeditedService;

/**
 
 The minimum guaranteed number of days in which the shipping carrier
 can ship an item (not including the time it takes the seller to
 deliver the item to the shipping carrier). See Enabling Get It Fast.
 Not applicable to Half.com.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *shippingTimeMin;

/**
 
 The maximum guaranteed number of days the shipping carrier will
 take to ship an item (not including the time it takes the seller to
 deliver the item to the shipping carrier). See Enabling Get It Fast.
 Not applicable to Half.com.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *shippingTimeMax;

/**
 
 An additional fee to charge US buyers who ship via UPS to Alaska, Hawaii
 or Puerto Rico. Can only be assigned a value for the eBay US site and for
 items in the Parts and Accessories category of the eBay Motors site. Only returned if set.
 If some transactions in an order have a surcharge, surcharge is added
 only for those transactions.
 Flat rate shipping only.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *shippingSurcharge;

/**
 
 A seller offers free shipping by setting FreeShipping to true. This free
 shipping applies only to the first domestic shipping service. (It is ignored
 if set for any other shipping service.) If the seller has required shipping
 insurance as part of shipping (the seller set InsuranceOption to Required) and
 then the seller specified FreeShipping, eBay sets the insurance cost to 0.
 However, if the seller made shipping insurance optional, eBay preserves the
 cost of shipping insurance; it is up to the buyer whether to buy shipping
 insurance, regardless of whether the seller specified FreeShipping.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *freeShipping;



@end
