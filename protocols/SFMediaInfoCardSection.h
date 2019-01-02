/* Generated by EzioChiu.
 */

@protocol SFMediaInfoCardSection <SFCardSection>

@required

- (SFColor *)backgroundColor;
- (bool)canBeHidden;
- (NSArray *)details;
- (NSDictionary *)dictionaryRepresentation;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (bool)isMediaContainer;
- (NSData *)jsonData;
- (SFMediaItem *)mediaItem;
- (NSArray *)offers;
- (SFActionItem *)playAction;
- (NSArray *)punchoutOptions;
- (NSString *)punchoutPickerDismissText;
- (NSString *)punchoutPickerTitle;
- (int)separatorStyle;
- (void)setBackgroundColor:(SFColor *)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setDetails:(NSArray *)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setIsMediaContainer:(bool)arg1;
- (void)setMediaItem:(SFMediaItem *)arg1;
- (void)setOffers:(NSArray *)arg1;
- (void)setPlayAction:(SFActionItem *)arg1;
- (void)setPunchoutOptions:(NSArray *)arg1;
- (void)setPunchoutPickerDismissText:(NSString *)arg1;
- (void)setPunchoutPickerTitle:(NSString *)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSpecialOfferButtonLabel:(SFRichText *)arg1;
- (void)setType:(NSString *)arg1;
- (void)setWatchListButtonLabel:(NSString *)arg1;
- (void)setWatchListConfirmationText:(NSString *)arg1;
- (void)setWatchListContinuationText:(NSString *)arg1;
- (void)setWatchListIdentifier:(NSString *)arg1;
- (SFRichText *)specialOfferButtonLabel;
- (NSString *)type;
- (NSString *)watchListButtonLabel;
- (NSString *)watchListConfirmationText;
- (NSString *)watchListContinuationText;
- (NSString *)watchListIdentifier;

@end