
int FUN_1008b79d6(xmlValidCtxtPtr param_1,xmlElementPtr param_2,long param_3)

{
  int iVar1;
  xmlValidState *pxVar2;
  xmlRegExecCtxtPtr pxVar3;
  
  if ((param_1->vstateMax == 0) || (param_1->vstateTab == (xmlValidState *)0x0)) {
    param_1->vstateMax = 10;
    pxVar2 = (xmlValidState *)(*(code *)_xmlMalloc)((long)param_1->vstateMax * 0x18);
    param_1->vstateTab = pxVar2;
    if (param_1->vstateTab == (xmlValidState *)0x0) {
      FUN_1008b7324(param_1,"malloc failed");
      return -1;
    }
  }
  if (param_1->vstateMax <= param_1->vstateNr) {
    pxVar2 = (xmlValidState *)
             (*(code *)_xmlRealloc)(param_1->vstateTab,(long)param_1->vstateMax * 0x30);
    if (pxVar2 == (xmlValidState *)0x0) {
      FUN_1008b7324(param_1,"realloc failed");
      return -1;
    }
    param_1->vstateMax = param_1->vstateMax * 2;
    param_1->vstateTab = pxVar2;
  }
  param_1->vstate = param_1->vstateTab + (long)param_1->vstateNr * 0x18;
  *(xmlElementPtr *)(param_1->vstateTab + (long)param_1->vstateNr * 0x18) = param_2;
  *(long *)(param_1->vstateTab + (long)param_1->vstateNr * 0x18 + 8) = param_3;
  if ((param_2 != (xmlElementPtr)0x0) && (param_2->etype == XML_ELEMENT_TYPE_ELEMENT)) {
    if (param_2->contModel == (xmlRegexpPtr)0x0) {
      _xmlValidBuildContentModel(param_1,param_2);
    }
    if (param_2->contModel == (xmlRegexpPtr)0x0) {
      *(undefined8 *)(param_1->vstateTab + (long)param_1->vstateNr * 0x18 + 0x10) = 0;
      FUN_1008b763a(param_1,param_2,1,"Failed to build content model regexp for %s\n",
                    *(undefined8 *)(param_3 + 0x10),0,0);
    }
    else {
      pxVar2 = param_1->vstateTab;
      iVar1 = param_1->vstateNr;
      pxVar3 = _xmlRegNewExecCtxt(param_2->contModel,(xmlRegExecCallbacks)0x0,(void *)0x0);
      *(xmlRegExecCtxtPtr *)(pxVar2 + (long)iVar1 * 0x18 + 0x10) = pxVar3;
    }
  }
  iVar1 = param_1->vstateNr;
  param_1->vstateNr = iVar1 + 1;
  return iVar1;
}

