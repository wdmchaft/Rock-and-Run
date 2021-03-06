//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"

// abstract class

@class Trading_BotBlockRequestType;

/**
 
 Base type definition of the request payload, which can carry any type of payload
 content plus optional versioning information and detail level requirements. All
 concrete request types (e.g., AddItemRequestType) are derived from the abstract
 request type. The naming convention we use for the concrete type names is the name
 of the service (the verb or call name) followed by "RequestType":
 VerbNameRequestType
 
 
 @ingroup Trading
*/
@interface Trading_AbstractRequestType : NSObject <EbayNs_Bindable> {

@private
    NSMutableArray *detailLevel;
    NSString *errorLanguage;
    NSString *messageID;
    NSString *version;
    NSString *endUserIP;
    NSString *errorHandling;
    NSString *invocationID;
    NSMutableArray *outputSelector;
    NSString *warningLevel;
    Trading_BotBlockRequestType *botBlock;

}


/**
 
 Detail levels are instructions that define standard subsets of
 data to return for particular data components (e.g., each
 Item, Transaction, or User) within the response payload.
 For example, a particular detail level might cause the
 response to include buyer-related data in every result
 (e.g., for every Item), but no seller-related data.
 Specifying a detail level is like using a
 predefined attribute list in the SELECT clause of an SQL query.
 Use the DetailLevel element to specify the required detail level
 that the client application needs pertaining to the data components
 that are applicable to the request.<br>
 <br>
 The DetailLevelCodeType defines the
 global list of available detail levels for all request types.
 Most request types support certain detail
 levels or none at all. If you pass a detail level that exists
 in the schema but that isn't valid for a particular request,
 eBay ignores it processes the request without it.
 For each request type, see the detail level tables in the
 Input/Output Reference to determine which detail levels are
 applicable and which elements are returned for each applicable
 detail level. (Some detail level tables are still in the
 eBay Web Services guide. They will be moved to the
 Input/Output Reference in a future release.)<br>
 <br>Note that DetailLevel is required input for
 GetMyMessages. <br>
 <br>
 With GetSellerList and other calls that retrieve large data sets,
 please avoid using ReturnAll when possible. For example, if you use
 GetSellerList, use a GranularityLevel or use the
 GetSellerEvents call instead. If you do use ReturnAll with
 GetSellerList, use a small EntriesPerPage value and a short
 EndTimeFrom/EndTimeTo range for better performance.
 
 
 entry type : string constant in Trading_DetailLevelCodeType.h
*/
@property (nonatomic, retain) NSMutableArray *detailLevel;

