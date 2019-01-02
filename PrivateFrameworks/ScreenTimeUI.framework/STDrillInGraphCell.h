/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STDrillInGraphCell : STTableCell {
    STUsageGraphView * _usageGraphView;
    STUsageItem * _usageItem;
    UILabel * _usageLabel;
}

@property (nonatomic, readonly) STUsageGraphView *usageGraphView;
@property (nonatomic, readonly) STUsageItem *usageItem;
@property (nonatomic, readonly) UILabel *usageLabel;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)setValue:(id)arg1;
- (id)usageGraphView;
- (id)usageItem;
- (id)usageLabel;

@end