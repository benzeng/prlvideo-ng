
undefined8 FUN_10093e056(undefined8 param_1,undefined8 *param_2,long param_3,int param_4)

{
  undefined4 uVar1;
  xmlChar *pxVar2;
  xmlChar *local_18;
  int local_10;
  int local_c;
  
  local_18 = (xmlChar *)0x0;
  pxVar2 = _xmlStrdup((xmlChar *)"[");
  *param_2 = pxVar2;
  for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 1) {
    pxVar2 = _xmlStrcat((xmlChar *)*param_2,(xmlChar *)"\'");
    *param_2 = pxVar2;
    uVar1 = FUN_10093c74a(**(undefined8 **)((long)local_10 * 8 + param_3));
    local_c = _xmlSchemaGetCanonValueWhtsp
                        (*(undefined8 *)(*(long *)((long)local_10 * 8 + param_3) + 8),&local_18,
                         uVar1);
    if (local_c == 0) {
      pxVar2 = _xmlStrcat((xmlChar *)*param_2,local_18);
      *param_2 = pxVar2;
    }
    else {
      FUN_10091c652(param_1,"xmlSchemaFormatIDCKeySequence","failed to compute a canonical value");
      pxVar2 = _xmlStrcat((xmlChar *)*param_2,(xmlChar *)"???");
      *param_2 = pxVar2;
    }
    if (local_10 < param_4 + -1) {
      pxVar2 = _xmlStrcat((xmlChar *)*param_2,(xmlChar *)"\', ");
      *param_2 = pxVar2;
    }
    else {
      pxVar2 = _xmlStrcat((xmlChar *)*param_2,(xmlChar *)"\'");
      *param_2 = pxVar2;
    }
    if (local_18 != (xmlChar *)0x0) {
      (*(code *)_xmlFree)(local_18);
      local_18 = (xmlChar *)0x0;
    }
  }
  pxVar2 = _xmlStrcat((xmlChar *)*param_2,(xmlChar *)"]");
  *param_2 = pxVar2;
  return *param_2;
}

