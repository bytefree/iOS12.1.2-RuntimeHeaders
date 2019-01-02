/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPropertyGeminiEditingCell : CNPropertySimpleCell <CNPickerControllerDelegate, CNUIGeminiDataSourceDelegate> {
    CNGeminiPickerController * _geminiPicker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNGeminiPickerController *geminiPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)wantsChevron;
+ (bool)wantsHorizontalLayout;

- (void).cxx_destruct;
- (void)geminiDataSourceDidUpdate:(id)arg1;
- (id)geminiItem;
- (id)geminiPicker;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)minCellHeight;
- (void)performDefaultAction;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)pickerDidCancel:(id)arg1;
- (void)setGeminiPicker:(id)arg1;
- (bool)shouldIndentWhileEditing;
- (bool)shouldPerformDefaultAction;
- (id)variableConstraints;

@end