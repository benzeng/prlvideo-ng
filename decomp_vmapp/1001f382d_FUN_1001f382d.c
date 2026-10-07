
undefined8 *
FUN_1001f382d(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined4 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *local_58;
  long local_18;
  long local_10;
  
  for (local_10 = *(long *)(param_4 + 0x58); local_10 != 0; local_10 = *(long *)(local_10 + 0x30)) {
    if (*(long *)(local_10 + 0x48) == 0) {
      iVar1 = _xmlStrEqual(*(xmlChar **)(local_10 + 0x10),(xmlChar *)"id");
      if ((iVar1 == 0) &&
         (iVar1 = _xmlStrEqual(*(xmlChar **)(local_10 + 0x10),(xmlChar *)"xpath"), iVar1 == 0)) {
        FUN_1001ea19e(param_1,0xbdb,0,0,local_10);
      }
    }
    else {
      iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_10 + 0x48) + 0x10),
                           PTR_s_http___www_w3_org_2001_XMLSchema_101111750);
      if (iVar1 != 0) {
        FUN_1001ea19e(param_1,0xbdb,0,0,local_10);
      }
    }
  }
  local_58 = (undefined8 *)(*(code *)_xmlMalloc)(0x28);
  if (local_58 == (undefined8 *)0x0) {
    FUN_1001e8056(param_1,"allocating a \'selector\' of an identity-constraint definition",0);
    local_58 = (undefined8 *)0x0;
  }
  else {
    *local_58 = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    lVar2 = FUN_1001ece01(param_4,"xpath");
    if (lVar2 == 0) {
      FUN_1001e9eb4(param_1,0xbdc,0,param_4,"name",0);
    }
    else {
      uVar3 = FUN_1001ecf24(param_1,lVar2);
      local_58[3] = uVar3;
      iVar1 = FUN_1001f2ef2(param_1,param_3,local_58,lVar2,param_5);
      if (iVar1 == -1) {
        FUN_1001e80a3(param_1,lVar2,0xbfd,
                      "Internal error: xmlSchemaParseIDCSelectorAndField, validating the XPath expression of a IDC selector.\n"
                      ,0,0);
      }
    }
    FUN_1001ef36d(param_1,0,0,param_4,"id");
    local_18 = *(long *)(param_4 + 0x18);
    if ((((local_18 != 0) && (*(long *)(local_18 + 0x48) != 0)) &&
        (iVar1 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"annotation"), iVar1 != 0))
       && (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_18 + 0x48) + 0x10),
                                PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 != 0)) {
      uVar3 = FUN_1001f020a(param_1,param_2,local_18);
      FUN_1001f31b2(param_3,uVar3);
      local_18 = *(long *)(local_18 + 0x30);
    }
    if (local_18 != 0) {
      FUN_1001eac65(param_1,0xbd9,0,0,param_4,local_18,0,"(annotation?)");
    }
  }
  return local_58;
}

