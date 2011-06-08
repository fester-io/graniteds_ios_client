/*
 
    Project : GraniteDS iOS Client
    File    : AMF.h
    Author  : Marc BAUER
 
    Original code from https://github.com/nesium/cocoa-amf/ with the following
    license:

    ------------------------------------------------------------------------------

    CocoaAMF is available under the terms of the MIT license. The full text of the
    MIT license is included below.

    MIT License
    ===========

    Copyright (c) 2008-2009 Marc Bauer. All rights reserved.

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE. 

*/

#ifndef __AMF_H__
#define __AMF_H__


#import <Foundation/Foundation.h>

typedef enum _AMFVersion
{
	kAMF0Version = 0x0,
	kAMF3Version = 0x3
} AMFVersion;

typedef enum _AMF0Type
{
	kAMF0NumberType = 0x0,
	kAMF0BooleanType = 0x1,
	kAMF0StringType = 0x2,
	kAMF0ObjectType = 0x3,
	kAMF0MovieClipType = 0x4,
	kAMF0NullType = 0x5,
	kAMF0UndefinedType = 0x6,
	kAMF0ReferenceType = 0x7,
	kAMF0ECMAArrayType = 0x8,
	kAMF0ObjectEndType = 0x9,
	kAMF0StrictArrayType = 0xA,
	kAMF0DateType = 0xB,
	kAMF0LongStringType = 0xC,
	kAMF0UnsupportedType = 0xD,
	kAMF0RecordsetType = 0xE,
	kAMF0XMLObjectType = 0xF,
	kAMF0TypedObjectType = 0x10,
	kAMF0AVMPlusObjectType = 0x11
} AMF0Type;

typedef enum _AMF3Type
{
	kAMF3UndefinedType = 0x0,
	kAMF3NullType = 0x1,
	kAMF3FalseType = 0x2,
	kAMF3TrueType = 0x3,
	kAMF3IntegerType = 0x4,
	kAMF3DoubleType = 0x5,
	kAMF3StringType = 0x6,
	kAMF3XMLDocType = 0x7,
	kAMF3DateType = 0x8,
	kAMF3ArrayType = 0x9,
	kAMF3ObjectType = 0xA,
	kAMF3XMLType = 0xB,
	kAMF3ByteArrayType = 0xC
} AMF3Type;

enum
{
	AMFUnarchiverUnpackArrayCollection = 0x1,
	AMFUnarchiverUnpackObjectProxyOption = 0x2
};

enum
{
	AMFArchiverPackArrayOption = 0x1 // converts an array to an ArrayCollection
};

NSString * NSStringFromAMF0Type(AMF0Type type);
NSString * NSStringFromAMF3Type(AMF3Type type);
NSString * NSStringFromAMF0TypeForDisplay(AMF0Type type);
NSString * NSStringFromAMF3TypeForDisplay(AMF3Type type);

#define kAMFCoreErrorDomain @"AMFCoreErrorDomain"
#define kAMFGatewayErrorDomain @"AMFGatewayErrorDomain"

typedef enum _AMFErrorCode
{
	kAMFErrorInvalidRequest = 1, 
	kAMFErrorServiceNotFound = 2, 
	kAMFErrorMethodNotFound = 3, 
	kAMFErrorArgumentMismatch = 4,
	kAMFErrorInvalidArguments = 5
} AMFErrorCode;


#endif
