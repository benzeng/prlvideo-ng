
int _xmlValidatePopElement(xmlValidCtxtPtr ctxt,xmlDocPtr doc,xmlNodePtr elem,xmlChar *qname)

{
  xmlValidState *pxVar1;
  int iVar2;
  int local_4c;
  int local_1c;
  
  local_1c = 1;
  if (ctxt == (xmlValidCtxtPtr)0x0) {
    local_4c = 0;
  }
  else {
    if ((0 < ctxt->vstateNr) && (ctxt->vstate != (xmlValidState *)0x0)) {
      pxVar1 = ctxt->vstate;
      if ((*(long *)pxVar1 != 0) &&
         ((*(int *)(*(long *)pxVar1 + 0x48) == 4 && (*(long *)(pxVar1 + 0x10) != 0)))) {
        iVar2 = _xmlRegExecPushString
                          (*(xmlRegExecCtxtPtr *)(pxVar1 + 0x10),(xmlChar *)0x0,(void *)0x0);
        if (iVar2 == 0) {
          FUN_100183d12(ctxt,*(long *)(pxVar1 + 8),0x1f8,
                        "Element %s content does not follow the DTD, Expecting more child\n",
                        *(undefined8 *)(*(long *)(pxVar1 + 8) + 0x10),0,0);
          local_1c = 0;
        }
        else {
          local_1c = 1;
        }
      }
      FUN_100184341(ctxt);
    }
    local_4c = local_1c;
  }
  return local_4c;
}

