// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class BarCodeData;

/**
 (public class)
 
 @ingroup BarCodeSoap
*/
@interface GenerateBarCode : NSObject <PicoBindable> {

@private
    BarCodeData *_barCodeParam;
    NSString *_barCodeText;

}


/**
 (public property)
 
 type : class BarCodeData
*/
@property (nonatomic, retain) BarCodeData *barCodeParam;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *barCodeText;


@end
