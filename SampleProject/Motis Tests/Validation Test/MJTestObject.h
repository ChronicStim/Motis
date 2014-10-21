//
//  MJTestObject0.h
//  Motis
//
//  Created by Joan Martin on 22/05/14.
//  Copyright (c) 2014 Mobile Jazz. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MJMotisObject;

@interface MJTestObject : NSObject

@property (nonatomic, assign) NSInteger integerField;
@property (nonatomic, assign) NSUInteger unsignedIntegerField;

@property (nonatomic, assign) float floatField;
@property (nonatomic, assign) double doubleField;
@property (nonatomic, assign) BOOL boolField;

@property (nonatomic, strong) NSString *stringField;
@property (nonatomic, strong) NSNumber *numberField;
@property (nonatomic, strong) NSURL *urlField;
@property (nonatomic, strong) NSDate *dateField;

@property (nonatomic, strong) id idField;
@property (nonatomic, strong) id <NSObject> idProtocolField;

@property (nonatomic, strong) NSString *privateStringField;
@property (nonatomic, assign) NSInteger privateIntegerField;

@property (nonatomic, strong) MJTestObject *testObject;
@property (nonatomic, strong) MJMotisObject *motisObject;

@property (nonatomic, strong) NSArray *array;
@property (nonatomic, strong) NSArray *objectArray;
@property (nonatomic, strong) NSArray *stringsArray;
@property (nonatomic, strong) NSArray *numbersArray;
@property (nonatomic, strong) NSArray *urlsArray;
@property (nonatomic, strong) NSArray *datesArray;

@end
