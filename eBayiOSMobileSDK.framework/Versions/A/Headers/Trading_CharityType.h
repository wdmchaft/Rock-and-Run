//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Identifies a Giving Works listing and benefiting nonprofit charity organization.
 Currently supported through the US and eBay Motors sites only. The Ad Format and
 Mature Audiences categories are not supported.
 Not applicable for US eBay Motors, international, Real Estate, and Tickets.
 
 
 @ingroup Trading
*/
@interface Trading_CharityType : NSObject <EbayNs_Bindable> {

@private
    NSString *charityName;
    NSNumber *charityNumber;
    NSNumber *donationPercent;
    NSString *charityID;
    NSString *mission;
    NSString *logoURL;
    NSString *status;
    NSNumber *charityListing;

}


/**
 
 The name of the benefiting nonprofit charity organization selected by the
 charity seller.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *charityName;

/**
 
 A unique identification number assigned to a nonprofit
 charity organization by the dedicated provider of
 eBay Giving Works. Being superseded by CharityID. Max 10
 digits.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *charityNumber;

/**
 
 The percentage of the purchase price that the
 seller chooses to donate to the selected nonprofit
 organization. This percentage is displayed in the Giving
 Works item listing. Possible values: 10.0 to 100.0.
 Percentages must increment by 5.0. Minimum donation
 percentages may be required for Giving Works listings, see
 http://pages.ebay.com/help/sell/selling-nonprofit.html for
 details. DonationPercent is required input when listing
 Giving Works items.
 
 
 type : NSNumber, wrapper for primitive float
*/
@property (nonatomic, retain) NSNumber *donationPercent;

/**
 
 A unique identification number assigned by eBay to
 registered nonprofit charity organizations. Required input
 when listing Giving Works items.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *charityID;

/**
 
 The stated mission of the nonprofit charity
 organization. This mission is displayed in the Giving Works
 item listing.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *mission;

/**
 
 The URL of the nonprofit charity organization. This
 URL is displayed in the Giving Works item listing.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *logoURL;

/**
 
 The status of the nonprofit charity organization.
 
 
 type: string constant in Trading_CharityStatusCodeType.h
*/
@property (nonatomic, retain) NSString *status;

/**
 
 If true, indicates that the seller has chosen to use
 eBay Giving Works to donate a percentage of the item's
 purchase price to a selected nonprofit organization.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *charityListing;



@end