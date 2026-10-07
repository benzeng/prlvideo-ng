
void FUN_100224fd8(long param_1)

{
  uint uVar1;
  xmlNodePtr elem;
  long lVar2;
  uint uVar3;
  int iVar4;
  xmlChar *pxVar5;
  
  elem = *(xmlNodePtr *)(param_1 + 0x70);
  if (((*(int *)(param_1 + 0x10) == 1) && (*(long *)(param_1 + 0x20) != 0)) &&
     (*(int *)(*(long *)(param_1 + 0x20) + 0x9c) == 1)) {
    if ((elem->ns == (xmlNs *)0x0) || (elem->ns->prefix == (xmlChar *)0x0)) {
      lVar2 = *(long *)(param_1 + 0x20);
      uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0x98);
      uVar3 = _xmlValidatePopElement
                        ((xmlValidCtxtPtr)(*(long *)(param_1 + 0x20) + 0xa0),
                         *(xmlDocPtr *)(*(long *)(param_1 + 0x20) + 0x10),elem,elem->name);
      *(uint *)(lVar2 + 0x98) = uVar3 & uVar1;
    }
    else {
      pxVar5 = _xmlStrdup(elem->ns->prefix);
      pxVar5 = _xmlStrcat(pxVar5,(xmlChar *)":");
      pxVar5 = _xmlStrcat(pxVar5,elem->name);
      lVar2 = *(long *)(param_1 + 0x20);
      uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0x98);
      uVar3 = _xmlValidatePopElement
                        ((xmlValidCtxtPtr)(*(long *)(param_1 + 0x20) + 0xa0),
                         *(xmlDocPtr *)(*(long *)(param_1 + 0x20) + 0x10),elem,pxVar5);
      *(uint *)(lVar2 + 0x98) = uVar3 & uVar1;
      if (pxVar5 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(pxVar5);
      }
    }
  }
  if ((*(int *)(param_1 + 0x10) == 2) && (*(long *)(param_1 + 0xd8) != 0)) {
    if (*(long *)(param_1 + 0xe8) == 0) {
      iVar4 = _xmlRelaxNGValidatePopElement
                        (*(xmlRelaxNGValidCtxtPtr *)(param_1 + 0xd8),
                         *(xmlDocPtr *)(*(long *)(param_1 + 0x20) + 0x10),elem);
      if (iVar4 != 1) {
        *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
      }
    }
    else if (*(xmlNodePtr *)(param_1 + 0xe8) == elem) {
      *(undefined8 *)(param_1 + 0xe8) = 0;
    }
  }
  return;
}

