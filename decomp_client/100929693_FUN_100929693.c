
undefined4 * FUN_100929693(long param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar3;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar4;
  undefined8 local_48;
  undefined4 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  long local_20;
  int local_14;
  undefined4 *local_10;
  
  local_28 = 0;
  local_48 = 0;
  local_14 = 0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    return (undefined4 *)0x0;
  }
  if (param_4 != 0) {
    local_20 = FUN_100920729(param_3,"name");
    if (local_20 == 0) {
      FUN_10091d7dc(param_1,0xbdc,0,param_3,"name",0);
      return (undefined4 *)0x0;
    }
    uVar2 = _xmlSchemaGetBuiltInType(0x16);
    iVar1 = FUN_100923679(param_1,0,0,local_20,uVar2,&local_48);
    if (iVar1 != 0) {
      return (undefined4 *)0x0;
    }
    if (*(int *)(param_1 + 0xc0) != 0) {
      if (*(int *)(param_1 + 0xc4) != 0) {
        FUN_10091dd92(param_1,0xc09,0,0,param_3,
                      "Redefinition of built-in simple types is not supported",0);
        return (undefined4 *)0x0;
      }
      local_10 = (undefined4 *)
                 _xmlSchemaGetPredefinedType
                           (local_48,PTR_s_http___www_w3_org_2001_XMLSchema_102279850);
      if (local_10 != (undefined4 *)0x0) {
        return local_10;
      }
    }
  }
  if (param_4 == 0) {
    local_40 = (undefined4 *)
               FUN_100921a95(param_1,param_2,0,*(undefined8 *)(param_1 + 0xd0),param_3,0);
    if (local_40 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    *local_40 = 4;
    local_40[0x17] = 4;
    for (local_20 = *(long *)(param_3 + 0x58); local_20 != 0; local_20 = *(long *)(local_20 + 0x30))
    {
      if (*(long *)(local_20 + 0x48) == 0) {
        iVar1 = _xmlStrEqual(*(xmlChar **)(local_20 + 0x10),(xmlChar *)"id");
        if (iVar1 == 0) {
          FUN_10091dac6(param_1,0xbdb,0,local_40,local_20);
        }
      }
      else {
        iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_20 + 0x48) + 0x10),
                             PTR_s_http___www_w3_org_2001_XMLSchema_102279850);
        if (iVar1 != 0) {
          FUN_10091dac6(param_1,0xbdb,0,local_40,local_20);
        }
      }
    }
  }
  else {
    local_40 = (undefined4 *)
               FUN_100921a95(param_1,param_2,local_48,*(undefined8 *)(param_1 + 0xd0),param_3,1);
    if (local_40 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    *local_40 = 4;
    local_40[0x17] = 4;
    local_40[0x16] = local_40[0x16] | 8;
    local_20 = *(long *)(param_3 + 0x58);
    while( true ) {
      uVar3 = (undefined4)((ulong)in_stack_ffffffffffffff68 >> 0x20);
      uVar4 = (undefined4)((ulong)in_stack_ffffffffffffff70 >> 0x20);
      if (local_20 == 0) break;
      if (*(long *)(local_20 + 0x48) == 0) {
        iVar1 = _xmlStrEqual(*(xmlChar **)(local_20 + 0x10),(xmlChar *)"id");
        if (((iVar1 == 0) &&
            (iVar1 = _xmlStrEqual(*(xmlChar **)(local_20 + 0x10),(xmlChar *)"name"), iVar1 == 0)) &&
           (iVar1 = _xmlStrEqual(*(xmlChar **)(local_20 + 0x10),(xmlChar *)"final"), iVar1 == 0)) {
          FUN_10091dac6(param_1,0xbdb,0,local_40,local_20);
        }
      }
      else {
        iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_20 + 0x48) + 0x10),
                             PTR_s_http___www_w3_org_2001_XMLSchema_102279850);
        if (iVar1 != 0) {
          FUN_10091dac6(param_1,0xbdb,0,local_40,local_20);
        }
      }
      local_20 = *(long *)(local_20 + 0x30);
    }
    local_20 = FUN_100920729(param_3,"final");
    if (local_20 == 0) {
      if ((*(uint *)(param_2 + 0x30) >> 3 & 1) != 0) {
        local_40[0x16] = local_40[0x16] | 0x400;
      }
      if ((*(uint *)(param_2 + 0x30) >> 4 & 1) != 0) {
        local_40[0x16] = local_40[0x16] | 0x800;
      }
      if ((*(uint *)(param_2 + 0x30) >> 5 & 1) != 0) {
        local_40[0x16] = local_40[0x16] | 0x1000;
      }
    }
    else {
      local_48 = FUN_1009208b3(param_1,param_3,"final");
      iVar1 = FUN_1009264b3(local_48,local_40 + 0x16,0xffffffff,0xffffffff,0x400,0xffffffff,
                            CONCAT44(uVar3,0x800),CONCAT44(uVar4,0x1000));
      if (iVar1 != 0) {
        FUN_10091e207(param_1,0xbdd,local_40,local_20,0,
                      "(#all | List of (list | union | restriction)",local_48,0,0,0);
      }
    }
  }
  *(undefined8 *)(local_40 + 0x34) = *(undefined8 *)(param_1 + 0xd0);
  FUN_100922c95(param_1,0,local_40,param_3,"id");
  local_38 = *(undefined8 *)(param_1 + 0xa0);
  local_30 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined4 **)(param_1 + 0xa0) = local_40;
  *(undefined4 **)(param_1 + 0xa8) = local_40;
  local_28 = *(long *)(param_3 + 0x18);
  if (((local_28 != 0) && (*(long *)(local_28 + 0x48) != 0)) &&
     ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"annotation"), iVar1 != 0 &&
      (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                            PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 != 0)))) {
    uVar2 = FUN_100923b32(param_1,param_2,local_28);
    *(undefined8 *)(local_40 + 0xc) = uVar2;
    local_28 = *(long *)(local_28 + 0x30);
  }
  if (local_28 == 0) {
    FUN_10091e58d(param_1,0xbda,0,local_40,param_3,0,0,"(annotation?, (restriction | list | union))"
                 );
  }
  else if ((((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
           (iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"restriction"),
           iVar1 == 0)) ||
          (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 == 0)) {
    if (((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
       ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"list"), iVar1 == 0 ||
        (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                              PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 == 0)))) {
      if ((((local_28 != 0) && (*(long *)(local_28 + 0x48) != 0)) &&
          (iVar1 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"union"), iVar1 != 0)) &&
         (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                               PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar1 != 0)) {
        FUN_100928cf9(param_1,param_2,local_28);
        local_28 = *(long *)(local_28 + 0x30);
      }
    }
    else {
      FUN_1009292da(param_1,param_2,local_28);
      local_28 = *(long *)(local_28 + 0x30);
    }
  }
  else {
    FUN_10092e1a6(param_1,param_2,local_28,4);
    local_14 = 1;
    local_28 = *(long *)(local_28 + 0x30);
  }
  if (local_28 != 0) {
    FUN_10091e58d(param_1,0xbd9,0,local_40,param_3,local_28,0,
                  "(annotation?, (restriction | list | union))");
  }
  if (((param_4 != 0) && (*(int *)(param_1 + 0xc4) != 0)) && (local_14 == 0)) {
    FUN_10091dd92(param_1,0xc09,0,0,param_3,
                  "This is a redefinition, thus the <simpleType> must have a <restriction> child",0)
    ;
  }
  *(undefined8 *)(param_1 + 0xa8) = local_30;
  *(undefined8 *)(param_1 + 0xa0) = local_38;
  return local_40;
}

