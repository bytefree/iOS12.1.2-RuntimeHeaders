/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactViewController : UIViewController <CNContactViewHostProtocol> {
    _UIAccessDeniedView * _accessDeniedView;
    long long  _actions;
    CNContact * _additionalContact;
    void * _addressBook;
    bool  _allowsDisplayModePickerActions;
    bool  _allowsEditPhoto;
    NSString * _alternateName;
    CNContact * _contact;
    CNContactFormatter * _contactFormatter;
    UIView * _contactHeaderView;
    UIViewController * _contactHeaderViewController;
    CNContactStore * _contactStore;
    CNContact * _contentContact;
    CNContactContentViewController * _contentViewController;
    <CNContactViewControllerDelegate> * _delegate;
    long long  _displayMode;
    NSArray * _displayedPropertyKeys;
    long long  _editMode;
    NSArray * _extraBarButtonItems;
    NSString * _highlightedPropertyIdentifier;
    bool  _highlightedPropertyImportant;
    NSString * _highlightedPropertyKey;
    bool  _ignoreViewWillBePresented;
    NSString * _message;
    long long  _mode;
    CNContainer * _parentContainer;
    CNGroup * _parentGroup;
    CNPolicy * _policy;
    <CNContactViewControllerPPTDelegate> * _pptDelegate;
    NSArray * _preEditLeftBarButtonItems;
    NSString * _primaryPropertyKey;
    bool  _requiresSetup;
    bool  _shouldShowLinkedContacts;
    bool  _showingMeContact;
    UIViewController<CNContactContentViewController> * _viewController;
}

@property (nonatomic, readonly) _UIAccessDeniedView *accessDeniedView;
@property (nonatomic) long long actions;
@property (nonatomic, retain) CNContact *additionalContact;
@property (nonatomic) bool allowsActions;
@property (nonatomic) bool allowsDisplayModePickerActions;
@property (nonatomic) bool allowsEditPhoto;
@property (nonatomic) bool allowsEditing;
@property (nonatomic, copy) NSString *alternateName;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, retain) UIView *contactHeaderView;
@property (nonatomic, retain) UIViewController *contactHeaderViewController;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) CNContact *contentContact;
@property (nonatomic, retain) CNContactContentViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long displayMode;
@property (nonatomic, copy) NSArray *displayedPropertyKeys;
@property (nonatomic) long long editMode;
@property (nonatomic, retain) NSArray *extraBarButtonItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *highlightedPropertyIdentifier;
@property (nonatomic) bool highlightedPropertyImportant;
@property (nonatomic, retain) NSString *highlightedPropertyKey;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, retain) CNContainer *parentContainer;
@property (nonatomic, retain) CNGroup *parentGroup;
@property (nonatomic, readonly) CNPolicy *policy;
@property (nonatomic) <CNContactViewControllerPPTDelegate> *pptDelegate;
@property (nonatomic, retain) NSArray *preEditLeftBarButtonItems;
@property (nonatomic, retain) NSString *primaryPropertyKey;
@property (nonatomic, readonly) <CNContactViewControllerPrivateDelegate> *privateDelegate;
@property (nonatomic) bool requiresSetup;
@property (nonatomic) bool shouldShowLinkedContacts;
@property (nonatomic) bool showingMeContact;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController<CNContactContentViewController> *viewController;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)descriptorForRequiredKeys;
+ (id)viewControllerForContact:(id)arg1;
+ (id)viewControllerForNewContact:(id)arg1;
+ (id)viewControllerForUnknownContact:(id)arg1;
+ (id)viewControllerForUpdatingContact:(id)arg1 withPropertiesFromContact:(id)arg2;

