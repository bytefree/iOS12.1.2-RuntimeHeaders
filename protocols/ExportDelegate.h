/* Generated by EzioChiu.
 */

@protocol ExportDelegate <NSObject>

@optional

- (void)autoExportAlertCompleted;
- (void)didFinishExport;
- (bool)didFinishTestModeExport;
- (void)exportController:(ExportController *)arg1 progressedTo:(float)arg2 preventBackslide:(bool)arg3;
- (void)exportControllerWillStartCopyToCameraRoll:(ExportController *)arg1;

@end
