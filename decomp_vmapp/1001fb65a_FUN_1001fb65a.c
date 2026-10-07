
undefined8 FUN_1001fb65a(long param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long local_28;
  long local_20;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    lVar1 = *(long *)(param_1 + 0xa0);
    *(uint *)(lVar1 + 0x58) = *(uint *)(lVar1 + 0x58) | 2;
    for (local_20 = *(long *)(param_3 + 0x58); local_20 != 0; local_20 = *(long *)(local_20 + 0x30))
    {
      if (*(long *)(local_20 + 0x48) == 0) {
        iVar2 = _xmlStrEqual(*(xmlChar **)(local_20 + 0x10),(xmlChar *)"id");
        if ((iVar2 == 0) &&
           (iVar2 = _xmlStrEqual(*(xmlChar **)(local_20 + 0x10),(xmlChar *)"base"), iVar2 == 0)) {
          FUN_1001ea19e(param_1,0xbdb,0,0,local_20);
        }
      }
      else {
        iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_20 + 0x48) + 0x10),
                             PTR_s_http___www_w3_org_2001_XMLSchema_101111750);
        if (iVar2 != 0) {
          FUN_1001ea19e(param_1,0xbdb,0,0,local_20);
        }
      }
    }
    FUN_1001ef36d(param_1,0,0,param_3,"id");
    iVar2 = FUN_1001ef2dd(param_1,param_2,0,0,param_3,"base",lVar1 + 0x68,lVar1 + 0x60);
    if ((iVar2 == 0) && (*(long *)(lVar1 + 0x60) == 0)) {
      FUN_1001e9eb4(param_1,0xbdc,0,param_3,"base",0);
    }
    local_28 = *(long *)(param_3 + 0x18);
    if ((((local_28 != 0) && (*(long *)(local_28 + 0x48) != 0)) &&
        (iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"annotation"), iVar2 != 0))
       && (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 != 0)) {
      uVar3 = FUN_1001f020a(param_1,param_2,local_28);
      FUN_1001f31b2(lVar1,uVar3);
      local_28 = *(long *)(local_28 + 0x30);
    }
    if (param_4 == 10) {
      if (((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
         ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"all"), iVar2 == 0 ||
          (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 == 0)))) {
        if (((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
           ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"choice"), iVar2 == 0 ||
            (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                  PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 == 0))))
        {
          if ((((local_28 == 0) || (*(long *)(local_28 + 0x48) == 0)) ||
              (iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"sequence"),
              iVar2 == 0)) ||
             (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                   PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 == 0)) {
            if (((local_28 != 0) && (*(long *)(local_28 + 0x48) != 0)) &&
               ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"group"), iVar2 != 0
                && (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                         PTR_s_http___www_w3_org_2001_XMLSchema_101111750),
                   iVar2 != 0)))) {
              uVar3 = FUN_1001f657a(param_1,param_2,local_28);
              *(undefined8 *)(lVar1 + 0x38) = uVar3;
              local_28 = *(long *)(local_28 + 0x30);
            }
          }
          else {
            uVar3 = FUN_1001f9f0b(param_1,param_2,local_28,6,1);
            *(undefined8 *)(lVar1 + 0x38) = uVar3;
            local_28 = *(long *)(local_28 + 0x30);
          }
        }
        else {
          uVar3 = FUN_1001f9f0b(param_1,param_2,local_28,7,1);
          *(undefined8 *)(lVar1 + 0x38) = uVar3;
          local_28 = *(long *)(local_28 + 0x30);
        }
      }
      else {
        uVar3 = FUN_1001f9f0b(param_1,param_2,local_28,8,1);
        *(undefined8 *)(lVar1 + 0x38) = uVar3;
        local_28 = *(long *)(local_28 + 0x30);
      }
    }
    if (((local_28 != 0) &&
        (local_28 = FUN_1001f001c(param_1,param_2,local_28,lVar1), local_28 != 0)) &&
       ((*(long *)(local_28 + 0x48) != 0 &&
        ((iVar2 = _xmlStrEqual(*(xmlChar **)(local_28 + 0x10),(xmlChar *)"anyAttribute"), iVar2 != 0
         && (iVar2 = _xmlStrEqual(*(xmlChar **)(*(long *)(local_28 + 0x48) + 0x10),
                                  PTR_s_http___www_w3_org_2001_XMLSchema_101111750), iVar2 != 0)))))
       ) {
      lVar1 = *(long *)(param_1 + 0xa0);
      uVar3 = FUN_1001f1773(param_1,param_2,local_28);
      *(undefined8 *)(lVar1 + 0x98) = uVar3;
      local_28 = *(long *)(local_28 + 0x30);
    }
    if (local_28 != 0) {
      if (param_4 == 10) {
        FUN_1001eac65(param_1,0xbd9,0,0,param_3,local_28,0,
                      "(annotation?, ((group | all | choice | sequence)?, ((attribute | attributeGroup)*, anyAttribute?)))"
                     );
      }
      else {
        FUN_1001eac65(param_1,0xbd9,0,0,param_3,local_28,0,
                      "(annotation?, ((attribute | attributeGroup)*, anyAttribute?))");
      }
    }
  }
  return 0;
}