/**
 
 Use ErrorLanguage to return error strings for the call in a different language
 from the language commonly associated with the site that the requesting user
 is registered with. Specify the standard RFC 3066 language identification tag
 (e.g., en_US).
 <br>
 ID--- country<br>
 ----- -----<br>
 de_AT Austria<br>
 de_CH Switzerland<br>
 de_DE Germany <br>
 en_AU Australia <br>
 en_CA Canada <br>
 en_GB United Kingdom<br>
 en_SG Singapore<br>
 en_US United States <br>
 es_ES Spain <br>
 fr_BE Belgium (French)<br>
 fr_CA Canada (French) <br>
 fr_FR France <br>
 it_IT Italy <br>
 nl_BE Belgium (Dutch)<br>
 nl_NL Netherlands <br>
 zh_CN China<br>
 en_IN India<br>
 en_IE Ireland<br>
 zh_HK Hong Kong
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *errorLanguage;

/**
 
 In most cases, all calls support a MessageID element in the request and a
 CorrelationID element in the response. If you pass a message ID in a request,
 we will return the same value in CorrelationID in the response. You can use
 this for tracking that a response is returned for every request and to match
 particular responses to particular requests. If you do not pass MessageID in
 the request, CorrelationID is not returned. <br>
 <br>
 <span class="tablenote"><b>Note:</b>
 GetCategories, GetAttributesCS, GetCategory2CS, GetAttributesXSL,
 GetProductFinder, GetProductFinderXSL, and GetProductSearchPage
 are designed to retrieve very large sets of metadata
 that change once a day or less often. To improve performance,
 these calls return cached responses when you request all available data
 (with no filters). When this occurs, the MessageID and CorrelationID
 fields aren't applicable.
 However, if you specify an input filter to reduce the amount of data
 returned, the calls retrieve the latest data (not cached).
 When this occurs, MessageID and CorrelationID are applicable.
 </span>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *messageID;

/**
 
 The version number of the API code that you are
 programming against (e.g., 549).
 The version you specify for a call has these basic effects:<br>
 - It indicates the version of the code lists and other
 data that eBay should use to process your request.<br>
 - It indicates the schema version you are using.<br>
 You need to use a version that is greater than or equal to the
 lowest supported version.<br>
 <br>
 <b>For the SOAP API:</b> If you are using the SOAP API,
 this field is required. Specify the version of the WSDL your
 application is using.<br>
 <br>
 <b>For the XML API:</b> If you are using the XML API,
 this field has no effect. Instead, specify the version in the
 X-EBAY-API-COMPATIBILITY-LEVEL HTTP header.
 (If you specify Version in the body of an XML API request and it
 is different from the value in the HTTP header, eBay returns an
 informational warning that the value in the HTTP header was used
 instead.)
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *version;

/**
 
 The public IP address of the machine from which the request is sent.
 Your application captures that IP address and includes it in
 a call request. eBay evaluates requests for safety (also see
 the BotBlock container
 in the request and response of this call).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *endUserIP;

/**
 
 Error tolerance level for the call. This is a preference
 that specifies how eBay should handle requests that contain
 invalid data or that could partially fail. This gives you some control
 over whether eBay returns warnings or blocking errors
 and how eBay processes the invalid data.<br>
 <br>
 For AddItem and related calls, this field is only applicable when
 the listing includes Item Specifics and Pre-filled Item Information
 (such as AttributeSetArray and ProductListingDetails).
 
 
 type: string constant in Trading_ErrorHandlingCodeType.h
*/
@property (nonatomic, retain) NSString *errorHandling;

/**
 
 A unique identifer for a particular call. If the same InvocationID is passed
 in after it has been passed in once on a call that succeeded for a particular
 application and user, then an error will be returned. The identifier can
 only contain digits from 0-9 and letters from A-F. The
 identifier must be 32 characters long.  For example,
 1FB02B2-9D27-3acb-ABA2-9D539C374228.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *invocationID;

/**
 
 You can use the OutputSelector field to restrict the data returned by this call.
 When you make a call such as GetItem that retrieves data from eBay,
 the OutputSelector field is useful for restricting the data returned.
 This field makes the call response easier to use, especially when a large payload
 would be returned. If you use the OutputSelector field, the output data
 will include only the fields you specified in the request.
 For example, if you are using GetItem and you want the item data
 in the response to be restricted to the ViewItemURL
 (the URL where a user can view the listing) and BuyItNowPrice, then
 within the GetItem request, specify those output fields.
 To use this field, see the information at the following link.
 
 
 entry type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSMutableArray *outputSelector;

/**
 
 Controls whether or not to return warnings when the application passes
 unrecognized or deprecated elements in a request.<br>
 <br>
 An unrecognized element is one that is not defined in any supported
 version of the schema. Schema element names are case-sensitive,
 so using WarningLevel can also help you remove any potential hidden
 bugs within your application due to incorrect case or spelling in
 field names before you put your application into the
 Production environment.<br>
 <br>
 WarningLevel only validates elements; it doesn't validate
 XML attributes. It also doesn't control warnings related to
 user-entered strings or numbers, or warnings for
 logical errors.<br>
 <br>
 We recommend that you only use this during development and debugging.
 Do not use this in requests in your production code.
 
 
 type: string constant in Trading_WarningLevelCodeType.h
*/
@property (nonatomic, retain) NSString *warningLevel;

/**
 
 Container for a token and for user input.
 
 
 type : class Trading_BotBlockRequestType
*/
@property (nonatomic, retain) Trading_BotBlockRequestType *botBlock;



@end
