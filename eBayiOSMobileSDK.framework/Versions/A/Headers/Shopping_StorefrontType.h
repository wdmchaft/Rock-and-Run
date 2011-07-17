//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Contains information related to the item in the context of
 a seller's eBay Store. Applicable for auction format, Basic Fixed Price,
 and Store Inventory format items listed by eBay Stores sellers.
  
 
 @ingroup Shopping
*/
@interface Shopping_StorefrontType : NSObject <EbayNs_Bindable> {

@private
    NSString *storeURL;
    NSString *storeName;

}


/**
 
 The URL of the seller's eBay Store page. Not returned if the seller does not
 have an eBay store.
 <br><br>
 FindProducts only returned a default URL at the time of this writing.
 FindHalfProducts returns the URL of the seller's Half.com Shop page.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *storeURL;

/**
 
 The name of the seller's eBay Store. Not returned if the seller does not
 have an eBay store.
 <br><br>
 FindProducts returns an empty value for all items at the time of this writing.
 FindHalfProducts returns the name of seller's Half.com Shop, which is the
 SellerID.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *storeName;



@end