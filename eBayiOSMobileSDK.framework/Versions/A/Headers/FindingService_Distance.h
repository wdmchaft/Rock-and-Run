//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Distance, used for local searches.
 
 
 @ingroup FindingService
*/
@interface FindingService_Distance : NSObject <EbayNs_Bindable> {

@private
    NSNumber *value;
    NSString *unit;

}


/**
 (public property)
 
 type : NSNumber, wrapper for primitive double
*/
@property (nonatomic, retain) NSNumber *value;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *unit;


@end
