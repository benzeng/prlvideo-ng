
void _xmlFreeNs(xmlNsPtr cur)

{
  if (cur != (xmlNsPtr)0x0) {
    if (cur->href != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(cur->href);
    }
    if (cur->prefix != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(cur->prefix);
    }
    (*(code *)_xmlFree)(cur);
  }
  return;
}

