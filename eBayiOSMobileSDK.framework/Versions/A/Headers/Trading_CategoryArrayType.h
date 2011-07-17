//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Trading_CategoryType;

/**
 
 Container for a list of categories.
 
 
 @ingroup Trading
*/
@interface Trading_CategoryArrayType : NSObject <EbayNs_Bindable> {

@private
    NSMutableArray *category;

}


/**
 
 Contains details about one category. For GetCategories,
 this node is not returned when no detail level is specified.
 
 
 entry type : class Trading_CategoryType
*/
@property (nonatomic, retain) NSMutableArray *category;


@end