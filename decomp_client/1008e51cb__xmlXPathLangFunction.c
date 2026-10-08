
void _xmlXPathLangFunction(long param_1,int param_2)

{
  xmlChar *pxVar1;
  int iVar2;
  int iVar3;
  xmlXPathObjectPtr obj;
  xmlChar *pxVar4;
  undefined8 uVar5;
  undefined4 local_20;
  int local_1c;
  
  local_20 = 0;
  if (param_1 != 0) {
    if (param_2 == 1) {
      if ((*(long *)(param_1 + 0x20) != 0) && (**(int **)(param_1 + 0x20) != 4)) {
        _xmlXPathStringFunction(param_1,1);
      }
      if ((*(long *)(param_1 + 0x20) == 0) || (**(int **)(param_1 + 0x20) != 4)) {
        _xmlXPathErr(param_1,0xb);
      }
      else {
        obj = (xmlXPathObjectPtr)_valuePop(param_1);
        pxVar1 = obj->stringval;
        pxVar4 = _xmlNodeGetLang(*(xmlNodePtr *)(*(long *)(param_1 + 0x18) + 8));
        if ((pxVar4 != (xmlChar *)0x0) && (pxVar1 != (xmlChar *)0x0)) {
          for (local_1c = 0; pxVar1[local_1c] != '\0'; local_1c = local_1c + 1) {
            iVar2 = FUN_1008e535a(pxVar1[local_1c]);
            iVar3 = FUN_1008e535a(pxVar4[local_1c]);
            if (iVar2 != iVar3) goto LAB_1008e531f;
          }
          if ((pxVar4[local_1c] == '\0') || (pxVar4[local_1c] == '-')) {
            local_20 = 1;
          }
        }
LAB_1008e531f:
        if (pxVar4 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(pxVar4);
        }
        _xmlXPathFreeObject(obj);
        uVar5 = _xmlXPathNewBoolean(local_20);
        _valuePush(param_1,uVar5);
      }
    }
    else {
      _xmlXPathErr(param_1,0xc);
    }
  }
  return;
}

