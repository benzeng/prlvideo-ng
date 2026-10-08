
void FUN_1008f3715(long param_1,int param_2)

{
  xmlNodeSetPtr pxVar1;
  xmlXPathObjectPtr obj;
  undefined8 uVar2;
  xmlNodePtr pxVar3;
  
  if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 1)) {
    _xmlXPathErr(param_1,0xb);
  }
  else {
    obj = (xmlXPathObjectPtr)_valuePop(param_1);
    pxVar1 = obj->nodesetval;
    if ((param_2 < 1) || ((pxVar1 == (xmlNodeSetPtr)0x0 || (pxVar1->nodeNr != 1)))) {
      _xmlXPathFreeObject(obj);
      uVar2 = _xmlXPathNewNodeSet(0);
      _valuePush(param_1,uVar2);
    }
    else {
      pxVar3 = (xmlNodePtr)FUN_1008f2574(*pxVar1->nodeTab,param_2);
      if (pxVar3 == (xmlNodePtr)0x0) {
        _xmlXPathFreeObject(obj);
        uVar2 = _xmlXPathNewNodeSet(0);
        _valuePush(param_1,uVar2);
      }
      else {
        *pxVar1->nodeTab = pxVar3;
        _valuePush(param_1,obj);
      }
    }
  }
  return;
}

