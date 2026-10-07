
void _xmlXPtrRangeToFunction(undefined8 *param_1,int param_2)

{
  xmlNodeSetPtr pxVar1;
  xmlXPathObjectPtr obj;
  undefined8 uVar2;
  long lVar3;
  xmlXPathObjectPtr pxVar4;
  long lVar5;
  undefined8 uVar6;
  int local_c;
  
  if ((param_1 != (undefined8 *)0x0) && (param_1 != (undefined8 *)0x0)) {
    if (param_2 == 1) {
      if ((param_1[4] == 0) || (*(int *)param_1[4] != 1)) {
        _xmlXPathErr(param_1,0xb);
      }
      else {
        obj = (xmlXPathObjectPtr)_valuePop(param_1);
        pxVar1 = obj->nodesetval;
        *(undefined8 *)(param_1[3] + 8) = 0;
        uVar6 = *param_1;
        uVar2 = _xmlXPtrLocationSetCreate(0);
        for (local_c = 0; local_c < pxVar1->nodeNr; local_c = local_c + 1) {
          *param_1 = uVar6;
          *(xmlNodePtr *)(param_1[3] + 8) = pxVar1->nodeTab[local_c];
          lVar3 = _xmlXPathNewNodeSet(*(undefined8 *)(param_1[3] + 8));
          _valuePush(param_1,lVar3);
          _xmlXPathEvalExpr(param_1);
          if (*(int *)(param_1 + 2) != 0) {
            return;
          }
          pxVar4 = (xmlXPathObjectPtr)_valuePop(param_1);
          lVar5 = _xmlXPtrNewRangeNodeObject(pxVar1->nodeTab[local_c],pxVar4);
          if (lVar5 != 0) {
            _xmlXPtrLocationSetAdd(uVar2,lVar5);
          }
          if (pxVar4 != (xmlXPathObjectPtr)0x0) {
            _xmlXPathFreeObject(pxVar4);
          }
          if (param_1[4] == lVar3) {
            pxVar4 = (xmlXPathObjectPtr)_valuePop(param_1);
            _xmlXPathFreeObject(pxVar4);
          }
          *(undefined8 *)(param_1[3] + 8) = 0;
        }
        _xmlXPathFreeObject(obj);
        *(undefined8 *)(param_1[3] + 8) = 0;
        *(undefined4 *)(param_1[3] + 0x68) = 0xffffffff;
        *(undefined4 *)(param_1[3] + 0x6c) = 0xffffffff;
        uVar6 = _xmlXPtrWrapLocationSet(uVar2);
        _valuePush(param_1,uVar6);
      }
    }
    else {
      _xmlXPathErr(param_1,0xc);
    }
  }
  return;
}

