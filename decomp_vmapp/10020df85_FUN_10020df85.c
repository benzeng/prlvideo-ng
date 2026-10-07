
undefined4 FUN_10020df85(long param_1,xmlChar *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  xmlChar *pxVar2;
  long lVar3;
  undefined4 local_4c;
  xmlChar *local_20;
  int local_14;
  xmlChar *local_10;
  
  local_14 = 0;
  if ((param_3 == (long *)0x0) || (param_4 == (undefined8 *)0x0)) {
    local_4c = 0xffffffff;
  }
  else {
    *param_3 = 0;
    *param_4 = 0;
    local_14 = _xmlValidateQName(param_2,1);
    if (local_14 == -1) {
      local_4c = 0xffffffff;
    }
    else if (local_14 < 1) {
      local_10 = (xmlChar *)0x0;
      local_10 = _xmlSplitQName2(param_2,&local_20);
      if (local_10 == (xmlChar *)0x0) {
        pxVar2 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x100),param_2,-1);
        *param_4 = pxVar2;
      }
      else {
        pxVar2 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x100),local_10,-1);
        *param_4 = pxVar2;
        (*(code *)_xmlFree)(local_10);
      }
      lVar3 = FUN_10020947d(param_1,local_20);
      *param_3 = lVar3;
      if ((local_20 != (xmlChar *)0x0) && ((*(code *)_xmlFree)(local_20), *param_3 == 0)) {
        uVar1 = _xmlSchemaGetBuiltInType(0x15);
        FUN_1001e8d5c(param_1,0x720,0,uVar1,
                      "The QName value \'%s\' has no corresponding namespace declaration in scope",
                      param_2,0);
        return 2;
      }
      local_4c = 0;
    }
    else {
      uVar1 = _xmlSchemaGetBuiltInType(0x15);
      FUN_1001e9140(param_1,0x720,0,param_2,uVar1,1);
      local_4c = 1;
    }
  }
  return local_4c;
}

