//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Store color set.
 
 
 @ingroup Trading
*/
@interface Trading_StoreColorType : NSObject <EbayNs_Bindable> {

@private
    NSString *primary;
    NSString *secondary;
    NSString *accent;

}


/**
 
 Primary color for the Store. Specified in 6-digit Hex format.
 For example: F6F6C9
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *primary;

/**
 
 Secondary color for the Store. Specified in 6-digit Hex format.
 For example: F6F6C9
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *secondary;

/**
 
 Accent color for the Store. Specified in 6-digit Hex format.
 For example: F6F6C9
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *accent;



@end
