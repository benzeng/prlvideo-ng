
void _xmlXPtrEvalRangePredicate(long *param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  xmlXPathObjectPtr obj;
  xmlXPathObjectPtr pxVar4;
  undefined8 uVar5;
  long lVar6;
  xmlXPathObjectPtr pxVar7;
  int local_c;
  
  if (param_1 != (long *)0x0) {
    while ((*(char *)*param_1 == ' ' ||
           (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r')))))
    {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
    }
    if (*(char *)*param_1 == '[') {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
      while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb))))
             || (*(char *)*param_1 == '\r'))) {
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
      }
      if ((param_1[4] == 0) || (*(int *)param_1[4] != 7)) {
        _xmlXPathErr(param_1,0xb);
      }
      else {
        obj = (xmlXPathObjectPtr)_valuePop(param_1);
        piVar1 = obj->user;
        *(undefined8 *)(param_1[3] + 8) = 0;
        if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) {
          *(undefined4 *)(param_1[3] + 0x68) = 0;
          *(undefined4 *)(param_1[3] + 0x6c) = 0;
          _xmlXPathEvalExpr(param_1);
          pxVar4 = (xmlXPathObjectPtr)_valuePop(param_1);
          if (pxVar4 != (xmlXPathObjectPtr)0x0) {
            _xmlXPathFreeObject(pxVar4);
          }
          _valuePush(param_1,obj);
          if ((int)param_1[2] != 0) {
            return;
          }
        }
        else {
          lVar2 = *param_1;
          uVar5 = _xmlXPtrLocationSetCreate(0);
          for (local_c = 0; local_c < *piVar1; local_c = local_c + 1) {
            *param_1 = lVar2;
            *(undefined8 *)(param_1[3] + 8) =
                 *(undefined8 *)(*(long *)(*(long *)(piVar1 + 2) + (long)local_c * 8) + 0x28);
            lVar6 = _xmlXPathNewNodeSet(*(undefined8 *)(param_1[3] + 8));
            _valuePush(param_1,lVar6);
            *(int *)(param_1[3] + 0x68) = *piVar1;
            *(int *)(param_1[3] + 0x6c) = local_c + 1;
            _xmlXPathEvalExpr(param_1);
            if ((int)param_1[2] != 0) {
              return;
            }
            pxVar4 = (xmlXPathObjectPtr)_valuePop(param_1);
            iVar3 = _xmlXPathEvaluatePredicateResult(param_1,pxVar4);
            if (iVar3 != 0) {
              pxVar7 = _xmlXPathObjectCopy(*(xmlXPathObjectPtr *)
                                            (*(long *)(piVar1 + 2) + (long)local_c * 8));
              _xmlXPtrLocationSetAdd(uVar5,pxVar7);
            }
            if (pxVar4 != (xmlXPathObjectPtr)0x0) {
              _xmlXPathFreeObject(pxVar4);
            }
            if (param_1[4] == lVar6) {
              pxVar4 = (xmlXPathObjectPtr)_valuePop(param_1);
              _xmlXPathFreeObject(pxVar4);
            }
            *(undefined8 *)(param_1[3] + 8) = 0;
          }
          _xmlXPathFreeObject(obj);
          *(undefined8 *)(param_1[3] + 8) = 0;
          *(undefined4 *)(param_1[3] + 0x68) = 0xffffffff;
          *(undefined4 *)(param_1[3] + 0x6c) = 0xffffffff;
          uVar5 = _xmlXPtrWrapLocationSet(uVar5);
          _valuePush(param_1,uVar5);
        }
        if (*(char *)*param_1 == ']') {
          if (*(char *)*param_1 != '\0') {
            *param_1 = *param_1 + 1;
          }
          while ((*(char *)*param_1 == ' ' ||
                 (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) ||
                  (*(char *)*param_1 == '\r'))))) {
            if (*(char *)*param_1 != '\0') {
              *param_1 = *param_1 + 1;
            }
          }
        }
        else {
          _xmlXPathErr(param_1,6);
        }
      }
    }
    else {
      _xmlXPathErr(param_1,6);
    }
  }
  return;
}

