
void FUN_1008b99b4(xmlNodePtr param_1)

{
  if (param_1 != (xmlNodePtr)0x0) {
    _xmlUnlinkNode(param_1);
    _xmlFreeDocElementContent(param_1->doc,(xmlElementContentPtr)param_1->content);
    if (param_1->name != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(param_1->name);
    }
    if (param_1->nsDef != (xmlNs *)0x0) {
      (*(code *)_xmlFree)(param_1->nsDef);
    }
    if (param_1->psvi != (void *)0x0) {
      _xmlRegFreeRegexp(param_1->psvi);
    }
    (*(code *)_xmlFree)(param_1);
  }
  return;
}

