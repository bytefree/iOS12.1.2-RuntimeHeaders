/* Generated by EzioChiu.
 */

@protocol IKJSDOMElement <JSExport>

@required

- (IKDOMNamedNodeMap *)attributes;
- (NSString *)getAttribute:(NSString *)arg1;
- (IKDOMNodeList *)getElementsByTagName:(NSString *)arg1;
- (bool)hasAttribute:(NSString *)arg1;
- (bool)hasAttributes;
- (void)removeAttribute:(NSString *)arg1;
- (void)setAttribute:(NSString *)arg1 :(NSString *)arg2;
- (NSString *)tagName;

@end