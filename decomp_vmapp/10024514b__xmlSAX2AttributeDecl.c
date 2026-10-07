
void _xmlSAX2AttributeDecl
               (void *ctx,xmlChar *elem,xmlChar *fullname,int type,int def,xmlChar *defaultValue,
               xmlEnumerationPtr tree)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  xmlChar *local_40;
  void *local_38;
  xmlAttributePtr local_30;
  xmlChar *local_28;
  undefined4 local_1c;
  
  local_28 = (xmlChar *)0x0;
  local_40 = (xmlChar *)0x0;
  if (ctx != (void *)0x0) {
    local_38 = ctx;
    iVar2 = _xmlStrEqual(fullname,(xmlChar *)"xml:id");
    if ((iVar2 != 0) && (type != 2)) {
      local_1c = *(undefined4 *)((long)local_38 + 0x98);
      FUN_100244133(local_38,0x21c,"xml:id : attribute type should be ID\n",0,0);
      *(undefined4 *)((long)local_38 + 0x98) = local_1c;
    }
    local_28 = (xmlChar *)_xmlSplitQName(local_38,fullname,&local_40);
    *(undefined4 *)((long)local_38 + 0xe0) = 1;
    if (*(int *)((long)local_38 + 0x150) == 1) {
      local_30 = _xmlAddAttributeDecl
                           ((xmlValidCtxtPtr)((long)local_38 + 0xa0),
                            *(xmlDtdPtr *)(*(long *)((long)local_38 + 0x10) + 0x50),elem,local_28,
                            local_40,type,def,defaultValue,tree);
    }
    else {
      if (*(int *)((long)local_38 + 0x150) != 2) {
        FUN_100244280(local_38,1,"SAX.xmlSAX2AttributeDecl(%s) called while not in subset\n",
                      local_28,0);
        _xmlFreeEnumeration(tree);
        return;
      }
      local_30 = _xmlAddAttributeDecl
                           ((xmlValidCtxtPtr)((long)local_38 + 0xa0),
                            *(xmlDtdPtr *)(*(long *)((long)local_38 + 0x10) + 0x58),elem,local_28,
                            local_40,type,def,defaultValue,tree);
    }
    if (*(int *)((long)local_38 + 0xe0) == 0) {
      *(undefined4 *)((long)local_38 + 0x98) = 0;
    }
    if ((((local_30 != (xmlAttributePtr)0x0) && (*(int *)((long)local_38 + 0x9c) != 0)) &&
        (*(int *)((long)local_38 + 0x18) != 0)) &&
       ((*(long *)((long)local_38 + 0x10) != 0 &&
        (*(long *)(*(long *)((long)local_38 + 0x10) + 0x50) != 0)))) {
      uVar1 = *(uint *)((long)local_38 + 0x98);
      uVar3 = _xmlValidateAttributeDecl
                        ((xmlValidCtxtPtr)((long)local_38 + 0xa0),
                         *(xmlDocPtr *)((long)local_38 + 0x10),local_30);
      *(uint *)((long)local_38 + 0x98) = uVar1 & uVar3;
    }
    if (local_40 != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(local_40);
    }
    if (local_28 != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(local_28);
    }
  }
  return;
}

