
void FUN_1008f8e4e(long param_1,undefined8 *param_2)

{
  long lVar1;
  xmlDocPtr doc;
  int iVar2;
  xmlEntityPtr pxVar3;
  xmlChar *pxVar4;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  lVar1 = param_2[1];
  doc = (xmlDocPtr)*param_2;
  if (lVar1 == 0) {
    return;
  }
  if (doc == (xmlDocPtr)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0x5c) - 4U < 3) {
    return;
  }
  pxVar3 = _xmlAddDocEntity(doc,*(xmlChar **)(param_1 + 0x10),*(int *)(param_1 + 0x5c),
                            *(xmlChar **)(param_1 + 0x60),*(xmlChar **)(param_1 + 0x68),
                            *(xmlChar **)(param_1 + 0x50));
  if (pxVar3 != (xmlEntityPtr)0x0) {
    if (*(long *)(param_1 + 0x78) == 0) {
      return;
    }
    pxVar4 = _xmlStrdup(*(xmlChar **)(param_1 + 0x78));
    pxVar3->URI = pxVar4;
    return;
  }
  pxVar3 = _xmlGetDocEntity(doc,*(xmlChar **)(param_1 + 0x10));
  if (pxVar3 == (xmlEntityPtr)0x0) {
    return;
  }
  if (*(xmlEntityType *)(param_1 + 0x5c) == pxVar3->etype) {
    if ((*(long *)(param_1 + 0x68) == 0) || (pxVar3->SystemID == (xmlChar *)0x0)) {
      if ((*(long *)(param_1 + 0x60) == 0) || (pxVar3->ExternalID == (xmlChar *)0x0)) {
        if ((*(long *)(param_1 + 0x50) == 0) || (pxVar3->content == (xmlChar *)0x0))
        goto LAB_1008f9005;
        iVar2 = _xmlStrEqual(*(xmlChar **)(param_1 + 0x50),pxVar3->content);
      }
      else {
        iVar2 = _xmlStrEqual(*(xmlChar **)(param_1 + 0x60),pxVar3->ExternalID);
      }
    }
    else {
      iVar2 = _xmlStrEqual(*(xmlChar **)(param_1 + 0x68),pxVar3->SystemID);
    }
    if (iVar2 != 0) {
      return;
    }
  }
LAB_1008f9005:
  if ((6 < *(uint *)(param_1 + 0x5c)) ||
     ((1L << ((byte)*(uint *)(param_1 + 0x5c) & 0x3f) & 0x76U) == 0)) {
    FUN_1008f6fe0(lVar1,param_1,0x642,"mismatch in redefinition of entity %s\n",
                  *(undefined8 *)(param_1 + 0x10));
  }
  return;
}

