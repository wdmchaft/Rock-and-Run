//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 An optional attribute that the seller wants to include in the listing.
 Enables you to specify an attribute by name rather than by ID.
 Only valid in Media categories (Books, DVD and Movies, Music, and Video Game categories).
 Currently, only the Condition attribute is supported.
 
 
 @ingroup Trading
*/
@interface Trading_LookupAttributeType : NSObject <EbayNs_Bindable> {

@private
    NSString *name;
    NSString *value;

}


/**
 
 The literal name of the attribute. For the US site, pass "Condition"
 (without quotes).<br>
 <br>
 When catalog-enabled categories start supporting 
 the newer ConditionID field in production, use ConditionID instead of LookupAttribute.Name.<br>
 <br>
 Not applicable to Half.com.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *name;

/**
 
 The attribute's literal value (i.e., not the value ID), as it is
 returned in GetAttributesCS. For this US site, this could be
 a literal like "Brand New" (without quotes) for a book
 or "New, Never Opened" for a camera.
 The value is not case-sensitive, but all spaces and punctuation
 need to match the attribute's literal value.<br>
 <br>
 Not applicable to Half.com.<br>
 <br>
 eBay uses this value to set the correct attribute ID and value ID on
 the item. This means you need to specify the correct value for the
 primary category (which is either the category you specify in
 PrimaryCategory or the category that eBay sets based on the product
 you identify in ProductListingDetails or ExternalProductID. <br>
 <br>
 In GetItem, the attribute-based condition value is returned in 
 AttributeSetArray.<br>
 <br>
 When catalog-enabled categories start supporting the newer 
 ConditionID model in production, use ConditionID instead of 
 LookupAttribute.Value.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *value;



@end
