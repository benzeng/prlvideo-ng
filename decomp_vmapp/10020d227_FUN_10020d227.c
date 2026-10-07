
undefined4 FUN_10020d227(undefined8 param_1,xmlChar *param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  xmlChar *pxVar2;
  undefined4 local_48;
  xmlChar *local_28;
  int local_1c;
  xmlChar *local_18;
  xmlChar *local_10;
  
  local_28 = (xmlChar *)0x0;
  local_1c = _xmlValidateQName(param_2,1);
  if (local_1c == 0) {
    local_10 = _xmlSplitQName2(param_2,&local_28);
    if (local_10 == (xmlChar *)0x0) {
      local_10 = _xmlStrdup(param_2);
    }
    local_18 = (xmlChar *)FUN_10020947d(param_1,local_28);
    if ((local_28 != (xmlChar *)0x0) && ((*(code *)_xmlFree)(local_28), local_18 == (xmlChar *)0x0))
    {
      local_1c = 0x720;
      uVar1 = _xmlSchemaGetBuiltInType(0x15);
      FUN_1001e8d5c(param_1,local_1c,0,uVar1,
                    "The QName value \'%s\' has no corresponding namespace declaration in scope",
                    param_2,0);
      if (local_10 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_10);
      }
      return local_1c;
    }
    if ((param_4 == 0) || (param_3 == (undefined8 *)0x0)) {
      (*(code *)_xmlFree)(local_10);
    }
    else if (local_18 == (xmlChar *)0x0) {
      uVar1 = _xmlSchemaNewQNameValue(0,local_10);
      *param_3 = uVar1;
    }
    else {
      pxVar2 = _xmlStrdup(local_18);
      uVar1 = _xmlSchemaNewQNameValue(pxVar2,local_10);
      *param_3 = uVar1;
    }
    local_48 = 0;
  }
  else if (local_1c == -1) {
    FUN_1001e8d2a(param_1,"xmlSchemaValidateQName","calling xmlValidateQName()");
    local_48 = 0xffffffff;
  }
  else {
    local_48 = 0x720;
  }
  return local_48;
}

