
undefined4 _xmlSchemaGetCanonValueWhtsp(int *param_1,long *param_2,uint param_3)

{
  undefined4 uVar1;
  xmlChar *pxVar2;
  long lVar3;
  undefined4 local_24;
  
  if ((param_2 == (long *)0x0) || (param_1 == (int *)0x0)) {
    local_24 = 0xffffffff;
  }
  else if ((param_3 == 0) || (3 < param_3)) {
    local_24 = 0xffffffff;
  }
  else {
    *param_2 = 0;
    if (*param_1 == 1) {
      if (*(long *)(param_1 + 4) == 0) {
        pxVar2 = _xmlStrdup((xmlChar *)"");
        *param_2 = (long)pxVar2;
      }
      else if (param_3 == 3) {
        lVar3 = _xmlSchemaCollapseString(*(undefined8 *)(param_1 + 4));
        *param_2 = lVar3;
      }
      else if (param_3 == 2) {
        lVar3 = _xmlSchemaWhiteSpaceReplace(*(undefined8 *)(param_1 + 4));
        *param_2 = lVar3;
      }
      if (*param_2 == 0) {
        pxVar2 = _xmlStrdup(*(xmlChar **)(param_1 + 4));
        *param_2 = (long)pxVar2;
      }
    }
    else {
      if (*param_1 != 2) {
        uVar1 = _xmlSchemaGetCanonValue(param_1,param_2);
        return uVar1;
      }
      if (*(long *)(param_1 + 4) == 0) {
        pxVar2 = _xmlStrdup((xmlChar *)"");
        *param_2 = (long)pxVar2;
      }
      else {
        if (param_3 == 3) {
          lVar3 = _xmlSchemaCollapseString(*(undefined8 *)(param_1 + 4));
          *param_2 = lVar3;
        }
        else {
          lVar3 = _xmlSchemaWhiteSpaceReplace(*(undefined8 *)(param_1 + 4));
          *param_2 = lVar3;
        }
        if (*param_2 == 0) {
          pxVar2 = _xmlStrdup(*(xmlChar **)(param_1 + 4));
          *param_2 = (long)pxVar2;
        }
      }
    }
    local_24 = 0;
  }
  return local_24;
}

