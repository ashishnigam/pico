// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Shopping_SimpleItemType;

/**
 
 Container for a list of items. Can contain zero, one, or multiple
 SimpleItemType objects, each of which conveys the data for one item listing.
 
 
 @ingroup ShoppingInterface
*/
@interface Shopping_SimpleItemArrayType : NSObject <PicoBindable> {

@private
    NSMutableArray *_item;

}


/**
 
 Contains data for an item listing.
 
 
 entry type : class Shopping_SimpleItemType
*/

@property (nonatomic, retain) NSMutableArray *item;


@end