
long FUN_100925fe4(long param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  long local_20;
  long local_18;
  long local_10;
  
  local_20 = 0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    return 0;
  }
  local_10 = FUN_100920729(param_3,"name");
  local_18 = FUN_100920729(param_3,"ref");
  if ((param_4 == 0) && (local_18 != 0)) {
    local_38 = 0;
    local_40 = 0;
    if (local_18 == 0) {
      FUN_10091d7dc(param_1,0xbdc,0,param_3,"ref",0);
    }
    FUN_100922b92(param_1,param_2,0,0,local_18,&local_38,&local_40);
    local_28 = FUN_1009215cc(param_1,param_2,0,param_3,0);
    if (local_28 == 0) {
      return 0;
    }
    *(undefined8 *)(local_28 + 0x20) = local_40;
    *(undefined8 *)(local_28 + 0x28) = local_38;
    FUN_100923805(param_1,param_2,param_3,local_28,local_38);
  }
  else {
    if (local_10 == 0) {
      FUN_10091d7dc(param_1,0xbdc,0,param_3,"name",0);
      return 0;
    }
    uVar2 = _xmlSchemaGetBuiltInType(0x16);
    iVar1 = FUN_100923679(param_1,0,0,local_10,uVar2,&local_30);
    if (iVar1 != 0) {
      return 0;
    }
    local_28 = FUN_1009215cc(param_1,param_2,local_30,param_3,1);
    if (local_28 == 0) {
      return 0;
    }
  }
  for (local_18 = *(long *)(param_3 + 0x58); local_18 != 0; local_18 = *(long *)(local_18 + 0x30)) {
    if (*(long *)(local_18 + 0x48) == 0) {
      if ((((param_4 == 0) &&
           (iVar1 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"ref"), iVar1 == 0)) ||
          ((param_4 != 0 &&
           (iVar1 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"name"), iVar1 == 0))))
         && (iVar1 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"id"), iVar1 == 0)) {
        FUN_10091dac6(param_1,0xbdb,0,0,local_18);
      }
    }
    else {
      iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_18 + 0x48) + 0x10),
                           PTR_s_http___www_w3_org_2001_XMLSchema_102279850);
      if (iVar1 != 0) {
        FUN_10091dac6(param_1,0xbdb,0,0,local_18);
      }
    }
  }
  FUN_100922c95(param_1,0,local_28,param_3,"id");
  local_20 = *(long *)(param_3 + 0x18);
  if ((((local_20 != 0) && (*(long *)(local_20 + 0x48) != 0)) &&
      (iVar1 = _xmlStrEqual(*(xmlChar **)(local_20 + 0x10),(xmlChar *)"annotation"), iVar1 != 0)) &&
     (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_20 + 0x48) + 0x10),
                           PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 != 0)) {
    uVar2 = FUN_100923b32(param_1,param_2,local_20);
    *(undefined8 *)(local_28 + 0x30) = uVar2;
    local_20 = *(long *)(local_20 + 0x30);
  }
  if (((param_4 != 0) &&
      (local_20 = FUN_100923944(param_1,param_2,local_20,local_28), local_20 != 0)) &&
     ((*(long *)(local_20 + 0x48) != 0 &&
      ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_20 + 0x10),(xmlChar *)"anyAttribute"), iVar1 != 0
       && (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_20 + 0x48) + 0x10),
                                PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 != 0))))))
  {
    uVar2 = FUN_10092509b(param_1,param_2,local_20);
    *(undefined8 *)(local_28 + 0x50) = uVar2;
    local_20 = *(long *)(local_20 + 0x30);
  }
  if (local_20 != 0) {
    FUN_10091e58d(param_1,0xbd9,0,0,param_3,local_20,0,"(annotation?)");
  }
  return local_28;
}

