
undefined4 FUN_1001e7209(long param_1,int param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  xmlChar *pxVar3;
  undefined4 local_44;
  long local_30;
  xmlChar *local_20;
  uint local_18;
  uint local_14;
  xmlChar *local_10;
  
  local_20 = (xmlChar *)0x0;
  if ((param_3 == (long *)0x0) || (param_1 == 0)) {
    local_44 = 0xffffffff;
  }
  else {
    lVar2 = _xmlSchemaValueGetNext(param_1);
    local_18 = (uint)(lVar2 != 0);
    *param_3 = 0;
    local_30 = param_1;
    do {
      local_10 = (xmlChar *)0x0;
      local_14 = _xmlSchemaGetValType(local_30);
      if ((local_14 < 0x2f) && ((1L << ((byte)local_14 & 0x3f) & 0x400000000006U) != 0)) {
        local_10 = (xmlChar *)_xmlSchemaValueGetAsString(local_30);
        if (local_10 != (xmlChar *)0x0) {
          if (param_2 == 3) {
            local_20 = (xmlChar *)_xmlSchemaCollapseString(local_10);
          }
          else if (param_2 == 2) {
            local_20 = (xmlChar *)_xmlSchemaWhiteSpaceReplace(local_10);
          }
          if (local_20 != (xmlChar *)0x0) {
            local_10 = local_20;
          }
        }
      }
      else {
        iVar1 = _xmlSchemaGetCanonValue(local_30,&local_20);
        if (iVar1 == -1) {
          if (local_20 != (xmlChar *)0x0) {
            (*(code *)_xmlFree)(local_20);
          }
          if (*param_3 != 0) {
            (*(code *)_xmlFree)(*param_3);
          }
          if (local_20 != (xmlChar *)0x0) {
            (*(code *)_xmlFree)(local_20);
          }
          return 0xffffffff;
        }
        local_10 = local_20;
      }
      if (*param_3 == 0) {
        if (local_10 == (xmlChar *)0x0) {
          if (local_18 == 0) {
            pxVar3 = _xmlStrdup((xmlChar *)"");
            *param_3 = (long)pxVar3;
          }
        }
        else {
          pxVar3 = _xmlStrdup(local_10);
          *param_3 = (long)pxVar3;
        }
      }
      else if (local_10 != (xmlChar *)0x0) {
        pxVar3 = _xmlStrcat((xmlChar *)*param_3,(xmlChar *)" ");
        *param_3 = (long)pxVar3;
        pxVar3 = _xmlStrcat((xmlChar *)*param_3,local_10);
        *param_3 = (long)pxVar3;
      }
      if (local_20 != (xmlChar *)0x0) {
        (*(code *)_xmlFree)(local_20);
        local_20 = (xmlChar *)0x0;
      }
      local_30 = _xmlSchemaValueGetNext(local_30);
    } while (local_30 != 0);
    local_44 = 0;
  }
  return local_44;
}

