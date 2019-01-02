/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface DebugPrefsViewController : UITableViewController {
    NSMutableDictionary * _extraObjects;
    NSArray * _sections;
}

@property (nonatomic, retain) NSMutableDictionary *extraObjects;
@property (nonatomic, retain) NSArray *sections;

+ (bool)hasDebugPrefs;
+ (bool)isDebugPrefs:(id)arg1;

- (void).cxx_destruct;
- (void)addAccessory:(id)arg1 forMenuItem:(id)arg2;
- (void)debugPrefsStop:(id)arg1;
- (id)extraObjects;
- (id)init;
- (void)loadDebugMenu;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentOverViewController:(id)arg1;
- (void)restoreDefaults:(id)arg1;
- (void)restoreDefaultsInSections:(id)arg1;
- (id)sections;
- (void)setExtraObjects:(id)arg1;
- (void)setSections:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)switchChanged:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewWillAppear:(bool)arg1;

@end