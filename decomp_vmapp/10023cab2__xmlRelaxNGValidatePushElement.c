
int _xmlRelaxNGValidatePushElement(xmlRelaxNGValidCtxtPtr ctxt,xmlDocPtr doc,xmlNodePtr elem)

{
  long lVar1;
  xmlRegExecCtxtPtr pxVar2;
  int local_2c;
  
  if ((ctxt == (xmlRelaxNGValidCtxtPtr)0x0) || (elem == (xmlNodePtr)0x0)) {
    return -1;
  }
  if (*(long *)(ctxt + 0x88) == 0) {
    if (*(long *)(ctxt + 0x28) == 0) {
      FUN_100230bfa(ctxt,0x22,0,0,0);
      return -1;
    }
    lVar1 = *(long *)(*(long *)(ctxt + 0x28) + 8);
    if ((lVar1 == 0) || (*(long *)(lVar1 + 0x18) == 0)) {
      FUN_100230bfa(ctxt,0x22,0,0,0);
      return -1;
    }
    lVar1 = *(long *)(lVar1 + 0x18);
    if (*(long *)(lVar1 + 0x68) == 0) {
      *(long *)(ctxt + 0xb0) = lVar1;
      return 0;
    }
    pxVar2 = _xmlRegNewExecCtxt(*(xmlRegexpPtr *)(lVar1 + 0x68),FUN_10023c5f8,ctxt);
    if (pxVar2 == (xmlRegExecCtxtPtr)0x0) {
      return -1;
    }
    FUN_10023c3ad(ctxt,pxVar2);
  }
  *(xmlNodePtr *)(ctxt + 0xa8) = elem;
  *(undefined4 *)(ctxt + 0xa0) = 0;
  if (elem->ns == (xmlNs *)0x0) {
    local_2c = _xmlRegExecPushString(*(xmlRegExecCtxtPtr *)(ctxt + 0x88),elem->name,ctxt);
  }
  else {
    local_2c = _xmlRegExecPushString2
                         (*(xmlRegExecCtxtPtr *)(ctxt + 0x88),elem->name,elem->ns->href,ctxt);
  }
  if (local_2c < 0) {
    FUN_100230bfa(ctxt,0x26,elem->name,0,0);
  }
  else if (*(int *)(ctxt + 0xa0) == 0) {
    local_2c = 0;
  }
  else if (*(int *)(ctxt + 0xa0) < 0) {
    local_2c = -1;
  }
  else {
    local_2c = 1;
  }
  return local_2c;
}

