
void _xmlFreeValidCtxt(xmlValidCtxtPtr param_1)

{
  if (param_1->vstateTab != (xmlValidState *)0x0) {
    (*(code *)_xmlFree)(param_1->vstateTab);
  }
  if (param_1->nodeTab != (xmlNodePtr *)0x0) {
    (*(code *)_xmlFree)(param_1->nodeTab);
  }
  (*(code *)_xmlFree)(param_1);
  return;
}

