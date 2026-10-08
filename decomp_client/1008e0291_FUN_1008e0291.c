
undefined4 FUN_1008e0291(double param_1,undefined8 param_2,int *param_3,int param_4)

{
  int *piVar1;
  double val;
  int iVar2;
  xmlChar *pxVar3;
  undefined8 uVar4;
  xmlXPathObjectPtr obj;
  undefined4 local_58;
  int local_30;
  undefined4 local_2c;
  
  local_2c = 0;
  if ((param_3 == (int *)0x0) || ((*param_3 != 1 && (*param_3 != 9)))) {
    local_58 = 0;
  }
  else {
    piVar1 = *(int **)(param_3 + 2);
    if (piVar1 != (int *)0x0) {
      for (local_30 = 0; local_30 < *piVar1; local_30 = local_30 + 1) {
        pxVar3 = _xmlXPathCastNodeToString
                           (*(xmlNodePtr *)(*(long *)(piVar1 + 2) + (long)local_30 * 8));
        if (pxVar3 != (xmlChar *)0x0) {
          uVar4 = _xmlXPathNewString(pxVar3);
          _valuePush(param_2,uVar4);
          (*(code *)_xmlFree)(pxVar3);
          _xmlXPathNumberFunction(param_2,1);
          obj = (xmlXPathObjectPtr)_valuePop(param_2);
          val = obj->floatval;
          _xmlXPathFreeObject(obj);
          iVar2 = _xmlXPathIsNaN(val);
          if (iVar2 == 0) {
            if (param_4 == 0) {
              if ((val == param_1) && (!NAN(val) && !NAN(param_1))) {
                local_2c = 1;
                break;
              }
            }
            if ((param_4 != 0) && ((val != param_1 || (NAN(val) || NAN(param_1))))) {
              local_2c = 1;
              break;
            }
          }
          else if (param_4 != 0) {
            local_2c = 1;
          }
        }
      }
    }
    local_58 = local_2c;
  }
  return local_58;
}

