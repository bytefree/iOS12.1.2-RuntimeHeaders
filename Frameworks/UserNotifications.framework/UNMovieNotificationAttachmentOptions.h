/* Generated by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNMovieNotificationAttachmentOptions : UNNotificationAttachmentOptions <UNNotificationAttachmentThumbnailOptions> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _thumbnailClippingRect;
    bool  _thumbnailHidden;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _thumbnailTimestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } thumbnailClippingRect;
@property (nonatomic, readonly) bool thumbnailHidden;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } thumbnailTimestamp;

+ (id)optionsFromOptionsDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithThumbnailHidden:(bool)arg1 thumbnailClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 thumbnailTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (bool)isEqual:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbnailClippingRect;
- (bool)thumbnailHidden;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })thumbnailTimestamp;

@end