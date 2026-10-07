
int _xmlCopyError(xmlErrorPtr from,xmlErrorPtr to)

{
  xmlChar *pxVar1;
  xmlChar *pxVar2;
  xmlChar *pxVar3;
  xmlChar *pxVar4;
  xmlChar *pxVar5;
  int local_4c;
  
  if ((from == (xmlErrorPtr)0x0) || (to == (xmlErrorPtr)0x0)) {
    local_4c = -1;
  }
  else {
    pxVar1 = _xmlStrdup((xmlChar *)from->message);
    pxVar2 = _xmlStrdup((xmlChar *)from->file);
    pxVar3 = _xmlStrdup((xmlChar *)from->str1);
    pxVar4 = _xmlStrdup((xmlChar *)from->str2);
    pxVar5 = _xmlStrdup((xmlChar *)from->str3);
    if (to->message != (char *)0x0) {
      (*(code *)_xmlFree)(to->message);
    }
    if (to->file != (char *)0x0) {
      (*(code *)_xmlFree)(to->file);
    }
    if (to->str1 != (char *)0x0) {
      (*(code *)_xmlFree)(to->str1);
    }
    if (to->str2 != (char *)0x0) {
      (*(code *)_xmlFree)(to->str2);
    }
    if (to->str3 != (char *)0x0) {
      (*(code *)_xmlFree)(to->str3);
    }
    to->domain = from->domain;
    to->code = from->code;
    to->level = from->level;
    to->line = from->line;
    to->node = from->node;
    to->int1 = from->int1;
    to->int2 = from->int2;
    to->node = from->node;
    to->ctxt = from->ctxt;
    to->message = (char *)pxVar1;
    to->file = (char *)pxVar2;
    to->str1 = (char *)pxVar3;
    to->str2 = (char *)pxVar4;
    to->str3 = (char *)pxVar5;
    local_4c = 0;
  }
  return local_4c;
}

