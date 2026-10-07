
int _xmlValidateRoot(xmlValidCtxtPtr ctxt,xmlDocPtr doc)

{
  int iVar1;
  xmlChar local_58 [56];
  xmlNodePtr local_20;
  int local_14;
  xmlChar *local_10;
  
  if (doc == (xmlDocPtr)0x0) {
    return 0;
  }
  local_20 = _xmlDocGetRootElement(doc);
  if ((local_20 == (xmlNodePtr)0x0) || (local_20->name == (xmlChar *)0x0)) {
    FUN_100183b80(ctxt,0x20d,"no root element\n",0);
    return 0;
  }
  if (((doc->intSubset != (_xmlDtd *)0x0) && (doc->intSubset->name != (xmlChar *)0x0)) &&
     (iVar1 = _xmlStrEqual(doc->intSubset->name,local_20->name), iVar1 == 0)) {
    if ((local_20->ns != (xmlNs *)0x0) && (local_20->ns->prefix != (xmlChar *)0x0)) {
      local_10 = _xmlBuildQName(local_20->name,local_20->ns->prefix,local_58,0x32);
      if (local_10 == (xmlChar *)0x0) {
        FUN_1001839fc(ctxt,0);
        return 0;
      }
      local_14 = _xmlStrEqual(doc->intSubset->name,local_10);
      if ((local_58 != local_10) && (local_20->name != local_10)) {
        (*(code *)_xmlFree)(local_10);
      }
      if (local_14 == 1) {
        return 1;
      }
    }
    iVar1 = _xmlStrEqual(doc->intSubset->name,(xmlChar *)"HTML");
    if ((iVar1 == 0) || (iVar1 = _xmlStrEqual(local_20->name,(xmlChar *)"html"), iVar1 == 0)) {
      FUN_100183d12(ctxt,local_20,0x213,"root and DTD name do not match \'%s\' and \'%s\'\n",
                    local_20->name,doc->intSubset->name,0);
      return 0;
    }
  }
  return 1;
}

