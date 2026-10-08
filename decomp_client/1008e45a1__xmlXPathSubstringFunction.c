
void _xmlXPathSubstringFunction(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  xmlXPathObjectPtr pxVar3;
  undefined8 uVar4;
  double local_30;
  double local_28;
  int local_1c;
  int local_18;
  xmlChar *local_10;
  
  local_30 = 0.0;
  if (param_2 < 2) {
    if (param_1 == 0) {
      return;
    }
    if (param_2 != 2) {
      _xmlXPathErr(param_1,0xc);
      return;
    }
  }
  if (3 < param_2) {
    if (param_1 == 0) {
      return;
    }
    if (param_2 != 3) {
      _xmlXPathErr(param_1,0xc);
      return;
    }
  }
  if (param_2 == 3) {
    if ((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) != 3)) {
      _xmlXPathNumberFunction(param_1,1);
    }
    if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 3)) {
      _xmlXPathErr(param_1,0xb);
      return;
    }
    pxVar3 = (xmlXPathObjectPtr)_valuePop(param_1);
    local_30 = pxVar3->floatval;
    _xmlXPathFreeObject(pxVar3);
  }
  if ((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) != 3)) {
    _xmlXPathNumberFunction(param_1,1);
  }
  if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 3)) {
    _xmlXPathErr(param_1,0xb);
  }
  else {
    pxVar3 = (xmlXPathObjectPtr)_valuePop(param_1);
    local_28 = pxVar3->floatval;
    _xmlXPathFreeObject(pxVar3);
    if ((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) != 4)) {
      _xmlXPathStringFunction(param_1,1);
    }
    if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 4)) {
      _xmlXPathErr(param_1,0xb);
    }
    else {
      pxVar3 = (xmlXPathObjectPtr)_valuePop(param_1);
      iVar1 = _xmlUTF8Strlen(pxVar3->stringval);
      if ((param_2 != 3) && (local_30 = (double)iVar1, local_28 < DAT_100e11050)) {
        local_28 = 1.0;
      }
      iVar2 = _xmlXPathIsNaN(local_28 + local_30);
      if ((iVar2 == 0) && (iVar2 = _xmlXPathIsInf(local_28), iVar2 == 0)) {
        local_1c = (int)local_28;
        if ((double)local_1c + DAT_100e110f0 <= local_28) {
          local_1c = local_1c + 1;
        }
        iVar2 = _xmlXPathIsInf(local_30);
        local_18 = iVar1;
        if (iVar2 == 1) {
          if (local_1c < 1) {
            local_1c = 1;
          }
        }
        else {
          iVar2 = _xmlXPathIsInf(local_30);
          if ((iVar2 == -1) || (local_30 < 0.0)) {
            local_18 = 0;
          }
          else {
            local_18 = (int)local_30;
            if ((double)local_18 + DAT_100e110f0 <= local_30) {
              local_18 = local_18 + 1;
            }
          }
        }
        local_1c = local_1c + -1;
        local_18 = local_18 + local_1c;
        if (local_1c < 0) {
          local_1c = 0;
        }
        if (iVar1 < local_18) {
          local_18 = iVar1;
        }
        local_10 = _xmlUTF8Strsub(pxVar3->stringval,local_1c,local_18 - local_1c);
      }
      else {
        local_10 = (xmlChar *)0x0;
      }
      if (local_10 == (xmlChar *)0x0) {
        uVar4 = _xmlXPathNewCString("");
        _valuePush(param_1,uVar4);
      }
      else {
        uVar4 = _xmlXPathNewString(local_10);
        _valuePush(param_1,uVar4);
        (*(code *)_xmlFree)(local_10);
      }
      _xmlXPathFreeObject(pxVar3);
    }
  }
  return;
}

