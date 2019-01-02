/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOTransitLineTicket : GEOAbstractRequestResponseTicket <GEOMapServiceTransitLineTicket>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;

@end