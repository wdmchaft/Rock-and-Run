//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Trading_BidGroupType;

/**
 
 Contains a list of items that are part of a bid group.
 
 
 @ingroup Trading
*/
@interface Trading_BidGroupArrayType : NSObject <EbayNs_Bindable> {

@private
    NSMutableArray *bidGroup;

}


/**
 
 Contains a list of bid groups.
 
 
 entry type : class Trading_BidGroupType
*/
@property (nonatomic, retain) NSMutableArray *bidGroup;


@end
