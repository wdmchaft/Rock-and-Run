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
 
       Defines a suggested category, returned
       in response to a search for categories that contain
       listings with certain keywords in their titles and descriptions.
     
 
 @ingroup Trading
*/
@interface Trading_SuggestedCategoryType : NSObject <EbayNs_Bindable> {

@private
    Trading_CategoryType *category;
    NSNumber *percentItemFound;

}


/**
 
 Describes a category that contains items that match the query.
 
 
 type : class Trading_CategoryType
*/
@property (nonatomic, retain) Trading_CategoryType *category;

/**
 
 Percentage of the matching items that were found in this category, 
 relative to other categories in which matching items were also found. 
 Indicates the distribution of matching items across the suggested categories. 
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *percentItemFound;



@end