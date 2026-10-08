
long FUN_10092a265(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_28;
  long local_20;
  long local_18;
  long local_10;
  
  local_18 = 0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    return 0;
  }
  local_10 = FUN_100920729(param_3,"name");
  if (local_10 == 0) {
    FUN_10091d7dc(param_1,0xbdc,0,param_3,"name",0);
    return 0;
  }
  uVar2 = _xmlSchemaGetBuiltInType(0x16);
  iVar1 = FUN_100923679(param_1,0,0,local_10,uVar2,&local_28);
  if (iVar1 == 0) {
    local_20 = FUN_10092209b(param_1,param_2,local_28,*(undefined8 *)(param_1 + 0xd0),param_3);
    if (local_20 != 0) {
      for (local_10 = *(long *)(param_3 + 0x58); local_10 != 0;
          local_10 = *(long *)(local_10 + 0x30)) {
        if (*(long *)(local_10 + 0x48) == 0) {
          iVar1 = _xmlStrEqual(*(xmlChar **)(local_10 + 0x10),(xmlChar *)"name");
          if ((iVar1 == 0) &&
             (iVar1 = _xmlStrEqual(*(xmlChar **)(local_10 + 0x10),(xmlChar *)"id"), iVar1 == 0)) {
            FUN_10091dac6(param_1,0xbdb,0,0,local_10);
          }
        }
        else {
          iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_10 + 0x48) + 0x10),
                               PTR_s_http___www_w3_org_2001_XMLSchema_102279850);
          if (iVar1 != 0) {
            FUN_10091dac6(param_1,0xbdb,0,0,local_10);
          }
        }
      }
      FUN_100922c95(param_1,0,0,param_3,"id");
      local_18 = *(long *)(param_3 + 0x18);
      if (((local_18 != 0) && (*(long *)(local_18 + 0x48) != 0)) &&
         ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"annotation"), iVar1 != 0
          && (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_18 + 0x48) + 0x10),
                                   PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 != 0))))
      {
        uVar2 = FUN_100923b32(param_1,param_2,local_18);
        *(undefined8 *)(local_20 + 8) = uVar2;
        local_18 = *(long *)(local_18 + 0x30);
      }
      if ((((local_18 == 0) || (*(long *)(local_18 + 0x48) == 0)) ||
          (iVar1 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"all"), iVar1 == 0)) ||
         (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_18 + 0x48) + 0x10),
                               PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 == 0)) {
        if (((local_18 == 0) || (*(long *)(local_18 + 0x48) == 0)) ||
           ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"choice"), iVar1 == 0 ||
            (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_18 + 0x48) + 0x10),
                                  PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 == 0))))
        {
          if (((local_18 != 0) && (*(long *)(local_18 + 0x48) != 0)) &&
             ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"sequence"),
              iVar1 != 0 &&
              (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_18 + 0x48) + 0x10),
                                    PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 != 0)))
             ) {
            uVar2 = FUN_10092d833(param_1,param_2,local_18,6,0);
            *(undefined8 *)(local_20 + 0x18) = uVar2;
            local_18 = *(long *)(local_18 + 0x30);
          }
        }
        else {
          uVar2 = FUN_10092d833(param_1,param_2,local_18,7,0);
          *(undefined8 *)(local_20 + 0x18) = uVar2;
          local_18 = *(long *)(local_18 + 0x30);
        }
      }
      else {
        uVar2 = FUN_10092d833(param_1,param_2,local_18,8,0);
        *(undefined8 *)(local_20 + 0x18) = uVar2;
        local_18 = *(long *)(local_18 + 0x30);
      }
      if (local_18 != 0) {
        FUN_10091e58d(param_1,0xbd9,0,0,param_3,local_18,0,
                      "(annotation?, (all | choice | sequence)?)");
      }
      return local_20;
    }
    return 0;
  }
  return 0;
}