- (void).cxx_destruct;
- (id)_contactPresentedViewController;
- (void)_endDelayingPresentation;
- (bool)_isDelayingPresentation;
- (void)_prepareViewController;
- (id)_primaryPropertyStringForContact:(id)arg1;
- (void)_setViewController:(id)arg1;
- (void)_setupViewController;
- (bool)_shouldBeOutOfProcess;
- (void)_viewWillBePresented;
- (id)accessDeniedView;
- (long long)actions;
- (id)additionalContact;
- (bool)allowsActions;
- (bool)allowsDisplayModePickerActions;
- (bool)allowsEditPhoto;
- (bool)allowsEditing;
- (id)alternateName;
- (void)configureNavigationItem:(id)arg1;
- (id)contact;
- (id)contactFormatter;
- (id)contactHeaderView;
- (id)contactHeaderViewController;
- (id)contactStore;
- (id)contentContact;
- (id)contentViewController;
- (void)dealloc;
- (id)delegate;
- (void)didChangePreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)didCompleteWithContact:(id)arg1;
- (void)didDeleteContact:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (long long)displayMode;
- (id)displayedPropertyKeys;
- (void)editCancel:(id)arg1;
- (long long)editMode;
- (void)enableCancelKeyboardShortcut;
- (void)enableSaveKeyboardShortcut;
- (id)extraBarButtonItems;
- (void)highlightPropertyWithKey:(id)arg1 identifier:(id)arg2;
- (void)highlightPropertyWithKey:(id)arg1 identifier:(id)arg2 important:(bool)arg3;
- (id)highlightedPropertyIdentifier;
- (bool)highlightedPropertyImportant;
- (id)highlightedPropertyKey;
- (id)initWithMode:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)isPresentingEditingController:(bool)arg1;
- (void)isPresentingFullscreen:(bool)arg1;
- (void)loadView;
- (id)message;
- (long long)mode;
- (id)navigationItemController;
- (id)parentContainer;
- (id)parentGroup;
- (id)policy;
- (id)pptDelegate;
- (id)preEditLeftBarButtonItems;
- (id)primaryPropertyKey;
- (id)privateDelegate;
- (bool)requiresSetup;
- (void)setActions:(long long)arg1;
- (void)setAdditionalContact:(id)arg1;
- (void)setAllowsActions:(bool)arg1;
- (void)setAllowsDisplayModePickerActions:(bool)arg1;
- (void)setAllowsEditPhoto:(bool)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContact:(id)arg1 additionalContact:(id)arg2 mode:(long long)arg3;
- (void)setContactFormatter:(id)arg1;
- (void)setContactHeaderView:(id)arg1;
- (void)setContactHeaderViewController:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setContentContact:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)setDisplayedPropertyKeys:(id)arg1;
- (void)setDoneButtonText:(id)arg1 enabled:(bool)arg2;
- (void)setEditMode:(long long)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setExtraBarButtonItems:(id)arg1;
- (void)setHighlightedPropertyIdentifier:(id)arg1;
- (void)setHighlightedPropertyImportant:(bool)arg1;
- (void)setHighlightedPropertyKey:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setParentContainer:(id)arg1;
- (void)setParentGroup:(id)arg1;
- (void)setPptDelegate:(id)arg1;
- (void)setPreEditLeftBarButtonItems:(id)arg1;
- (void)setPrimaryPropertyKey:(id)arg1;
- (void)setRequiresSetup:(bool)arg1;
- (void)setShouldShowLinkedContacts:(bool)arg1;
- (void)setShowingMeContact:(bool)arg1;
- (void)setViewController:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;
- (bool)shouldShowLinkedContacts;
- (bool)showingMeContact;
- (void)toggleEditing:(id)arg1;
- (void)updateEditNavigationItemsAnimated:(bool)arg1 doneButtonEnabled:(bool)arg2 doneButtonText:(id)arg3;
- (void)updateEditing:(bool)arg1 doneButtonEnabled:(bool)arg2 doneButtonText:(id)arg3;
- (id)viewController;
- (void)viewDidAppear;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)_mf_viewControllerForUnknownContactWithEmailAddress:(id)arg1;

@end