
undefined4 FUN_1001f53d1(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_94;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  long local_50;
  byte *local_48;
  byte *local_40;
  xmlChar *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  long local_20;
  long local_18;
  long local_10;
  
  local_58 = 0;
  local_48 = (byte *)0x0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    local_94 = 0xffffffff;
  }
  else {
    local_60 = *(long *)(param_1 + 0xa0);
    *(uint *)(local_60 + 0x58) = *(uint *)(local_60 + 0x58) | 0x80;
    uVar2 = _xmlSchemaGetBuiltInType(0x2e);
    *(undefined8 *)(local_60 + 0x70) = uVar2;
    for (local_50 = *(long *)(param_3 + 0x58); local_50 != 0; local_50 = *(long *)(local_50 + 0x30))
    {
      if (*(long *)(local_50 + 0x48) == 0) {
        iVar1 = _xmlStrEqual(*(xmlChar **)(local_50 + 0x10),(xmlChar *)"id");
        if ((iVar1 == 0) &&
           (iVar1 = _xmlStrEqual(*(xmlChar **)(local_50 + 0x10),(xmlChar *)"memberTypes"),
           iVar1 == 0)) {
          FUN_1001ea19e(param_1,0xbdb,0,0,local_50);
        }
      }
      else {
        iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_50 + 0x48) + 0x10),
                             PTR_s_http___www_w3_org_2001_XMLSchema_101111750);
        if (iVar1 != 0) {
          FUN_1001ea19e(param_1,0xbdb,0,0,local_50);
        }
      }
    }
    FUN_1001ef36d(param_1,0,0,param_3,"id");
    local_50 = FUN_1001ece01(param_3,"memberTypes");
    if (local_50 != 0) {
      local_28 = (undefined8 *)0x0;
      local_48 = (byte *)FUN_1001ecf24(param_1,local_50);
      *(byte **)(local_60 + 0x20) = local_48;
      do {
        for (; ((*local_48 == 0x20 || ((8 < *local_48 && (*local_48 < 0xb)))) || (*local_48 == 0xd))
            ; local_48 = local_48 + 1) {
        }
        for (local_40 = local_48;
            (((*local_40 != 0 && (*local_40 != 0x20)) && ((*local_40 < 9 || (10 < *local_40)))) &&
            (*local_40 != 0xd)); local_40 = local_40 + 1) {
        }
        if (local_40 == local_48) break;
        local_38 = _xmlStrndup(local_48,(int)local_40 - (int)local_48);
        iVar1 = FUN_1001eefd8(param_1,param_2,0,0,local_50,local_38,&local_70,&local_68);
        if (iVar1 == 0) {
          local_30 = (undefined8 *)(*(code *)_xmlMalloc)(0x10);
          if (local_30 == (undefined8 *)0x0) {
            FUN_1001e8056(param_1,"xmlSchemaParseUnion, allocating a type link",0);
            return 0xffffffff;
          }
          local_30[1] = 0;
          *local_30 = 0;
          if (local_28 == (undefined8 *)0x0) {
            *(undefined8 **)(local_60 + 0xa8) = local_30;
          }
          else {
            *local_28 = local_30;
          }
          local_28 = local_30;
          local_20 = FUN_1001ee4f8(param_1,4,local_68,local_70);
          if (local_20 == 0) {
            if (local_38 != (xmlChar *)0x0) {
              (*(code *)_xmlFree)(local_38);
            }
            return 0xffffffff;
          }
          local_30[1] = local_20;
        }
        if (local_38 != (xmlChar *)0x0) {
          (*(code *)_xmlFree)(local_38);
          local_38 = (xmlChar *)0x0;
        }
        local_48 = local_40;
      } while (*local_40 != 0);
    }
    local_58 = *(long *)(param_3 + 0x18);
    if ((((local_58 != 0) && (*(long *)(local_58 + 0x48) != 0)) &&
        (iVar1 = _xmlStrEqual(*(xmlChar **)(local_58 + 0x10),(xmlChar *)"annotation"), iVar1 != 0))
       && (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_58 + 0x48) + 0x10),
                                PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 != 0)) {
      uVar2 = FUN_1001f020a(param_1,param_2,local_58);
      FUN_1001f31b2(local_60,uVar2);
      local_58 = *(long *)(local_58 + 0x30);
    }
    if (((local_58 != 0) && (*(long *)(local_58 + 0x48) != 0)) &&
       ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_58 + 0x10),(xmlChar *)"simpleType"), iVar1 != 0 &&
        (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_58 + 0x48) + 0x10),
                              PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 != 0)))) {
      local_10 = 0;
      while (((local_58 != 0 && (*(long *)(local_58 + 0x48) != 0)) &&
             ((iVar1 = _xmlStrEqual(*(xmlChar **)(local_58 + 0x10),(xmlChar *)"simpleType"),
              iVar1 != 0 &&
              (iVar1 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_58 + 0x48) + 0x10),
                                    PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar1 != 0)))
             )) {
        local_18 = FUN_1001f5d6b(param_1,param_2,local_58,0);
        if (local_18 != 0) {
          if (local_10 == 0) {
            *(long *)(local_60 + 0x38) = local_18;
          }
          else {
            *(long *)(local_10 + 8) = local_18;
          }
          *(undefined8 *)(local_18 + 8) = 0;
          local_10 = local_18;
        }
        local_58 = *(long *)(local_58 + 0x30);
      }
    }
    if (local_58 != 0) {
      FUN_1001eac65(param_1,0xbd9,0,0,param_3,local_58,0,"(annotation?, simpleType*)");
    }
    if ((local_50 == 0) && (*(long *)(local_60 + 0x38) == 0)) {
      FUN_1001ea46a(param_1,0xbbf,0,0,param_3,
                    "Either the attribute \'memberTypes\' or at least one <simpleType> child must be present"
                    ,0);
    }
    local_94 = 0;
  }
  return local_94;
}

