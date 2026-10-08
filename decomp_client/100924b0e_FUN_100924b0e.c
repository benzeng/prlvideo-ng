
long FUN_100924b0e(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long local_58;
  long local_30;
  long local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    local_58 = 0;
  }
  else {
    for (local_18 = *(long *)(param_3 + 0x58); local_18 != 0; local_18 = *(long *)(local_18 + 0x30))
    {
      if (*(long *)(local_18 + 0x48) == 0) {
        iVar1 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"id");
        if (iVar1 == 0) {
          iVar1 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"minOccurs");
          if (iVar1 == 0) {
            iVar1 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"maxOccurs");
            if (iVar1 == 0) {
              iVar1 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"namespace");
              if (iVar1 == 0) {
                iVar1 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"processContents");
                if (iVar1 == 0) {
                  FUN_10091dac6(param_1,0xbdb,0,0,local_18);
                }
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
    iVar1 = FUN_100922e64(param_1,param_3,0,0x40000000,1,"(xs:nonNegativeInteger | unbounded)");
    iVar2 = FUN_1009230c5(param_1,param_3,0,0xffffffff,1,"xs:nonNegativeInteger");
    FUN_100924a3e(param_1,0,param_3,iVar2,iVar1);
    lVar4 = FUN_10092259c(param_1,param_2,2,param_3);
    if (lVar4 == 0) {
      local_58 = 0;
    }
    else {
      FUN_1009245fc(param_1,param_2,lVar4,param_3);
      local_30 = *(long *)(param_3 + 0x18);
      if ((local_30 != 0) && (*(long *)(local_30 + 0x48) != 0)) {
        iVar3 = _xmlStrEqual(*(xmlChar **)(local_30 + 0x10),(xmlChar *)"annotation");
        if (iVar3 != 0) {
          iVar3 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_30 + 0x48) + 0x10),
                               PTR_s_http___www_w3_org_2001_XMLSchema_102279850);
          if (iVar3 != 0) {
            local_10 = FUN_100923b32(param_1,param_2,local_30);
            local_30 = *(long *)(local_30 + 0x30);
          }
        }
      }
      if (local_30 != 0) {
        FUN_10091e58d(param_1,0xbd9,0,0,param_3,local_30,0,"(annotation?)");
      }
      if ((iVar2 == 0) && (iVar1 == 0)) {
        local_58 = 0;
      }
      else {
        local_58 = FUN_100921fad(param_1,param_2,param_3,iVar2,iVar1);
        if (local_58 == 0) {
          local_58 = 0;
        }
        else {
          *(undefined8 *)(local_58 + 8) = local_10;
          *(int *)(lVar4 + 0x20) = iVar2;
          *(int *)(lVar4 + 0x24) = iVar1;
          *(long *)(local_58 + 0x18) = lVar4;
        }
      }
    }
  }
  return local_58;
}

