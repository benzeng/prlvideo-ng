
long FUN_100929ea2(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long local_58;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  long local_20;
  long local_18;
  int local_10;
  int local_c;
  
  local_20 = 0;
  local_30 = 0;
  local_38 = 0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    local_58 = 0;
  }
  else {
    local_18 = FUN_100920729(param_3,"ref");
    if (local_18 == 0) {
      FUN_10091d7dc(param_1,0xbdc,0,param_3,"ref",0);
      local_58 = 0;
    }
    else {
      iVar1 = FUN_100922b92(param_1,param_2,0,0,local_18,&local_38,&local_30);
      if (iVar1 == 0) {
        local_10 = FUN_1009230c5(param_1,param_3,0,0xffffffff,1,"xs:nonNegativeInteger");
        local_c = FUN_100922e64(param_1,param_3,0,0x40000000,1,"(xs:nonNegativeInteger | unbounded)"
                               );
        for (local_18 = *(long *)(param_3 + 0x58); local_18 != 0;
            local_18 = *(long *)(local_18 + 0x30)) {
          if (*(long *)(local_18 + 0x48) == 0) {
            iVar1 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"ref");
            if (iVar1 == 0) {
              iVar1 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"id");
              if (iVar1 == 0) {
                iVar1 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"minOccurs");
                if (iVar1 == 0) {
                  iVar1 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"maxOccurs");
                  if (iVar1 == 0) {
                    FUN_10091dac6(param_1,0xbdb,0,0,local_18);
                  }
                }
              }
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
        FUN_100922c95(param_1,0,0,param_3,"id");
        local_28 = FUN_100921fad(param_1,param_2,param_3,local_10,local_c);
        if (local_28 == 0) {
          local_58 = 0;
        }
        else {
          FUN_10091eeca(*(long *)(param_1 + 0x30) + 0x20,local_28);
          uVar2 = FUN_100921e20(param_1,0x11,local_30,local_38);
          *(undefined8 *)(local_28 + 0x18) = uVar2;
          FUN_100923805(param_1,param_2,param_3,local_28,local_38);
          FUN_100924a3e(param_1,local_28,param_3,local_10,local_c);
          local_20 = *(long *)(param_3 + 0x18);
          if ((local_20 != 0) && (*(long *)(local_20 + 0x48) != 0)) {
            iVar1 = _xmlStrEqual(*(xmlChar **)(local_20 + 0x10),(xmlChar *)"annotation");
            if (iVar1 != 0) {
              iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_20 + 0x48) + 0x10),
                                   PTR_s_http___www_w3_org_2001_XMLSchema_102279850);
              if (iVar1 != 0) {
                uVar2 = FUN_100923b32(param_1,param_2,local_20);
                *(undefined8 *)(local_28 + 8) = uVar2;
                local_20 = *(long *)(local_20 + 0x30);
              }
            }
          }
          if (local_20 != 0) {
            FUN_10091e58d(param_1,0xbd9,0,0,param_3,local_20,0,"(annotation?)");
          }
          if ((local_10 == 0) && (local_c == 0)) {
            local_58 = 0;
          }
          else {
            local_58 = local_28;
          }
        }
      }
      else {
        local_58 = 0;
      }
    }
  }
  return local_58;
}

