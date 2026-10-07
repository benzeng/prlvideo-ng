
void _xmlFreeEnumeration(xmlEnumerationPtr cur)

{
  if (cur != (xmlEnumerationPtr)0x0) {
    if (cur->next != (_xmlEnumeration *)0x0) {
      _xmlFreeEnumeration(cur->next);
    }
    if (cur->name != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(cur->name);
    }
    (*(code *)_xmlFree)(cur);
  }
  return;
}

