//
// Generated by eBay Common SDK Platform
//

#import <Foundation/Foundation.h>

/**
 @file
 
 Specifies the range of days the seller can be contacted. 
 
 
 @ingroup Trading
*/

/**
 
 Seller does not want to be contacted. Contact hours will not be supported for 
 any days. If contact hours are specified, they will be ignored.
 
*/
extern NSString *const Trading_DaysCodeType_NONE;

/**
 
 Seller can be contacted any day during the specified contact hours. 
 
*/
extern NSString *const Trading_DaysCodeType_EVERY_DAY;

/**
 
 Seller can be contacted Monday through Friday during the specified 
 contact hours.
 
*/
extern NSString *const Trading_DaysCodeType_WEEKDAYS;

/**
 
 Seller can  be contacted Saturday or Sunday during the specified 
 contact hours.
 
*/
extern NSString *const Trading_DaysCodeType_WEEKENDS;

/**
 
 (out) Reserved for internal or future use.
 
*/
extern NSString *const Trading_DaysCodeType_CUSTOM_CODE;
  