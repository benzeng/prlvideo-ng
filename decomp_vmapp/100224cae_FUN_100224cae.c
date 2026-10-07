
void FUN_100224cae(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  xmlChar *pxVar4;
  xmlNodePtr pxVar5;
  int local_1c;
  
  pxVar5 = *(xmlNodePtr *)(param_1 + 0x70);
  if (((*(int *)(param_1 + 0x10) == 1) && (*(long *)(param_1 + 0x20) != 0)) &&
     (*(int *)(*(long *)(param_1 + 0x20) + 0x9c) == 1)) {
    if ((pxVar5->ns == (xmlNs *)0x0) || (pxVar5->ns->prefix == (xmlChar *)0x0)) {
      lVar2 = *(long *)(param_1 + 0x20);
      uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0x98);
      uVar3 = _xmlValidatePushElement
                        ((xmlValidCtxtPtr)(*(long *)(param_1 + 0x20) + 0xa0),
                         *(xmlDocPtr *)(*(long *)(param_1 + 0x20) + 0x10),pxVar5,pxVar5->name);
      *(uint *)(lVar2 + 0x98) = uVar3 & uVar1;
    }
    else {
      pxVar4 = _xmlStrdup(pxVar5->ns->prefix);
      pxVar4 = _xmlStrcat(pxVar4,(xmlChar *)":");
      pxVar4 = _xmlStrcat(pxVar4,pxVar5->name);
      lVar2 = *(long *)(param_1 + 0x20);
      uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0x98);
      uVar3 = _xmlValidatePushElement
                        ((xmlValidCtxtPtr)(*(long *)(param_1 + 0x20) + 0xa0),
                         *(xmlDocPtr *)(*(long *)(param_1 + 0x20) + 0x10),pxVar5,pxVar4);
      *(uint *)(lVar2 + 0x98) = uVar3 & uVar1;
      if (pxVar4 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(pxVar4);
      }
    }
  }
  if (((*(int *)(param_1 + 0x10) == 2) && (*(long *)(param_1 + 0xd8) != 0)) &&
     (*(long *)(param_1 + 0xe8) == 0)) {
    local_1c = _xmlRelaxNGValidatePushElement
                         (*(xmlRelaxNGValidCtxtPtr *)(param_1 + 0xd8),
                          *(xmlDocPtr *)(*(long *)(param_1 + 0x20) + 0x10),pxVar5);
    if (local_1c == 0) {
      pxVar5 = (xmlNodePtr)_xmlTextReaderExpand(param_1);
      if (pxVar5 == (xmlNodePtr)0x0) {
        _puts("Expand failed !");
        local_1c = -1;
      }
      else {
        local_1c = _xmlRelaxNGValidateFullElement
                             (*(xmlRelaxNGValidCtxtPtr *)(param_1 + 0xd8),
                              *(xmlDocPtr *)(*(long *)(param_1 + 0x20) + 0x10),pxVar5);
        *(xmlNodePtr *)(param_1 + 0xe8) = pxVar5;
      }
    }
    if (local_1c != 1) {
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
    }
  }
  return;
}

