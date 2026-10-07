
undefined8 FUN_1001f020a(long param_1,long param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_48;
  long local_20;
  long local_18;
  
  bVar1 = false;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    local_48 = 0;
  }
  else {
    local_48 = FUN_1001eae8e(param_1,param_3);
    for (local_18 = *(long *)(param_3 + 0x58); local_18 != 0; local_18 = *(long *)(local_18 + 0x30))
    {
      if (((*(long *)(local_18 + 0x48) == 0) &&
          (iVar2 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"id"), iVar2 == 0)) ||
         ((*(long *)(local_18 + 0x48) != 0 &&
          (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_18 + 0x48) + 0x10),
                                PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 != 0)))) {
        FUN_1001ea19e(param_1,0xbdb,0,0,local_18);
      }
    }
    FUN_1001ef36d(param_1,0,0,param_3,"id");
    local_20 = *(long *)(param_3 + 0x18);
    while (local_20 != 0) {
      if (((local_20 == 0) || (*(long *)(local_20 + 0x48) == 0)) ||
         ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_20 + 0x10),(xmlChar *)"appinfo"), iVar2 == 0 ||
          (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_20 + 0x48) + 0x10),
                                PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 == 0)))) {
        if ((((local_20 == 0) || (*(long *)(local_20 + 0x48) == 0)) ||
            (iVar2 = _xmlStrEqual(*(xmlChar **)(local_20 + 0x10),(xmlChar *)"documentation"),
            iVar2 == 0)) ||
           (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_20 + 0x48) + 0x10),
                                 PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 == 0)) {
          if (!bVar1) {
            FUN_1001eac65(param_1,0xbd9,0,0,param_3,local_20,0,"(appinfo | documentation)*");
          }
          bVar1 = true;
          local_20 = *(long *)(local_20 + 0x30);
        }
        else {
          for (local_18 = *(long *)(local_20 + 0x58); local_18 != 0;
              local_18 = *(long *)(local_18 + 0x30)) {
            if (*(long *)(local_18 + 0x48) == 0) {
              iVar2 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"source");
              if (iVar2 == 0) {
                FUN_1001ea19e(param_1,0xbdb,0,0,local_18);
              }
            }
            else {
              iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_18 + 0x48) + 0x10),
                                   PTR_s_http___www_w3_org_2001_XMLSchema_101111750);
              if ((iVar2 != 0) ||
                 ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"lang"),
                  iVar2 != 0 &&
                  (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_18 + 0x48) + 0x10),
                                        (xmlChar *)"http://www.w3.org/XML/1998/namespace"),
                  iVar2 == 0)))) {
                FUN_1001ea19e(param_1,0xbdb,0,0,local_18);
              }
            }
          }
          lVar4 = FUN_1001ece84(local_20,"http://www.w3.org/XML/1998/namespace","lang");
          if (lVar4 != 0) {
            uVar3 = _xmlSchemaGetBuiltInType(0x11);
            FUN_1001efd51(param_1,0,0,lVar4,uVar3,0);
          }
          local_20 = *(long *)(local_20 + 0x30);
        }
      }
      else {
        for (local_18 = *(long *)(local_20 + 0x58); local_18 != 0;
            local_18 = *(long *)(local_18 + 0x30)) {
          if (((*(long *)(local_18 + 0x48) == 0) &&
              (iVar2 = _xmlStrEqual(*(xmlChar **)(local_18 + 0x10),(xmlChar *)"source"), iVar2 == 0)
              ) || ((*(long *)(local_18 + 0x48) != 0 &&
                    (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_18 + 0x48) + 0x10),
                                          PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                    iVar2 != 0)))) {
            FUN_1001ea19e(param_1,0xbdb,0,0,local_18);
          }
        }
        uVar3 = _xmlSchemaGetBuiltInType(0x1d);
        FUN_1001efde6(param_1,0,0,local_20,"source",uVar3,0);
        local_20 = *(long *)(local_20 + 0x30);
      }
    }
  }
  return local_48;
}

