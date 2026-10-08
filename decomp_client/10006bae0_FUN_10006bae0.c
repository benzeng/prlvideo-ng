
void FUN_10006bae0(void)

{
  MacUtils::addInstanceMethod("QNSView","QNSViewReplacement","viewDidChangeBackingProperties");
  MacUtils::replaceInstanceMethod
            ("QNSView","accessibilityIsIgnored","QNSViewReplacement","accessibilityIsIgnored",
             "Original");
  MacUtils::addInstanceMethod("QNSView","QNSViewReplacement","accessibilityAttributeNames");
  MacUtils::replaceInstanceMethod
            ("QNSView","accessibilityAttributeValue:","QNSViewReplacement",
             "accessibilityAttributeValue:","Original");
  return;
}

