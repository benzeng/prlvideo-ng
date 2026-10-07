
void _xmlSAX2StartElementNs
               (void *ctx,xmlChar *localname,xmlChar *prefix,xmlChar *URI,int nb_namespaces,
               xmlChar **namespaces,int nb_attributes,int nb_defaulted,xmlChar **attributes)

{
  uint uVar1;
  xmlNodePtr cur;
  xmlChar *href;
  int iVar2;
  uint uVar3;
  xmlChar *pxVar4;
  xmlRegisterNodeFunc *ppxVar5;
  xmlNsPtr pxVar6;
  xmlNodePtr local_58;
  xmlNsPtr local_48;
  int local_24;
  int local_20;
  
  local_48 = (xmlNsPtr)0x0;
  if (ctx != (void *)0x0) {
    cur = *(xmlNodePtr *)((long)ctx + 0x50);
    if (((*(int *)((long)ctx + 0x9c) != 0) && (*(long *)(*(long *)((long)ctx + 0x10) + 0x58) == 0))
       && ((*(long *)(*(long *)((long)ctx + 0x10) + 0x50) == 0 ||
           ((((*(long *)(*(long *)(*(long *)((long)ctx + 0x10) + 0x50) + 0x48) == 0 &&
              (*(long *)(*(long *)(*(long *)((long)ctx + 0x10) + 0x50) + 0x50) == 0)) &&
             (*(long *)(*(long *)(*(long *)((long)ctx + 0x10) + 0x50) + 0x58) == 0)) &&
            (*(long *)(*(long *)(*(long *)((long)ctx + 0x10) + 0x50) + 0x60) == 0)))))) {
      FUN_100244133(ctx,0x5e,"Validation failed: no DTD found !",0,0);
      *(undefined4 *)((long)ctx + 0x9c) = 0;
    }
    if (*(long *)((long)ctx + 0x240) == 0) {
      if (*(int *)((long)ctx + 0x238) == 0) {
        local_58 = _xmlNewDocNode(*(xmlDocPtr *)((long)ctx + 0x10),(xmlNsPtr)0x0,localname,
                                  (xmlChar *)0x0);
      }
      else {
        local_58 = _xmlNewDocNodeEatName
                             (*(xmlDocPtr *)((long)ctx + 0x10),(xmlNsPtr)0x0,localname,
                              (xmlChar *)0x0);
      }
      if (local_58 == (xmlNodePtr)0x0) {
        FUN_1002440a9(ctx,"xmlSAX2StartElementNs");
        return;
      }
    }
    else {
      local_58 = *(xmlNodePtr *)((long)ctx + 0x240);
      *(_xmlNode **)((long)ctx + 0x240) = local_58->next;
      *(int *)((long)ctx + 0x23c) = *(int *)((long)ctx + 0x23c) + -1;
      _memset(local_58,0,0x78);
      local_58->type = XML_ELEMENT_NODE;
      if (*(int *)((long)ctx + 0x238) == 0) {
        pxVar4 = _xmlStrdup(localname);
        local_58->name = pxVar4;
        if (local_58->name == (xmlChar *)0x0) {
          FUN_1002440a9(ctx,"xmlSAX2StartElementNs");
          return;
        }
      }
      else {
        local_58->name = localname;
      }
      if ((___xmlRegisterCallbacks != 0) &&
         (ppxVar5 = ___xmlRegisterNodeDefaultValue(), *ppxVar5 != (xmlRegisterNodeFunc)0x0)) {
        ppxVar5 = ___xmlRegisterNodeDefaultValue();
        (**ppxVar5)(local_58);
      }
    }
    if ((*(int *)((long)ctx + 0x1b4) != 0) && (*(long *)((long)ctx + 0x38) != 0)) {
      if (*(int *)(*(long *)((long)ctx + 0x38) + 0x34) < 0xffff) {
        local_58->line = (ushort)*(undefined4 *)(*(long *)((long)ctx + 0x38) + 0x34);
      }
      else {
        local_58->line = 0xffff;
      }
    }
    if ((*(long *)(*(long *)((long)ctx + 0x10) + 0x18) == 0) || (cur == (xmlNodePtr)0x0)) {
      _xmlAddChild(*(xmlNodePtr *)((long)ctx + 0x10),local_58);
    }
    local_24 = 0;
    for (local_20 = 0; local_20 < nb_namespaces; local_20 = local_20 + 1) {
      pxVar4 = namespaces[local_24];
      href = namespaces[local_24 + 1];
      local_24 = local_24 + 2;
      pxVar6 = _xmlNewNs((xmlNodePtr)0x0,href,pxVar4);
      if (pxVar6 == (xmlNsPtr)0x0) {
        FUN_1002440a9(ctx,"xmlSAX2StartElementNs");
        return;
      }
      if (local_48 == (xmlNsPtr)0x0) {
        local_58->nsDef = pxVar6;
      }
      else {
        local_48->next = pxVar6;
      }
      if ((URI != (xmlChar *)0x0) && (prefix == pxVar4)) {
        local_58->ns = pxVar6;
      }
      if ((((*(int *)((long)ctx + 0x34) == 0) && (*(int *)((long)ctx + 0x9c) != 0)) &&
          (*(int *)((long)ctx + 0x18) != 0)) &&
         ((*(long *)((long)ctx + 0x10) != 0 && (*(long *)(*(long *)((long)ctx + 0x10) + 0x50) != 0))
         )) {
        uVar1 = *(uint *)((long)ctx + 0x98);
        uVar3 = _xmlValidateOneNamespace
                          ((xmlValidCtxtPtr)((long)ctx + 0xa0),*(xmlDocPtr *)((long)ctx + 0x10),
                           local_58,prefix,pxVar6,href);
        *(uint *)((long)ctx + 0x98) = uVar1 & uVar3;
      }
      local_48 = pxVar6;
    }
    *(undefined4 *)((long)ctx + 0x1a0) = 0xffffffff;
    _nodePush(ctx,local_58);
    if (cur != (xmlNodePtr)0x0) {
      if (cur->type == XML_ELEMENT_NODE) {
        _xmlAddChild(cur,local_58);
      }
      else {
        _xmlAddSibling(cur,local_58);
      }
    }
    if ((nb_defaulted != 0) && (((*(uint *)((long)ctx + 0x1b0) >> 2 ^ 1) & 1) != 0)) {
      nb_attributes = nb_attributes - nb_defaulted;
    }
    if ((URI != (xmlChar *)0x0) && (local_58->ns == (xmlNs *)0x0)) {
      pxVar6 = _xmlSearchNs(*(xmlDocPtr *)((long)ctx + 0x10),cur,prefix);
      local_58->ns = pxVar6;
      if (local_58->ns == (xmlNs *)0x0) {
        pxVar6 = _xmlNewNs(local_58,(xmlChar *)0x0,prefix);
        if (pxVar6 == (xmlNsPtr)0x0) {
          FUN_1002440a9(ctx,"xmlSAX2StartElementNs");
          return;
        }
        if ((*(long *)ctx != 0) && (*(long *)(*(long *)ctx + 0xa8) != 0)) {
          (**(code **)(*(long *)ctx + 0xa8))
                    (*(undefined8 *)((long)ctx + 8),"Namespace prefix %s was not found\n",prefix);
        }
      }
    }
    if (0 < nb_attributes) {
      local_20 = 0;
      for (local_24 = 0; local_24 < nb_attributes; local_24 = local_24 + 1) {
        FUN_100247b0c(ctx,attributes[local_20],attributes[(long)local_20 + 1],
                      attributes[(long)local_20 + 3],attributes[(long)local_20 + 4]);
        local_20 = local_20 + 5;
      }
    }
    if ((*(int *)((long)ctx + 0x9c) != 0) && (*(int *)((long)ctx + 0xd0) == -0x5432edcc)) {
      iVar2 = _xmlValidateDtdFinal
                        ((xmlValidCtxtPtr)((long)ctx + 0xa0),*(xmlDocPtr *)((long)ctx + 0x10));
      if (iVar2 < 1) {
        *(undefined4 *)((long)ctx + 0x98) = 0;
      }
      if (iVar2 < 0) {
        *(undefined4 *)((long)ctx + 0x18) = 0;
      }
      uVar1 = *(uint *)((long)ctx + 0x98);
      uVar3 = _xmlValidateRoot((xmlValidCtxtPtr)((long)ctx + 0xa0),*(xmlDocPtr *)((long)ctx + 0x10))
      ;
      *(uint *)((long)ctx + 0x98) = uVar1 & uVar3;
      *(undefined4 *)((long)ctx + 0xd0) = 0xabcd1235;
    }
  }
  return;
}

