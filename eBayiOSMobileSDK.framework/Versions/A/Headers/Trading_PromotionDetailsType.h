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
 
 Contains information about a promoted item.
 
 
 @ingroup Trading
*/
@interface Trading_PromotionDetailsType : NSObject <EbayNs_Bindable> {

@private
    Trading_AmountType *promotionPrice;
    NSString *promotionPriceType;
    NSNumber *bidCount;
    Trading_AmountType *convertedPromotionPrice;

}


/**
 
 The price of the cross-promoted item in the currency of the site upon which
 the item is listed. Output only. If the item is listed on a site different
 from the site specified in the request, then ConvertedPromotionPrice is also
 returned. Not related to the Promotional Price Display feature.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *promotionPrice;

/**
 
 The listing type for the promoted item and how the item price is used. Not
 related to the Promotional Price Display feature.
 
 
 type: string constant in Trading_PromotionItemPriceTypeCodeType.h
*/
@property (nonatomic, retain) NSString *promotionPriceType;

/**
 
 Bid count if the item is an auction item and has bids.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *bidCount;

/**
 
 The converted price of the cross-promoted item. Output only. Emitted
 only when the item is listed on a site other than the site specified in the
 request. Returns the price in the currency of the site specified in the
 request. Not related to the Promotional Price Display feature.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *convertedPromotionPrice;



@end
