
undefined8 FUN_1001f59b2(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_18;
  long local_10;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    lVar3 = *(long *)(param_1 + 0xa0);
    *(uint *)(lVar3 + 0x58) = *(uint *)(lVar3 + 0x58) | 0x40;
    uVar2 = _xmlSchemaGetBuiltInType(0x2e);
    *(undefined8 *)(lVar3 + 0x70) = uVar2;
    for (local_10 = *(long *)(param_3 + 0x58); local_10 != 0; local_10 = *(long *)(local_10 + 0x30))
    {
      if (*(long *)(local_10 + 0x48) == 0) {
        iVar1 = _xmlStrEqual(*(xmlChar **)(local_10 + 0x10),(xmlChar *)"id");
        if ((iVar1 == 0) &&
           (iVar1 = _xmlStrEqual(*(xmlChar **)(local_10 + 0x10),(xmlChar *)"itemType"), iVar1 == 0))
        {
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
    FUN_1001ef36d(param_1,0,0,param_3,"id");
    FUN_1001ef2dd(param_1,param_2,0,0,param_3,"itemType",lVar3 + 0x28,lVar3 + 0x20);
    local_18 = *(long *)(param_3 + 0x18);
    if (((local_18 != 0) && (*(long *)(local_18 + 0x48) != 0)) &&
       ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"annotation"), iVar1 != 0 &&
        (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_18 + 0x48) + 0x10),
                              PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 != 0)))) {
      uVar2 = FUN_1001f020a(param_1,param_2,local_18);
      FUN_1001f31b2(lVar3,uVar2);
      local_18 = *(long *)(local_18 + 0x30);
    }
    if ((((local_18 == 0) || (*(long *)(local_18 + 0x48) == 0)) ||
        (iVar1 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"simpleType"), iVar1 == 0))
       || (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_18 + 0x48) + 0x10),
                                PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 == 0)) {
      if (*(long *)(lVar3 + 0x20) == 0) {
        FUN_1001ea46a(param_1,3000,0,0,param_3,
                      "Either the attribute \'itemType\' or the <simpleType> child must be present",
                      0);
      }
    }
    else {
      if (*(long *)(lVar3 + 0x20) == 0) {
        uVar2 = FUN_1001f5d6b(param_1,param_2,local_18,0);
        *(undefined8 *)(lVar3 + 0x38) = uVar2;
      }
      else {
        FUN_1001ea46a(param_1,3000,0,0,param_3,
                      "The attribute \'itemType\' and the <simpleType> child are mutually exclusive"
                      ,0);
      }
      local_18 = *(long *)(local_18 + 0x30);
    }
    if (local_18 != 0) {
      FUN_1001eac65(param_1,0xbd9,0,0,param_3,local_18,0,"(annotation?, simpleType?)");
    }
    if (((*(long *)(lVar3 + 0x20) == 0) && (*(long *)(lVar3 + 0x38) == 0)) &&
       (lVar3 = FUN_1001ece01(param_3,"itemType"), lVar3 == 0)) {
      FUN_1001ea46a(param_1,3000,0,0,param_3,
                    "Either the attribute \'itemType\' or the <simpleType> child must be present",0)
      ;
    }
  }
  return 0;
}

