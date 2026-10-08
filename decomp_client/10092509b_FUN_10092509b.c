
long FUN_10092509b(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long local_48;
  long local_18;
  long local_10;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    local_48 = 0;
  }
  else {
    local_48 = FUN_10092259c(param_1,param_2,0x15,param_3);
    if (local_48 == 0) {
      local_48 = 0;
    }
    else {
      for (local_10 = *(long *)(param_3 + 0x58); local_10 != 0;
          local_10 = *(long *)(local_10 + 0x30)) {
        if (*(long *)(local_10 + 0x48) == 0) {
          iVar1 = _xmlStrEqual(*(xmlChar **)(local_10 + 0x10),(xmlChar *)"id");
          if (((iVar1 == 0) &&
              (iVar1 = _xmlStrEqual(*(xmlChar **)(local_10 + 0x10),(xmlChar *)"namespace"),
              iVar1 == 0)) &&
             (iVar1 = _xmlStrEqual(*(xmlChar **)(local_10 + 0x10),(xmlChar *)"processContents"),
             iVar1 == 0)) {
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
      FUN_100922c95(param_1,0,local_48,param_3,"id");
      iVar1 = FUN_1009245fc(param_1,param_2,local_48,param_3);
      if (iVar1 == 0) {
        local_18 = *(long *)(param_3 + 0x18);
        if (((local_18 != 0) && (*(long *)(local_18 + 0x48) != 0)) &&
           ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"annotation"),
            iVar1 != 0 &&
            (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_18 + 0x48) + 0x10),
                                  PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 != 0))))
        {
          uVar2 = FUN_100923b32(param_1,param_2,local_18);
          *(undefined8 *)(local_48 + 0x10) = uVar2;
          local_18 = *(long *)(local_18 + 0x30);
        }
        if (local_18 != 0) {
          FUN_10091e58d(param_1,0xbd9,0,0,param_3,local_18,0,"(annotation?)");
        }
      }
      else {
        local_48 = 0;
      }
    }
  }
  return local_48;
}

