
int FUN_10092c796(long param_1,long param_2,long param_3)

{
  xmlChar *pxVar1;
  int iVar2;
  undefined8 uVar3;
  int local_64;
  long local_48;
  long local_40;
  xmlChar *local_38;
  long local_30;
  long local_28;
  int local_1c;
  
  local_38 = (xmlChar *)0x0;
  local_40 = 0;
  local_1c = 0;
  local_48 = 0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    local_64 = -1;
  }
  else {
    for (local_28 = *(long *)(param_3 + 0x58); local_28 != 0; local_28 = *(long *)(local_28 + 0x30))
    {
      if (*(long *)(local_28 + 0x48) == 0) {
        iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"id");
        if (((iVar2 == 0) &&
            (iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"namespace"), iVar2 == 0
            )) && (iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"schemaLocation"),
                  iVar2 == 0)) {
          FUN_10091dac6(param_1,0xbdb,0,0,local_28);
        }
      }
      else {
        iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                             PTR_s_http___www_w3_org_2001_XMLSchema_102279850);
        if (iVar2 != 0) {
          FUN_10091dac6(param_1,0xbdb,0,0,local_28);
        }
      }
    }
    uVar3 = _xmlSchemaGetBuiltInType(0x1d);
    iVar2 = FUN_10092370e(param_1,0,0,param_3,"namespace",uVar3,&local_38);
    pxVar1 = local_38;
    if (iVar2 == 0) {
      uVar3 = _xmlSchemaGetBuiltInType(0x1d);
      iVar2 = FUN_10092370e(param_1,0,0,param_3,"schemaLocation",uVar3,&local_40);
      pxVar1 = local_38;
      if (iVar2 == 0) {
        local_30 = *(long *)(param_3 + 0x18);
        if (((local_30 != 0) && (*(long *)(local_30 + 0x48) != 0)) &&
           ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_30 + 0x10),(xmlChar *)"annotation"),
            iVar2 != 0 &&
            (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_30 + 0x48) + 0x10),
                                  PTR_s_http___www_w3_org_2001_XMLSchema_102279850), iVar2 != 0))))
        {
          local_30 = *(long *)(local_30 + 0x30);
        }
        if (local_30 != 0) {
          FUN_10091e58d(param_1,0xbd9,0,0,param_3,local_30,0,"(annotation?)");
        }
        if (local_38 == (xmlChar *)0x0) {
          if (*(long *)(param_1 + 0xd0) == 0) {
            FUN_10091dd92(param_1,0xbf9,0,0,param_3,
                          "The attribute \'namespace\' must be existent if the importing schema has no target namespace"
                          ,0);
            return *(int *)(param_1 + 0x20);
          }
        }
        else {
          iVar2 = _xmlStrEqual(*(xmlChar **)(param_1 + 0xd0),local_38);
          if (iVar2 != 0) {
            FUN_10091dd92(param_1,0xbf8,0,0,param_3,
                          "The value of the attribute \'namespace\' must not match the target namespace \'%s\' of the importing schema"
                          ,*(undefined8 *)(param_1 + 0xd0));
            return *(int *)(param_1 + 0x20);
          }
        }
        if (local_40 != 0) {
          local_40 = FUN_10092be9e(*(undefined8 *)(param_1 + 0x98),local_40,param_3);
        }
        local_64 = FUN_10092bf79(param_1,1,local_40,0,0,0,param_3,*(undefined8 *)(param_1 + 0xd0),
                                 local_38,&local_48);
        if (local_64 == 0) {
          local_1c = local_64;
          if ((local_48 == 0) && (local_40 != 0)) {
            FUN_10091c726(param_1,0xc0c,param_3,0,
                          "Failed to locate a schema at location \'%s\'. Skipping the import",
                          local_40,0,0);
          }
          if (((local_48 != 0) && (*(long *)(local_48 + 0x20) != 0)) &&
             (*(int *)(local_48 + 0x34) == 0)) {
            local_1c = FUN_10092bcab(param_1,param_2,local_48);
          }
          local_64 = local_1c;
        }
      }
      else {
        uVar3 = _xmlSchemaGetBuiltInType(0x1d);
        FUN_10091e207(param_1,0xbdd,0,param_3,uVar3,0,pxVar1,0,0,0);
        local_64 = *(int *)(param_1 + 0x20);
      }
    }
    else {
      uVar3 = _xmlSchemaGetBuiltInType(0x1d);
      FUN_10091e207(param_1,0xbdd,0,param_3,uVar3,0,pxVar1,0,0,0);
      local_64 = *(int *)(param_1 + 0x20);
    }
  }
  return local_64;
}

